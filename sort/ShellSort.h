//shell排序

#ifndef SHELL_SORT_H
#define SHELL_SORT_H

#include <iostream>

template <typename T>
void shellSort(T arr[],int n) {
	int h = 1;
	T target = 0;
	int j = 0;
	while (h <= n)
		h = 3 * h + 1;
	while (h > 0) {
		//下面即为步长为h的插入排序
		for (int i = h; i < n ; i += h) {
			target = arr[i];
			j = i - h;
			while (j >= 0 && arr[j] > target) {
				arr[j + h] = arr[j];
				j -= h;
			}
			arr[j + h] = target;
		}
		h /= 3;
	}
}

#endif

