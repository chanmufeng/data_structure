//最大堆

#ifndef MAX_HEAP_H
#define MAX_HEAP_H

//#include <iostream>
//#include <cassert>
//
//template <typename Item>
//class MaxHeap {
//	private:
//		Item* data;
//		int capacity;
//		//count永远指向最后一个元素，而不是最后一个元素后一个
//		int count;
//
//		void shiftUp(int index) {
//			//如果先插入的元素比其父类大，则交换位置
//			while(index > 1 && data[index] > data[index / 2]) {
//				std::swap(data[index],data[index / 2]) ;
//				index /= 2;
//			}
//		}
//
//		void shiftDown(int index) {
//			//如果该节点一直有子节点
//			while( 2 * index <= count) {
//
//				//代表子节点中较大值的索引
//				int j = 2 * index;
//
//				if (j + 1 <= count && data[j] < data[j + 1]) {
//					j = j + 1;
//				}
//
//				if (data[index] > data[j]) {
//					break;
//				}
//				std::swap(data[index],data[j]);
//				index = j;
//
//			}
//		}
//	public:
//		MaxHeap(int capacity) {
//
//			this -> count = 0;
//			data = new Item[capacity + 1];
//			this -> capacity = capacity;
//		}
//
//		//利用数组进行堆的初始化
//		MaxHeap(Item arr[],int n){
//			data = new Item[n + 1];
//			this -> capacity = n;
//			this -> count = n;
//
//			for (int i = 0;i < n;i ++){
//				data[i + 1] = arr[i];
//			}
//
//			//从第一个不是叶子节点的节点开始向上，逐次使用shiftDown方法
//			for (int i = count / 2;i > 0 ;i --){
//				shiftDown(i);
//			}
//		}
//
//		~MaxHeap() {
//			delete [] data;
//		}
//
//		int size() {
//			return count;
//		}
//
//		bool isEmpty() {
//			return count == 0;
//		}
//
//		void insert(Item item) {
//			assert(count  < capacity );
//
//			data[++count] = item;
//			shiftUp(count);
//		}
//
//		Item extractMax() {
//			assert(count > 0);
//			Item first = data [1];
//			//将最后一个和根节点交换
//			data[1] = data[count];
//			count --;
//
//			shiftDown(1);
//
//			return first;
//		}
//
//		void printData() {
//			for (int i = 1; i <= count ; i++) {
//				std::cout<<data[i]<<" ";
//			}
//		}
//
//};

#include <iostream>
#include <algorithm>
#include <cassert>

template <typename Item>
class MaxHeap {
	private:
		Item* data;
		//堆的实际容量（不包括data[0]）
		int capacity;
		//堆目前的元素数量
		int count;

		void shiftUp(int index) {
			while (index > 1 ) {
				if (data[index] > data[index / 2])
					std::swap(data[index],data[index / 2]);
				index /= 2;
			}
		}

		void shiftDown(int index) {
			while (index * 2 <= count) {
				int j =2 * index;
				if (j + 1 <= count && data[j] < data[j + 1]) {
					j++;
				}

				if (data[j] <= data[index]) {
					break;
				}

				std::swap(data[j],data[index]);
				index = j;
			}
		}

	public:
		MaxHeap(int capacity) {
			this -> capacity = capacity;
			data = new Item[capacity + 1];
			count = 0;
		}

		//利用数组进行堆的初始化
		MaxHeap(Item arr[],int n) {
			data = new Item[n + 1];
			this -> capacity = n;
			this -> count = n;

			for (int i = 0; i < n; i ++) {
				data[i + 1] = arr[i];
			}

			//从第一个不是叶子节点的节点开始向上，逐次使用shiftDown方法
			for (int i = count / 2; i > 0 ; i --) {
				shiftDown(i);
			}
		}

		~MaxHeap() {
			delete [] data;
		}

		//插入元素
		void insert(Item item) {
			assert(count < capacity);
			data[++count] = item;
			//将item浮动到合适的位置
			shiftUp(count);
		}

		//弹出根元素
		Item pop() {
			assert(count > 0);
			Item root = data[1];
			data[1] = data[count];
			count--;
			shiftDown(1);
			return root;
		}

		void print() {
			for (int i = 1; i <= count; i++) {
				std::cout << data[i] << " ";
			}
		}

		//获取堆的当前大小
		int size() {
			return count;
		}

		bool isEmpty() {
			return count == 0;
		}
};

#endif

