#include<stdio.h>
#include<string.h>
#include <stdlib.h>





void swap(char* a, char* b, int wordlen)
{
	char *temp=(char*)malloc((wordlen+1) * sizeof(char));
	strcpy(temp,a);
	strcpy(a, b);
	strcpy(b, temp);
	free(temp);
}





void stringBubbleSort(char **str, int n, int wordlen)
{
	for(unsigned i=0; i<n-1; ++i)
	{
		for(unsigned j=0; j<n-(i+1); ++j)
		{
			if(strcmp(str[j],str[j+1]) > 0)
			{
				swap(str[j],str[j+1],wordlen);
			}
		}
	}
}



void display(char **str, int n)
{
	printf("\nDisplaying String \n");
	for(unsigned i=0; i<n; ++i)
	{
		printf("%s ",str[i]);
	}
	printf("\n");
}


void accept(char **str, int n, int wordlen)
{
	printf("\nAccepting String \n");
	for(unsigned i=0; i<n; ++i)
	{
		printf("Enter String of len %d : ",wordlen);
		scanf("%s",str[i]);
	}
	printf("\n");
}

int main()
{

	int n = 0;
	int wordlen = 0;

	printf("How Many String You Want To Enter : ");
	scanf("%d",&n);
	printf("What is Lenght of max String : ");
	scanf("%d",&wordlen);


	char **str = (char**) malloc(n * sizeof(char**));
	for(unsigned i=0; i<n; ++i)
	{
		str[i] = (char*) malloc((wordlen+1) * sizeof(char*));
	}

	accept(str, n, wordlen);

	stringBubbleSort(str, n, wordlen);

	display(str,n);


	for(unsigned i=0; i<n; ++i)
	{
		free(str[i]);
	}
	free(str);

	return 0;
}