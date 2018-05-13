//自底向上 实现归并排序
//较少利用了数组的索引特性，因此可以扩展用在链表排序当中，时间复杂度nlogn 
#ifndef MERGEBU_SORT_H
#define MERGEBU_SORT_H

#include <iostream>
#include <algorithm>
#include "MergeSort.h"

template <typename T>
void mergeSortBU(T arr[],int n) {
	for (int h = 1; h < n; h += h) {
		for (int j = 0; j + h < n; j += h + h) {
			__merge(arr,j,j + h -1,std::min(j + h + h - 1,n-1));
		}
	}
}

#endif 

