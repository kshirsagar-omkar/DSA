#include<stdio.h>
#include<stdlib.h>

void accept_int_1d_array(const int *a, const int n)
{
	//*(a+0) = 0;			//Error For This Line
	if(n<=0)
	{
		printf("Invalid Array Size!!!");
		exit(0);
	}
	for(unsigned i=0; i<n; ++i)
	{
		printf("%d Enter Data : ",i+1);		
		scanf("%d", a+i);			//Working Without any Warnings / Error
	}
}

	
/*
	accept_display.c: In function ‘accept_int_1d_array’:
	accept_display.c:6:16: error: assignment of read-only location ‘*a’
	    6 |         *(a+0) = 0;
*/

/*He error Ka ali te Kalla Pn scanf() la error ka nahi ali??*/
	
	




void display_int_1d_array(const int *a, const int n)
{
	if(n<=0)
	{
		printf("Ivalid Array Size!!!");
		exit(0);
	}
	printf("Array : ");
	for(unsigned i=0; i<n; ++i)
	{
		printf("%d ",*(a+i));
	}
}


int main()
{
	int a[5];
	int n=5;

	accept_int_1d_array(a, n);
	display_int_1d_array(a, n);


	return 0;
}
