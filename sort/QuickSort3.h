//三路快速排序
//解决的问题：带有大量重复元素排序时，分治数组不平衡
//大量重复元素集中在flag元素的一侧
//改进的排序算法从两头分别进行搜索，使得相同元素尽可能的平均的分布在两侧，平衡分治数组

#ifndef QUICK_SORT3_H
#define QUICK_SORT3_H

#include <iostream>
#include <algorithm>
#include <ctime>
#include "InsertionSort.h"


template <typename T>
void __quickSort3(T arr[],int l,int r) {
	if (l >= r)
		return;

	//partition过程
	std::swap(arr[l],arr[rand() % (r - l + 1) + l]);
	T pivot = arr[l];
	int lt = l ;
	int gt = r + 1;
	int i = l + 1;
	while (i < gt) {
		if ( arr[i] > pivot) {
			std::swap(arr[--gt],arr[i]);
		} else if (arr[i] < pivot) {
			std::swap(arr[++lt],arr[i]);
			i++;
		} else {
			i++;
		}
	}
	__quickSort3(arr,l,lt);
	__quickSort3(arr,gt,r);
}

template <typename T>
void quickSort3(T arr[],int n) {
	__quickSort3(arr,0,n-1);
}

#endif

