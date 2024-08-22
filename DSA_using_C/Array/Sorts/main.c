#include <stdio.h>
#include <stdlib.h>

#include "/home/vaibhav/Documents/omkar/DSA/DSA_using_C/Array/Accept_Display/accept_display.h"

/*
	For Bubble Sort :
	
						#include "/home/vaibhav/Documents/omkar/DSA/DSA_using_C/Array/Bubble_Sort/Bubble_Sort.h"
*/


/*
	For Insertion Sort :
						#include "/home/vaibhav/Documents/omkar/DSA/DSA_using_C/Array/Insertion_Sort/Insertion_Sort.h"
*/

/*
	For Selection Sort :
	#include "/home/vaibhav/Documents/omkar/DSA/DSA_using_C/Array/Selection_Sort/Selection_Sort.h"
*/

/*	For Merge Sort :
 	#include "/home/vaibhav/Documents/omkar/DSA/DSA_using_C/Array/Merge_Sort/MergeSort.h"
*/



int main()
{
	int *arr = NULL;
	int n = 0;

	printf("How Many Elements : ");
	scanf("%d",&n);

	if(n <= 0)
	{
		printf("Invalid Input !!!\n");
		exit(0);
	}

	arr = (int*) malloc(n * sizeof(int));
	if(arr == NULL)
	{
		printf("Incuifient Storage Allocation on HEAP!!!\n");
		exit(0);
	}

	// accept_int_1d_array(arr, n);
	generate_int_1d_array(arr, n);
	printf("Befor Sort ");
	display_int_1d_array(arr, n);

	/*Bubble Sort*/
	// Bubble_Sort(arr, n);

	/*Improved bubble sort*/
	//Improved_Bubble_Sort(arr, n);

	/*Insertion Sort*/
	//Insertion_Sort(arr, n);

	/*Selection Sort*/
	//Selection_Sort(arr, n);

	/*Merge Sort*/
	//mergeSort(arr, 0, n-1);



	printf("\n\nAfter Sort ");
	display_int_1d_array(arr, n);

	return 0;
}