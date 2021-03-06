#ifndef REVERSE_INDEX_MAX_HEAP_H
#define REVERSE_INDEX_MAX_HEAP_H

#include <iostream>
#include <algorithm>
#include <cassert>

template <typename Item>
class IndexMaxHeap {
	private:
		//存储元素的数组
		Item* data;
		//存储元素索引的数组
		int* indexes;
		//reverse数组
		int* reverse;
		//当前堆中元素个数
		int count;
		//堆容量
		int capacity;
		void shiftUp(int i) {
			while(i > 1) {
				if (data[indexes[i]] > data[indexes[i / 2]]) {
					std::swap(indexes[i],indexes[i / 2]);

					reverse[indexes[i]] = i;
					reverse[indexes[i / 2]] = i / 2;
				}
				i /= 2;
			}
		}

		void shiftDown(int i) {
			int j = 0;
			while (2 * i <= count) {
				j = 2 * i;

				if (j + 1 <= count && data[indexes[j]] < data[indexes[j + 1]])
					j += 1;

				if (data[indexes[i]] >= data[indexes[j]])
					break;

				std::swap(indexes[i],indexes[j]);
				reverse[indexes[i]] = i;
				reverse[indexes[j]] = j;
				i = j;

			}
		}

		//检测在indexes堆中是否包含索引i
		bool isContains(int i) {
			assert(i + 1 >=1 && i + 1 <=capacity);
			return reverse[i + 1] != 0;
		}

	public:
		IndexMaxHeap(int capacity) {
			data = new Item[capacity + 1];
			indexes = new int[capacity + 1];
			reverse = new int[capacity + 1];
			for (int i = 0; i <= capacity; i++) {
				reverse[i] = 0;
			}
			this -> capacity = capacity;
			this -> count = 0;
		}

		~IndexMaxHeap() {
			delete [] data;
			delete [] indexes;
			delete [] reverse;
		}

		int size() {
			return count;
		}
		//注意，对用户而言，i是从0开始的，但我们存储是从1开始，编程实需要注意
		void insert(int i,Item item) {
			assert(count < capcacity);
			assert(i > 0 && i + 1 < capcacity);

			data[++i] = item;
			indexes[++count] = i;
			//维护reverse
			reverse[i] = count;

			shiftUp(count);
		}

		Item pop() {
			assert(count > 0);
			Item root = data[indexes[1]];
			indexes[1]=indexes[count];
			reverse[indexes[1]] = 1;
			reverse[indexes[count]] = 0;

			count--;
			shiftDown(1);
			return root;
		}

		//返回最大元素的索引
		int popMaxIndex() {
			assert(count > 0);
			//注意，对用户来说从0开始
			int root = indexes[1] - 1;
			indexes[1] = indexes[count];
			std::swap(indexes[1],indexes[count]);
			count--;
			shiftDown(1);
			return root;
		}

		Item getItem(int i) {
			assert(isContains(i)) ;
			return data[i + 1];
		}

		//修改索引为i的item
		//O(n)
		void change(int i,Item newItem) {
			assert(isContains(i)) ;
			data[++i] = newItem;

			//接下来我们需要找到newItem(即data[i]在indexes中的位置)
			//indexes[j] = i,j表示的就是data[i]在堆中的位置
			//将i尝试shiftUp操作或者shiftDown
//			for (int j = 1; j < count; j++) {
//				if (indexes[j] == i ) {
//					shiftUp(j);
//					shiftDown(j);
//				}
//			}
			int j = reverse[i];
			shiftUp(j);
			shiftDown(j);

		}

}
#endif

