#ifndef BASIC_SORT_GENERATION_H
#define BASIC_SORT_GENERATION_H

#include <iostream>
#include <ctime>
#include <cassert>


namespace SortTestHelper {
	//生成n个元素的随机数组，每个元素的随机范围为[rangeL,rangeR]
	int* generateRandomArray(int n,int rangeL,int rangeR) {
		assert(rangeL <= rangeR);

		int* arr=new int[n];
		srand(time(NULL));
		for (int i = 0; i < n; i++) {
			arr[i]=rand() % (rangeR - rangeL + 1) + rangeL;
		}
		return arr;
	}

	//生成近乎有序的随机数组
	int* generateNearlyOrderedArray(int n,int swapTimes) {

		int* arr=new int[n];
		srand(time(NULL));
		int posX,posY;
		for (int i = 0;i < n;i ++){
			arr[i] = i;
		}
		for (int i = 0; i < swapTimes; i ++) {
			posX = rand()%n;
			posY = rand()%n;

			std::swap(arr[posX],arr[posY]);

		}
		return arr;
	}
	
	//数组拷贝
	int* copyArray(int arr[],int n){
		int* dest =new int[n];
		std::copy(arr,arr+n,dest);
		return dest;
	} 

	//输出排序好的数组
	template<typename T>
	void printArray(T arr[], int n) {

		for (int i = 0; i < n; i++)
			std::cout << arr[i] << " ";
		std::cout << std::endl;

		return;
	}

	template <typename T>
	void testSort(std::string sortMethod,void (*sort)(T[],int ),T arr[],int n) {
		clock_t startTime=clock();
		sort(arr,n);
		clock_t endTime=clock();

		std::cout<< sortMethod << "排列" << n <<"个元素共花费" <<double(endTime - startTime)/CLOCKS_PER_SEC <<"秒";
	}

};

#endif
