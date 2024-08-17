#include <stdio.h>

/*AcceptDisplay*/
#include "/home/vaibhav/Documents/omkar/DSA/DSA_using_C/Array/Accept_Display/accept_display.h"

/*Linear Search*/
// #include "/home/vaibhav/Documents/omkar/DSA/DSA_using_C/Array/Linear_search/LinearSearch.h"



/*Binary Search*/
#include "/home/vaibhav/Documents/omkar/DSA/DSA_using_C/Array/Binary_Search/BinarySearch.h"
#include "/home/vaibhav/Documents/omkar/DSA/DSA_using_C/Array/Selection_Sort/Selection_Sort.h"











void displaySearchResult(int pos, int key)
{
	printf("\n");
	if(pos == -1)
	{
		printf("%d Not Found in Given Array !!!\n", key);
	}
	else
	{
		printf("%d Found in Array at %d Location\n", key, pos);
	}
}





int main()
{
	int arr[50] = {0};
	int n = 5;
	int key = 0;

	accept_int_1d_array(arr, n);
	// display_int_1d_array(arr,n);

	printf("\nEnter Key To Search : ");
	scanf("%d", &key);	

	/*Linear Search*/
	// displaySearchResult( linearSearch(arr, n, key), key );
	/*
		to use Sorted Linear Search
		binary_search(arr, n);
		pos = sortedLinearSearch(arr, n, key);
	*/


	/*For Binary Search Array Should be Sorted*/
	printf("\nSorted ");
	Selection_Sort(arr, n);
	display_int_1d_array(arr,n);
	displaySearchResult( binarySearch(arr, key), key );




	return 0;
}