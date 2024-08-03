/*
	include: 	#include "/home/vaibhav/Documents/omkar/DSA/DSA_using_C/Array/Bubble_Sort/Bubble_Sort.h"

	compile:	/home/vaibhav/Documents/omkar/DSA/DSA_using_C/Array/Bubble_Sort/Bubble_Sort.c
*/
#include <stdio.h>
#include<stdlib.h>

void Bubble_Sort(int *arr, int n)				/*This Function Will Sort The array using bubble_sort Technique*/
{

	if(n<=0)									// if array size is negitive
	{
		printf("Invalid Input Size!!!");
		exit(0);
	}

	/*decrementing n by 1 because this sort takes n-1 PASS */
	--n;

	/*Main Code For Bubble Sort*/
	for(unsigned i=0; i<n; ++i)
	{
		for(unsigned j=0; j<(n-i); ++j)
		{
			if(arr[j] > arr[j+1])
			{
				// swap(&arr[j], &arr[j+1])
				arr[j] ^= arr[j+1];
				arr[j+1] ^= arr[j];
				arr[j] ^= arr[j+1];
			}
		}
	}
}
