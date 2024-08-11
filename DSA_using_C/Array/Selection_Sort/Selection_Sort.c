/*
	Include : #include "/home/vaibhav/Documents/omkar/DSA/DSA_using_C/Array/Selection_Sort/Selection_Sort.h"
	Compile : /home/vaibhav/Documents/omkar/DSA/DSA_using_C/Array/Selection_Sort/Selection_Sort.c

*/
#include <stddef.h>
void Selection_Sort(int *arr, const int n)
{
	for(size_t i=0; i<n-1; ++i)
	{
		for(size_t j=i+1; j<n; ++j)
		{
			if(arr[i] > arr[j])
			{
				//Swap
				arr[i] ^= arr[j];
				arr[j] ^= arr[i];
				arr[i] ^= arr[j];
			}
		}
	}
}