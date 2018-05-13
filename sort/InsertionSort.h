//≤Â»Î≈≈–Ú

#ifndef INSERTION_SORT_H
#define INSERTION_SORT_H

#include <iostream>
#include <algorithm>

template <typename T>
void insertionSort(T arr[],int n) {
	T target = 0;
	int j = 0;
	for (int i = 1; i < n; i++) {
		target = arr[i];
		j = i - 1;
		while (j >= 0 && arr[j] > target) {
			arr[j + 1] = arr[j];
			j--;
		}
		arr[j + 1] = target;
	}
}

template <typename T>
void insertionSort(T arr[],int l,int r) {
	int j = 0;
	T target = 0;
	for ( int i = l + 1; i <= r; i++ ) {
		j = i - 1;
		target = arr[i];
		while (j >= l && target <  arr[j]) {
			arr[j+1] = arr[j];
			--j;
		}
		arr[j+1] = target;
	}
}
#endif 

