/*
		include : "/home/vaibhav/Documents/omkar/DSA/DSA_using_C/Array/Linear_search/LinearSearch.h"
		compile : /home/vaibhav/Documents/omkar/DSA/DSA_using_C/Array/Linear_search/LinearSearch.c
*/
#include <stddef.h>

int linearSearch(const int *arr, const int arrSize, const int key)
{
	for(size_t i=0; i<arrSize; ++i)
		if(arr[i] == key) 
			return i;
	return -1;
}


int sortedLinearSearch(const int *arr, const int arrSize, const int key)
{
	for(size_t i=0; i<arrSize; ++i)
	{
		if(arr[i] == key) 
			return i;
		if(arr[i] > arr[i])
			break;
	}
		return -1;
}