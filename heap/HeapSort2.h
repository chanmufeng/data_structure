//第2个版本的堆排序 

#ifndef HEAP_SORT2_H
#define HEAP_SORT2_H

#include <iostream>
#include <cassert>
#include "MaxHeap.h"

template <typename T>

template heapSort2(T arr[],int n){
	MaxHeap<T> maxHeap = MaxHeap<T>(arr,n);
	for (int i = n - 1;i >= 0;i--){
		arr[i] = maxHeap.pop();
	}
}

#endif
