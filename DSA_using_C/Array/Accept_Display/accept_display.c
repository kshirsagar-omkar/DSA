/*
	include: 	#include "/home/vaibhav/Documents/omkar/DSA/DSA_using_C/Array/Accept_Display/accept_display.h"

	compile:	/home/vaibhav/Documents/omkar/DSA/DSA_using_C/Array/Accept_Display/accept_display.c
*/


#include<stdio.h>
#include<time.h>
#include<stdlib.h>

void accept_int_1d_array(int *arr, const int n)
{
	if(n<=0)
	{
		printf("Invalid Array Size!!!");
		exit(0);
	}
	for(unsigned i=0; i<n; ++i)
	{
		printf("%d Enter Data : ",i+1);		
		scanf("%d", arr+i);
	}
}

void display_int_1d_array(const int *arr, const int n)
{
	if(n<=0)
	{
		printf("Ivalid Array Size!!!");
		exit(0);
	}
	printf("Array : ");
	for(unsigned i=0; i<n; ++i)
	{
		printf("%d ",*(arr+i));
	}
}

void generate_int_1d_array(int *a, const int n)
{
	if(n<=0)
	{
		printf("Invalid Array Size!!!");
		exit(0);
	}
	srand( time(0) );
	for(unsigned i=0; i<n; ++i)
	{
		a[i] = rand()%100;				//To get 2 digit number SIMPLE maths 
	}
}













// void accept_int_1d_array(const int *a, const int n)
// {
// 	//*(a+0) = 0;			//Error For This Line
// 	if(n<=0)
// 	{
// 		printf("Invalid Array Size!!!");
// 		exit(0);
// 	}
// 	for(unsigned i=0; i<n; ++i)
// 	{
// 		printf("%d Enter Data : ",i+1);		
// 		scanf("%d", a+i);			//Working Without any Warnings / Error
// 	}
// }

	
// /*
// 	accept_display.c: In function ‘accept_int_1d_array’:
// 	accept_display.c:6:16: error: assignment of read-only location ‘*a’
// 	    6 |         *(a+0) = 0;
// */

// /*He error Ka ali te Kalla Pn scanf() la error ka nahi ali??*/
	
	

