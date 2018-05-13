//�鲢����

#ifndef MERGE_SORT_H
#define MERGE_SORT_H

#include <iostream>
#include <algorithm>
#include "InsertionSort.h"


template <typename T>

//lΪ�����һ��Ԫ�ص��±꣬midΪ���鲢�����еĵ�һ����������һ��Ԫ�ص��±꣬rΪ�������һ��Ԫ�ص��±�
void __merge(T arr[],int l,int mid,int r) {
	//������������aux,ע��Ԫ�ظ����������±�Ϊ�����䣩
	T aux[r - l + 1];
	//�������鸳ֵ,ע��arr�±��l��ʼ��aux�±��0��ʼ
	for (int i = l; i <= r; i++) {
		aux[i - l] = arr[i];
	}

	//������鲢�������Ԫ��ָ��
	int i = l, j = mid + 1;
	for (int k = l; k <= r; k++) {
		//�ж�ָ�� i �Ƿ�Խ�� mid
		//����ǣ�˵��aux[l...mid]�Ѿ��鲢���
		if (i > mid) {
			arr[k] = aux[j - l];
			j++;
		} else if (j > r) { //ͬ�����j�Ƿ�Խ��r
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
	//�ݹ���ֹ����
//	if (l >= r) {
//		return ;
//	}

	//�Ż�2�����r-l<=15(���ѡ��)�������ò�������
	if ( r - l <= 15) {
		insertionSort(arr,l,r);
		return;
	}

	int mid = (r + l) / 2;
	__mergeSort(arr, l, mid);
	__mergeSort(arr, mid + 1, r);
	//�ֱ�������ɺ���й鲢
	//�Ż�1����������������������жϻ���Ч��������
	if (arr[mid] > arr[mid + 1])
		__merge(arr, l, mid, r);
}


template <typename T>
void mergeSort(T arr[], int n) {
	__mergeSort(arr,0,n-1);
}

#endif

