//堆排序算法--最终版 
//在原数组中进行堆排序，不占用额外空间
//首先对原数组进行heapify
//然后将arr[0]和最后一个元素进行交换，重新对一个元素进行heapify，以此类推

//注意：索引从0开始
//左子树：2 * i + 1
//右子树：2 * i + 2
//父节点：(i - 1) / 2
#ifndef SORT_HEAP_H
#define SORT_HEAP_H

#include <iostream>
#include <cassert>

template <typename T>
void __shiftDown(T arr[],int n,int index) {
	while (2 * index + 1 < n) {
		int j = 2 * index + 1;
		if (j + 1 < n && arr[j] < arr[j + 1])
			j++;
		if (arr[index] > arr[j]) {
			break;
		}
		std::swap(arr[index],arr[j]);
		index = j;
	}
}

template <typename T>
void heapSort(T arr[] ,int n) {
	//从第一个不是叶子节点的元素开始向上，对每个节点进行shiftDown
	for (int i = (n - 1) / 2; i >= 0; i--) {
		__shiftDown(arr, n, i);
	}

	for (int i = n - 1; i > 0 ; i --) {
		std::swap(arr[i], arr[0]);
		__shiftDown(arr, i, 0);
	}
}

#endif

