//快速排序1

#ifndef QUICK_SORT_H
#define QUICK_SORT_H

#include <iostream>
#include <algorithm>


template <typename T>
int __partition1(T arr[],int l,int r){
	T pivot = arr[l];
	int j = l;
	for (int i = l + 1;i <= r;i++){
		if (arr[i] < pivot){
			std::swap(arr[i],arr[j + 1]);
			j++;
		}
	}
	std::swap(arr[l],arr[j]);
	return j;
}

template <typename T>
void __quickSort1(T arr[],int l ,int r){
	if (l >= r)
		return ;
	//partition过程，返回标志元素在数组中的最终位置下标
	int p = __partition1(arr,l,r);
	__quickSort1(arr,l,p-1);
	__quickSort1(arr,p+1,r);
	
}

template <typename T>
void quickSort1(T arr[],int n){
	__quickSort1(arr,0,n-1);
}




#endif 

