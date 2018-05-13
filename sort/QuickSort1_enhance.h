//��������1�Ľ���

#ifndef QUICK_SORT1_ENHANCE_H
#define QUICK_SORT1_ENHANCE_H

#include <iostream>
#include <algorithm>

template <typename T>
int __partition1_enhance(T arr[],int l,int r) {
	//�Ż���arr[l]�����λ�õ���ֵ����
	std::swap(arr[rand() % (r - l + 1) + l],arr[l]);

	T pivot = arr[l];

	int j = l;
	for (int i = l + 1; i <= r; i++) {
		if (arr[i] > pivot) {
			//do nothing, just i++
		} else {
			std::swap(arr[j + 1],arr[i]);
			j++;

			//���Լ�дΪ
			// std::swap(arr[++j],arr[i]);
		}
	}
	std::swap(arr[l],arr[j]);
	return j;
}


template <typename T>
void __quickSort1_enhance(T arr[],int l,int r) {

	if (l >= r)
		return;

	int p = __partition1_enhance(arr,l,r);
	__quickSort1_enhance(arr,l,p-1);
	__quickSort1_enhance(arr,p+1,r);
}


template <typename T>
void quickSort1_enhance(T arr[],int n) {
	//������������� 
	srand(time(NULL));
	__quickSort1_enhance(arr,0,n-1);
}


#endif

