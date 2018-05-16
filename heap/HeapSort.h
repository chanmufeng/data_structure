//�������㷨--���հ� 
//��ԭ�����н��ж����򣬲�ռ�ö���ռ�
//���ȶ�ԭ�������heapify
//Ȼ��arr[0]�����һ��Ԫ�ؽ��н��������¶�һ��Ԫ�ؽ���heapify���Դ�����

//ע�⣺������0��ʼ
//��������2 * i + 1
//��������2 * i + 2
//���ڵ㣺(i - 1) / 2
#ifndef SORT_HEAP_H
#define SORT_HEAP_H

#include <iostream>
#include <cassert>

template <typename T>
void __shiftDown(T arr[],int n,int index) {
	while (2 * index + 1 < n) {
		int j = 2 * index + 1;
		if (j + 1 < n && arr[j] < arr[j + 1])
			j++;
		if (arr[index] > arr[j]) {
			break;
		}
		std::swap(arr[index],arr[j]);
		index = j;
	}
}

template <typename T>
void heapSort(T arr[] ,int n) {
	//�ӵ�һ������Ҷ�ӽڵ��Ԫ�ؿ�ʼ���ϣ���ÿ���ڵ����shiftDown
	for (int i = (n - 1) / 2; i >= 0; i--) {
		__shiftDown(arr, n, i);
	}

	for (int i = n - 1; i > 0 ; i --) {
		std::swap(arr[i], arr[0]);
		__shiftDown(arr, i, 0);
	}
}

#endif

