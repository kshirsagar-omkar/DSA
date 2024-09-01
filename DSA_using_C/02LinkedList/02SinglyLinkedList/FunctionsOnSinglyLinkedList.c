/*
		#include "/home/vaibhav/Documents/omkar/DSA/DSA_using_C/02LinkedList/02SinglyLinkedList/FunctionsOnSinglyLinkedList.h"
		compile: /home/vaibhav/Documents/omkar/DSA/DSA_using_C/02LinkedList/02SinglyLinkedList/FunctionsOnSinglyLinkedList.c

*/
#include "FunctionsOnSinglyLinkedList.h"
#define NEWNODE (struct node*) malloc( sizeof(struct node) );



struct node* create(const int n)
{

	if( n <= 0 )
	{
		printf("error : Check The Input size !!\n");
		return NULL;
	}

	struct node *firstNode = NEWNODE;

	struct node *lastNode = firstNode;
	printf("Enter The Data : ");
	scanf("%d",&lastNode->data);
	lastNode->next = NULL;	

	for(size_t i=2; i<=n; ++i)
	{
		lastNode->next = NEWNODE;
		lastNode = lastNode->next;

		printf("Enter The Data : ");
		scanf("%d",&lastNode->data);
		lastNode->next = NULL;	
	}
	return firstNode;
}


void display(struct node *firstNode)
{
	struct node *temp = firstNode;

	printf("Linked List : ");
	while(temp)
	{
		printf("%d ", temp->data);
		temp = temp->next;
	}
	printf("\n\n");
}


void accept(struct node *firstNode)
{
	struct node *temp = firstNode;

	while(temp)
	{
		printf("Enter The Data : ");
		scanf("%d",&temp->data);
		temp = temp->next;
	}
}


struct node* freeAll(struct node *firstNode)
{

	while(firstNode)
	{
		struct node *temp = firstNode;
		firstNode = firstNode->next;
		free(temp);
	}
	return firstNode;
}


/*--------------------------------------------------------------*/



struct node* addFirst(struct node* firstNode)
{

	if(firstNode == NULL)
	{
		return create(1);
	}

	struct node *temp = create(1);

	temp->next = firstNode;

	firstNode = temp;
	return firstNode;
}


struct node* dellFirst(struct node* firstNode)
{
	if(firstNode == NULL) return firstNode;				//If the Linked list is empty

	struct node *temp = firstNode;
	firstNode = firstNode->next;
	free(temp);

	return firstNode;
}


struct node* addLast(struct node* firstNode)
{
	if(firstNode==NULL)
	{
		return create(1);
	}

	struct node *lastNode = NULL;

	for(lastNode = firstNode;   lastNode->next   ; lastNode = lastNode->next);

	lastNode->next = create(1);
	
	return firstNode;
}


struct node* dellLast(struct node* firstNode)
{
	if(firstNode==NULL) return NULL;

	struct node *lastNode = NULL;
	struct node *secondLastNode = NULL;

	for(lastNode = firstNode;   lastNode->next   ; lastNode = lastNode->next)
	{
		secondLastNode = lastNode;
	}
	secondLastNode->next = NULL;
	free(lastNode);

	return firstNode;
}



/*--------------------------------------------------------------------*/


size_t lengthSLL(struct node *firstNode)
{
	if(firstNode == NULL) return 0;

	size_t lengthOfSinglyLinkedList = 0;
	struct node *temp = NULL;

	for(temp = firstNode;   temp  ; temp = temp->next, ++lengthOfSinglyLinkedList);

	return lengthOfSinglyLinkedList;
}


int sumSLL(struct node *firstNode)
{
	if(firstNode == NULL) return 0;

	size_t sumOfSinglyLinkedList = 0;
	struct node *temp = NULL;

	for (temp = firstNode;   temp   ; temp = temp->next)
	{
		sumOfSinglyLinkedList += temp->data;
	}

	return sumOfSinglyLinkedList;
}



/*----------------------------------------------------------------------------*/


/*ChatGPT Problem Statements*/


/*Requeried Functions For Problem Statements*/




//Problem 1: Reverse a Singly Linked List
struct node* reverseSLL(struct node *firstNode)
{
	if(firstNode == NULL) return NULL;

	struct node *next = NULL;
	struct node *current = firstNode;
	struct node *prev = NULL;

	while(current)
	{
		next = current->next;
		current->next = prev;
		prev = current;
		current = next;
	}

	firstNode = prev;
	return firstNode;
}