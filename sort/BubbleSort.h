//ц╟ещеепР 

#ifndef BUBBLE_SORT_H
#define BUBBLE_SORT_H

#include <iostream>
#include <algorithm>

template <typename T>
void bubbleSort (T arr[], int n){
	for (int i = 0 ; i < n - 1; i++){
		for (int j = 0; j < n - 1 - i; j++){
			if (arr[j + 1] < arr[j])
				std::swap(arr[j + 1],arr[j]);
		}
	}
}

#endif 

