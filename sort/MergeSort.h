//归并排序

#ifndef MERGE_SORT_H
#define MERGE_SORT_H

#include <iostream>
#include <algorithm>
#include "InsertionSort.h"


template <typename T>

//l为数组第一个元素的下标，mid为待归并数组中的第一个数组的最后一个元素的下标，r为数组最后一个元素的下标
void __merge(T arr[],int l,int mid,int r) {
	//声明辅助数组aux,注意元素个数（数组下标为闭区间）
	T aux[r - l + 1];
	//辅助数组赋值,注意arr下标从l开始，aux下标从0开始
	for (int i = l; i <= r; i++) {
		aux[i - l] = arr[i];
	}

	//定义待归并数组的首元素指针
	int i = l, j = mid + 1;
	for (int k = l; k <= r; k++) {
		//判断指针 i 是否越过 mid
		//如果是，说明aux[l...mid]已经归并完成
		if (i > mid) {
			arr[k] = aux[j - l];
			j++;
		} else if (j > r) { //同理，检查j是否越过r
			arr[k] =aux[i - l];
			i++;
		} else if (aux[i - l] < aux[j - l]) {
			arr[k] = aux[i - l];
			i++;
		} else {
			arr[k] = aux[j - l];
			j++;
		}
	}
}



template <typename T>
void __mergeSort(T arr[],int l,int r) {
	//递归终止条件
//	if (l >= r) {
//		return ;
//	}

	//优化2：如果r-l<=15(随便选择)，则利用插入排序
	if ( r - l <= 15) {
		insertionSort(arr,l,r);
		return;
	}

	int mid = (r + l) / 2;
	__mergeSort(arr, l, mid);
	__mergeSort(arr, mid + 1, r);
	//分别排序完成后进行归并
	//优化1：如果近乎有序，则加入这个判断会有效提升性能
	if (arr[mid] > arr[mid + 1])
		__merge(arr, l, mid, r);
}


template <typename T>
void mergeSort(T arr[], int n) {
	__mergeSort(arr,0,n-1);
}

#endif

