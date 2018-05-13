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

//冒泡排序测试
//  int* arr = SortTestHelper::generateRandomArray(N,0,N);
//	bubbleSort(arr,N);
//	SortTestHelper::printArray(arr,N);
//	delete[] arr;

//选择排序测试
//  int* arr = SortTestHelper::generateRandomArray(N,0,N);
//	selectionSort(arr,N);
//	SortTestHelper::printArray(arr,N);
//	delete[] arr;

//插入排序测试
//  int* arr = SortTestHelper::generateRandomArray(N,0,N);
//	insertionSort(arr,N);
//	SortTestHelper::printArray(arr,N);
//	delete[] arr;

//shell排序
//  int* arr = SortTestHelper::generateRandomArray(N,0,N);
//	shellSort(arr,N);
//	SortTestHelper::printArray(arr,N);
//	delete[] arr;

//归并排序
//  int* arr = SortTestHelper::generateRandomArray(N,0,N);
//	mergeSort(arr,N);
//	SortTestHelper::printArray(arr,N);
//	delete[] arr;

//自底向上归并排序
//  int* arr = SortTestHelper::generateRandomArray(N,0,N);
//	mergeSortBU(arr,N);
//	SortTestHelper::printArray(arr,N);
//	delete[] arr;

	//插入排序和归并排序对近乎有序数组排序的比较
//	int* arr = SortTestHelper::generateNearlyOrderedArray(N,10);
//	int* copyArray=SortTestHelper::copyArray(arr,N);
//	SortTestHelper::testSort("mergeSort",mergeSort,arr,N);
//	std::cout<<std::endl;
//	SortTestHelper::testSort("insertionSort",insertionSort,copyArray,N);
//	delete[] arr;
//	delete[] copyArray;

//测试快速排序
//	int* arr = SortTestHelper::generateRandomArray(N,0,N);
//	quickSort(arr,N);
//	SortTestHelper::printArray(arr,N);
//	delete[] arr;

//快速排序时间测试
//	int* arr = SortTestHelper::generateRandomArray(N,0,N);
//	SortTestHelper::testSort("quickSort",quickSort,arr,N);
//	delete [] arr;

//快速排序对近乎有序数组排序时间测试
//	int* arr = SortTestHelper::generateNearlyOrderedArray(N,100);
//	SortTestHelper::testSort("quickSort1",quickSort1,arr,N);
//	delete [] arr;

//快速排序1改进版对近乎有序数组排序时间测试
//	int* arr = SortTestHelper::generateNearlyOrderedArray(N,100);
//	SortTestHelper::testSort("quickSort1_enhance",quickSort1_enhance,arr,N);
//	delete [] arr;

//快速排序1改进版对含有大量重复元素的数组排序时间测试
//	int* arr = SortTestHelper::generateRandomArray(N,0,5);
//	SortTestHelper::testSort("quickSort1_enhance",quickSort1_enhance,arr,N);
//	delete [] arr;

	//选择排序和插入排序对近乎有序数组排序的比较
//	int* arr = SortTestHelper::generateNearlyOrderedArray(N,1000);
//	int* copyArray=SortTestHelper::copyArray(arr,N);
//	SortTestHelper::testSort("selectionSort",selectionSort,arr,N);
//	std::cout<<std::endl;
//	SortTestHelper::testSort("insertionSort",insertionSort,copyArray,N);


	//快速排序2对含有大量重复元素的测试 
//	int* arr = SortTestHelper::generateRandomArray(N,0,5);
//	quickSort2(arr,N);
//	SortTestHelper::testSort("quickSort2",quickSort2,arr,N);
//	delete [] arr;
 

	//快速排序和归并排序对近乎有序数组排序的比较
//	int* arr=SortTestHelper::generateNearlyOrderedArray(N,100);
//	int* copyArray=SortTestHelper::copyArray(arr,N);
//	SortTestHelper::testSort("mergeSort",mergeSort,arr,N);
//	std::cout<<std::endl;
//	SortTestHelper::testSort("quickSort",quickSort,copyArray,N);
//	delete[] arr;
//	delete[] copyArray;

	//快速排序2
//	int* arr=SortTestHelper::generateNearlyOrderedArray(N,100);
//	quickSort2(arr,N);
//	SortTestHelper::printArray(arr,N);
//	delete [] arr;

//快速排序3测试 
	int* arr=SortTestHelper::generateNearlyOrderedArray(N,100);
	quickSort3(arr,N);
	SortTestHelper::printArray(arr,N);
	delete [] arr;



	return 0;
}
