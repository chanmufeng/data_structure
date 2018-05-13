//��·��������
//��������⣺���д����ظ�Ԫ������ʱ���������鲻ƽ��
//�����ظ�Ԫ�ؼ�����flagԪ�ص�һ��
//�Ľ��������㷨����ͷ�ֱ����������ʹ����ͬԪ�ؾ����ܵ�ƽ���ķֲ������࣬ƽ���������

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

	//partition����
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

