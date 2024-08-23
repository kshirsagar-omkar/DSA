#include <stdio.h>
#include <stdlib.h>


struct Test
{
	int test;
};


int main()
{

	struct Test T={1};

	printf("Size 	: %d\n", sizeof(T) ); 			//This is total size of Test Data Menbers
	printf("T    	: %d \n", T );					//Prints the First Data Member Value
	printf("&T    	: %lu \n", &T );				//Address Of T



	return 0;
}