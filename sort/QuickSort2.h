//双路快速排序
//解决的问题：带有大量重复元素排序时，分治数组不平衡
//大量重复元素集中在flag元素的一侧
//改进的排序算法从两头分别进行搜索，使得相同元素尽可能的平均的分布在两侧，平衡分治数组

#ifndef QUICK_SORT2_H
#define QUICK_SORT2_H

#include <iostream>
#include <algorithm>
#include <ctime>
#include "InsertionSort.h"


template <typename T>
int __partition2(T arr[],int l,int r) {
	std::swap(arr[rand() % (r - l + 1) + l],arr[l]);

	T pivot = arr[l];
	int i = l + 1;
	int j = r;
	while(true) {
		while(i <= r && arr[i] < pivot) i++;
		while(j >l && arr[j] > pivot) j--;
		if (i > j) break;
		std::swap(arr[j],arr[i]);
		i++;
		j--;
	}
	std::swap(arr[j],arr[l]);
	return j;

}

template <typename T>
void __quickSort(T arr[],int l,int r) {
	if (r - l >= 15) {
		insertionSort(arr,l,r);
		return ;
	}

	int q = __partition2(arr, l ,r);
	__quickSort(arr,l,q - 1);
	__quickSort(arr,q + 1,r);
}

template <typename T>
void quickSort2(T arr[],int n) {
	srand(time(NULL));
	__quickSort(arr,0,n-1);
}

#endif //OPTIONAL_02_SHELL_SORT_BUBBLESORT_H

