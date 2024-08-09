/*
		include : #include "/home/vaibhav/Documents/omkar/DSA/DSA_using_C/Array/Insertion_Sort/Insertion_Sort.h"

		compile : /home/vaibhav/Documents/omkar/DSA/DSA_using_C/Array/Insertion_Sort/Insertion_Sort.c

*/
#include <stdio.h>
#include <stdlib.h>

void Insertion_Sort(int *arr, int n)
{
	for(unsigned i=1; i<n; ++i)
	{
		int temp_memory = arr[i];
		int j=;
		for(j=i-1; j>=0; --j)
		{
			if(arr[j] > temp_memory)
			{
				arr[j+1] = arr[j];
			}
			else break;
		}
		arr[j+1] = temp_memory;
	}
}