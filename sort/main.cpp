#include <iostream>
#include "SortTestHelper.h"
#include "BubbleSort.h"
#include "SelectionSort.h"
#include "InsertionSort.h"
#include "ShellSort.h"
#include "MergeSort.h"
#include "MergeSortBU.h"
#include "QuickSort1.h"
#include "QuickSort1_enhance.h"
#include "QuickSort2.h"
#include "QuickSort3.h"


int main(int argc, char** argv) {
	int N=10000;

//ð���������
//  int* arr = SortTestHelper::generateRandomArray(N,0,N);
//	bubbleSort(arr,N);
//	SortTestHelper::printArray(arr,N);
//	delete[] arr;

//ѡ���������
//  int* arr = SortTestHelper::generateRandomArray(N,0,N);
//	selectionSort(arr,N);
//	SortTestHelper::printArray(arr,N);
//	delete[] arr;

//�����������
//  int* arr = SortTestHelper::generateRandomArray(N,0,N);
//	insertionSort(arr,N);
//	SortTestHelper::printArray(arr,N);
//	delete[] arr;

//shell����
//  int* arr = SortTestHelper::generateRandomArray(N,0,N);
//	shellSort(arr,N);
//	SortTestHelper::printArray(arr,N);
//	delete[] arr;

//�鲢����
//  int* arr = SortTestHelper::generateRandomArray(N,0,N);
//	mergeSort(arr,N);
//	SortTestHelper::printArray(arr,N);
//	delete[] arr;

//�Ե����Ϲ鲢����
//  int* arr = SortTestHelper::generateRandomArray(N,0,N);
//	mergeSortBU(arr,N);
//	SortTestHelper::printArray(arr,N);
//	delete[] arr;

	//��������͹鲢����Խ���������������ıȽ�
//	int* arr = SortTestHelper::generateNearlyOrderedArray(N,10);
//	int* copyArray=SortTestHelper::copyArray(arr,N);
//	SortTestHelper::testSort("mergeSort",mergeSort,arr,N);
//	std::cout<<std::endl;
//	SortTestHelper::testSort("insertionSort",insertionSort,copyArray,N);
//	delete[] arr;
//	delete[] copyArray;

//���Կ�������
//	int* arr = SortTestHelper::generateRandomArray(N,0,N);
//	quickSort(arr,N);
//	SortTestHelper::printArray(arr,N);
//	delete[] arr;

//��������ʱ�����
//	int* arr = SortTestHelper::generateRandomArray(N,0,N);
//	SortTestHelper::testSort("quickSort",quickSort,arr,N);
//	delete [] arr;

//��������Խ���������������ʱ�����
//	int* arr = SortTestHelper::generateNearlyOrderedArray(N,100);
//	SortTestHelper::testSort("quickSort1",quickSort1,arr,N);
//	delete [] arr;

//��������1�Ľ���Խ���������������ʱ�����
//	int* arr = SortTestHelper::generateNearlyOrderedArray(N,100);
//	SortTestHelper::testSort("quickSort1_enhance",quickSort1_enhance,arr,N);
//	delete [] arr;

//��������1�Ľ���Ժ��д����ظ�Ԫ�ص���������ʱ�����
//	int* arr = SortTestHelper::generateRandomArray(N,0,5);
//	SortTestHelper::testSort("quickSort1_enhance",quickSort1_enhance,arr,N);
//	delete [] arr;

	//ѡ������Ͳ�������Խ���������������ıȽ�
//	int* arr = SortTestHelper::generateNearlyOrderedArray(N,1000);
//	int* copyArray=SortTestHelper::copyArray(arr,N);
//	SortTestHelper::testSort("selectionSort",selectionSort,arr,N);
//	std::cout<<std::endl;
//	SortTestHelper::testSort("insertionSort",insertionSort,copyArray,N);


	//��������2�Ժ��д����ظ�Ԫ�صĲ��� 
//	int* arr = SortTestHelper::generateRandomArray(N,0,5);
//	quickSort2(arr,N);
//	SortTestHelper::testSort("quickSort2",quickSort2,arr,N);
//	delete [] arr;
 

	//��������͹鲢����Խ���������������ıȽ�
//	int* arr=SortTestHelper::generateNearlyOrderedArray(N,100);
//	int* copyArray=SortTestHelper::copyArray(arr,N);
//	SortTestHelper::testSort("mergeSort",mergeSort,arr,N);
//	std::cout<<std::endl;
//	SortTestHelper::testSort("quickSort",quickSort,copyArray,N);
//	delete[] arr;
//	delete[] copyArray;

	//��������2
//	int* arr=SortTestHelper::generateNearlyOrderedArray(N,100);
//	quickSort2(arr,N);
//	SortTestHelper::printArray(arr,N);
//	delete [] arr;

//��������3���� 
	int* arr=SortTestHelper::generateNearlyOrderedArray(N,100);
	quickSort3(arr,N);
	SortTestHelper::printArray(arr,N);
	delete [] arr;



	return 0;
}
