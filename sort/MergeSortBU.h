//�Ե����� ʵ�ֹ鲢����
//����������������������ԣ���˿�����չ�������������У�ʱ�临�Ӷ�nlogn 
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

