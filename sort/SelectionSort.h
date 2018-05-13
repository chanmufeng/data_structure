//ѡ������ 

#ifndef SELECTION_SORT_H
#define SELECTION_SORT_H

#include <iostream>
#include <algorithm>

template <typename T>
void selectionSort(T arr[],int n){
	int minIndex = 0;
	for (int i = 0; i < n - 1;i++){
		//����ֻ��Ҫ��¼��Сֵ���������ɣ���󽻻�arr[minIndex]��arr[i]���ɣ�������������Ľ�������
		minIndex = i;
		for (int j = i + 1; j < n ;j++){
			if (arr[j] < arr[minIndex])
				minIndex = j;
		}
		std::swap(arr[minIndex],arr[i]);
	}
}

#endif 

