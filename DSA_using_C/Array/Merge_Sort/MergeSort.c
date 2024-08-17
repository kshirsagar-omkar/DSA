/*
	include : #include "/home/vaibhav/Documents/omkar/DSA/DSA_using_C/Array/Merge_Sort/MergeSort.h"
	compile : /home/vaibhav/Documents/omkar/DSA/DSA_using_C/Array/Merge_Sort/MergeSort.c
*/
#include <stdlib.h>

void merge(int *arr, int lowerBound, int mid, int upperBound)
{
	int i=0;
	int j=0;
	int k=lowerBound;

	int n1 = mid - lowerBound +1;
	int n2 = upperBound - mid;

	int *left = (int*) malloc(n1 * sizeof(int));		
	int *right = (int*) malloc(n2 * sizeof(int));


	// Copy data to temporary arrays
	for(i=0; i<n1; ++i)
		left[i] = arr[ lowerBound+i ];

	for(i=0; i<n2; ++i)
		right[i] = arr[ mid+1+i ];

	
	i=0;
	j=0;
	k = lowerBound;

	// Merge the temporary arrays back into arr
	while(i < n1 && j < n2)
	{
		if(left[i] < right[j])
		{
			arr[k++] = left[i++];
		}
		else
			arr[k++] = right[j++];
	}

	// Copy the remaining elements of left[], if any
	while(i < n1)
			arr[k++] = left[i++];
	
	// Copy the remaining elements of right[], if any
	while(j < n2)
			arr[k++] = right[j++];


	free(left);
	free(right);
}




void mergeSort(int *arr, int lowerBound, int upperBound)
{

	if(lowerBound < upperBound)
	{
		int mid = (lowerBound+upperBound)/2;
		mergeSort(arr, lowerBound, mid);
		mergeSort(arr, mid+1, upperBound);
		merge(arr, lowerBound, mid, upperBound);
	}

}



