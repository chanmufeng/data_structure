//选择排序 

#ifndef SELECTION_SORT_H
#define SELECTION_SORT_H

#include <iostream>
#include <algorithm>

template <typename T>
void selectionSort(T arr[],int n){
	int minIndex = 0;
	for (int i = 0; i < n - 1;i++){
		//这里只需要记录最小值的索引即可，最后交换arr[minIndex]和arr[i]即可，无需其他冗余的交换操作
		minIndex = i;
		for (int j = i + 1; j < n ;j++){
			if (arr[j] < arr[minIndex])
				minIndex = j;
		}
		std::swap(arr[minIndex],arr[i]);
	}
}

#endif 

