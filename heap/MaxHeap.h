//����

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
//		//count��Զָ�����һ��Ԫ�أ����������һ��Ԫ�غ�һ��
//		int count;
//
//		void shiftUp(int index) {
//			//����Ȳ����Ԫ�ر��丸����򽻻�λ��
//			while(index > 1 && data[index] > data[index / 2]) {
//				std::swap(data[index],data[index / 2]) ;
//				index /= 2;
//			}
//		}
//
//		void shiftDown(int index) {
//			//����ýڵ�һֱ���ӽڵ�
//			while( 2 * index <= count) {
//
//				//�����ӽڵ��нϴ�ֵ������
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
//		//����������жѵĳ�ʼ��
//		MaxHeap(Item arr[],int n){
//			data = new Item[n + 1];
//			this -> capacity = n;
//			this -> count = n;
//
//			for (int i = 0;i < n;i ++){
//				data[i + 1] = arr[i];
//			}
//
//			//�ӵ�һ������Ҷ�ӽڵ�Ľڵ㿪ʼ���ϣ����ʹ��shiftDown����
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
//			//�����һ���͸��ڵ㽻��
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
		//�ѵ�ʵ��������������data[0]��
		int capacity;
		//��Ŀǰ��Ԫ������
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

		//����������жѵĳ�ʼ��
		MaxHeap(Item arr[],int n) {
			data = new Item[n + 1];
			this -> capacity = n;
			this -> count = n;

			for (int i = 0; i < n; i ++) {
				data[i + 1] = arr[i];
			}

			//�ӵ�һ������Ҷ�ӽڵ�Ľڵ㿪ʼ���ϣ����ʹ��shiftDown����
			for (int i = count / 2; i > 0 ; i --) {
				shiftDown(i);
			}
		}

		~MaxHeap() {
			delete [] data;
		}

		//����Ԫ��
		void insert(Item item) {
			assert(count < capacity);
			data[++count] = item;
			//��item���������ʵ�λ��
			shiftUp(count);
		}

		//������Ԫ��
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

		//��ȡ�ѵĵ�ǰ��С
		int size() {
			return count;
		}

		bool isEmpty() {
			return count == 0;
		}
};

#endif

