#include <stdio.h>
#include <stdlib.h>
#define NEWNODE (struct node*) malloc( sizeof(struct node) );

#include "FunctionsOnSinglyLinkedList.h"




int main()
{

	struct node* Head = NULL;
	int n=0;
	int key=0;
	int pos = 0;
	int replaceValue = 0;

	printf("How Many node's You Want to Create : ");
	scanf("%d",&n);


	Head = create(n);	
	display(Head);


/*
	printf("--Add First--\n");	
	Head = addFirst(Head);
	display(Head);



	printf("--Dell First--\n");	
	Head = dellFirst(Head);
	display(Head);


	printf("--Add Last--\n");	
	Head = addLast(Head);
	display(Head);


	printf("--Dell Last--\n");	
	Head = dellLast(Head);
	display(Head);
*/


/*
	int len = lengthSLL(Head);
	printf("--LengthSLL-- : %d\n\n",len);


	int sum = sumSLL(Head);
	printf("--sumSLL-- : %d\n\n",sum);



	printf("--reverseSLL--\n");
	Head = reverseSLL(Head);
	display(Head);



	printf("Detecting Cycle is present or not in LL\n");

	struct node* temps[10];
    initializeExamples(temps);

    for(int i=0; i<10; ++i)
    {
    	printf("%d.",i+1);
		if( detectCycleInLL( temps[i] ) )
		{
			printf("YES\n");
		}
		else printf("NO\n");
		printf("\n");
	}



	printf("--Count Odd Even in List--\n");
	countNumberOfOddEvenInSLL(Head);
	display(Head);
	

	printf("--Positive, Negative Numbers in List--\n");
	countPositiveNegativeNumbersInSLL(Head);
	display(Head);


	printf("--Odd Even in List--\n");
	printOddEvenInSLL(Head);
	display(Head);


	printf("--Alternative Numbers in List--\n");
	printAlternativeNumbersInSLL(Head);
	display(Head);


	printf("--Search in List--\n");
	key=0;
	printf("Enter a Key To Search In SLL : ");
	scanf("%d",&key);
	pos = searchSLL(Head, key);
	if(pos)
	{
		printf("%d Found at Position %d\n", key, pos);
	}
	else
	{
		printf("%d Not Found in List \n", key);
	}
	display(Head);


	printf("--FindAllAndReplace Numbers in List--\n");
	printf("Enter A Number To Find In SLL : ");
	scanf("%d",&key);
	printf("Enter The Number That Will Replace %d in SLL : ", key);
	scanf("%d",&replaceValue);
	findAllAndReplace(Head, key, replaceValue);
	display(Head);


	pos = 0;
	printf("--insertInSLL--\n");
	printf("Enter a position to insert Node : ");
	scanf("%d",&pos);
	Head = insertInSLL(Head,pos);
	display(Head);
*/


	pos = 0;
	printf("--deleteInSLL--\n");
	printf("Enter a position to Delete Node : ");
	scanf("%d",&pos);
	Head = deleteInSLL(Head,pos);
	display(Head);

	Head = freeAll(Head);
	return 0;
}