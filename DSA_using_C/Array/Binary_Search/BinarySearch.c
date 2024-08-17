/*
		include : #include "/home/vaibhav/Documents/omkar/DSA/DSA_using_C/Array/Binary_Search/BinarySearch.h"
		compile : /home/vaibhav/Documents/omkar/DSA/DSA_using_C/Array/Binary_Search/BinarySearch.c
*/

int binarySearch(const int *arr, const int key)
{
	int arrSize = sizeof(arr)/sizeof(arr[0]);

	int lowerBound = 0;
	int upperBound = arrSize-1;

	while( lowerBound <= upperBound )
	{
		int midIndex = ( lowerBound + upperBound ) / 2;
		if( arr[midIndex] == key )
		{
			return midIndex;
		}
		else if( key > arr[midIndex] )
		{
			lowerBound = midIndex+1;
		}
		else
		{
			upperBound = midIndex-1;
		}
	}
	return -1;
}
