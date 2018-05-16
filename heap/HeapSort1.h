//第一个版本的堆排序 

#ifndef HEAP_SORT1_H
#define HEAP_SORT1_H

#include <iostream>
#include <cassert>
#include "MaxHeap.h"

template <typename T>

template heapSort1(T arr[],int n){
	MaxHeap<T> maxHeap = MaxHeap<T>(n);
	
	for (int i = 0;i < n;i++){
		maxHeap.insert(arr[i]);
	}
	
	for (int i = n - 1;i >= 0;i--){
		arr[i] = maxHeap.pop();
	}
}

#endif

