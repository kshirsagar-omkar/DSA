#include "/home/vaibhav/Documents/omkar/DSA/DSA_using_C/Array/Accept_Display/accept_display.h"

/*
	For Bubble Sort :
	
						#include "/home/vaibhav/Documents/omkar/DSA/DSA_using_C/Array/Bubble_Sort/Bubble_Sort.h"
*/



#include "/home/vaibhav/Documents/omkar/DSA/DSA_using_C/Array/Insertion_Sort/Insertion_Sort.h"


int main()
{
	int arr[5];
	int n = 5;

	accept_int_1d_array(arr, n);



	/*Bubble Sort*/
	// Bubble_Sort(arr, n);

	/*Improved bubble sort*/
	//Improved_Bubble_Sort(arr, n);

	/*Insertion Sort*/
	Insertion_Sort(arr, n);



	display_int_1d_array(arr, n);

	return 0;
}