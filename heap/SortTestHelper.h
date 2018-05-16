#ifndef BASIC_SORT_GENERATION_H
#define BASIC_SORT_GENERATION_H

#include <iostream>
#include <ctime>
#include <cassert>


namespace SortTestHelper {
	//����n��Ԫ�ص�������飬ÿ��Ԫ�ص������ΧΪ[rangeL,rangeR]
	int* generateRandomArray(int n,int rangeL,int rangeR) {
		assert(rangeL <= rangeR);

		int* arr=new int[n];
		srand(time(NULL));
		for (int i = 0; i < n; i++) {
			arr[i]=rand() % (rangeR - rangeL + 1) + rangeL;
		}
		return arr;
	}

	//���ɽ���������������
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
	
	//���鿽��
	int* copyArray(int arr[],int n){
		int* dest =new int[n];
		std::copy(arr,arr+n,dest);
		return dest;
	} 

	//�������õ�����
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

		std::cout<< sortMethod << "����" << n <<"��Ԫ�ع�����" <<double(endTime - startTime)/CLOCKS_PER_SEC <<"��";
	}

};

#endif
