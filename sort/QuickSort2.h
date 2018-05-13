//˫·��������
//��������⣺���д����ظ�Ԫ������ʱ���������鲻ƽ��
//�����ظ�Ԫ�ؼ�����flagԪ�ص�һ��
//�Ľ��������㷨����ͷ�ֱ����������ʹ����ͬԪ�ؾ����ܵ�ƽ���ķֲ������࣬ƽ���������

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

