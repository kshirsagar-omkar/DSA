#include <stdio.h>
#include <stdlib.h>
#define NEWNODE (struct node*) malloc( sizeof(struct node) );

#include "FunctionsOnSinglyLinkedList.h"




int main()
{

	struct node* Head = NULL;
	int n=0;

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
*/


	printf("--reverseSLL--\n");
	Head = reverseSLL(Head);
	display(Head);


	Head = freeAll(Head);
	return 0;
}