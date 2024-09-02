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



//Problem2
struct node* createNode(int data) {
    struct node* newNode = (struct node*)malloc(sizeof(struct node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

void initializeExamples(struct node** heads) {
    // Linked List 1: No cycle
    heads[0] = createNode(1);
    heads[0]->next = createNode(2);
    heads[0]->next->next = createNode(3);

    // Linked List 2: No cycle
    heads[1] = createNode(4);
    heads[1]->next = createNode(5);
    heads[1]->next->next = createNode(6);
    heads[1]->next->next->next = createNode(7);

    // Linked List 3: Cycle starting at node 2
    heads[2] = createNode(8);
    heads[2]->next = createNode(9);
    heads[2]->next->next = createNode(10);
    heads[2]->next->next->next = heads[2]->next;  // Cycle here

    // Linked List 4: Cycle starting at node 1
    heads[3] = createNode(11);
    heads[3]->next = createNode(12);
    heads[3]->next->next = heads[3];  // Cycle here

    // Linked List 5: No cycle
    heads[4] = createNode(13);
    heads[4]->next = createNode(14);

    // Linked List 6: Cycle starting at node 3
    heads[5] = createNode(15);
    heads[5]->next = createNode(16);
    heads[5]->next->next = createNode(17);
    heads[5]->next->next->next = createNode(18);
    heads[5]->next->next->next->next = heads[5]->next->next;  // Cycle here

    // Linked List 7: No cycle
    heads[6] = createNode(19);

    // Linked List 8: No cycle
    heads[7] = createNode(20);
    heads[7]->next = createNode(21);
    heads[7]->next->next = createNode(22);
    heads[7]->next->next->next = createNode(23);

    // Linked List 9: Cycle starting at node 2
    heads[8] = createNode(24);
    heads[8]->next = createNode(25);
    heads[8]->next->next = createNode(26);
    heads[8]->next->next->next = createNode(27);
    heads[8]->next->next->next->next = heads[8]->next;  // Cycle here

    // Linked List 10: No cycle
    heads[9] = createNode(28);
    heads[9]->next = createNode(29);
    heads[9]->next->next = createNode(30);
}




/*------------------------------------------------------------------*/



/*
	Problem 1: Reverse a Singly Linked List
		Problem Statement:
		Write a function to reverse a singly linked list. 
		The function should take the head of the linked list as input and return the new head of the reversed list.

		Example:
		Input: 1 -> 2 -> 3 -> 4 -> 5 -> NULL
		Output: 5 -> 4 -> 3 -> 2 -> 1 -> NULL
*/
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


/*
	Problem 2: Detect a Cycle in a Linked List
		Problem Statement:
		Write a function to detect if a cycle exists in a singly linked list. If a cycle exists, 
		return the node where the cycle begins. If no cycle exists, return NULL.

		Example:
		Input: 3 -> 2 -> 0 -> -4 -> 2 (Cycle exists)
		Output: Node with value 2
		Input: 1 -> 2 -> 3 -> 4 -> 5 -> NULL
		Output: NULL (No cycle)
*/

struct node* detectCycleInLL(struct node *firstNode)
{
	if(!firstNode || !(firstNode->next))
	{
		return NULL;
	}


	struct node *fast = firstNode->next->next;
	struct node *slow = firstNode;

	while(true)
	{
		if(slow == fast)
		{
			//Return addres of staring cycle......Remember to do it letter
			return firstNode;
		}

		if( !fast || !(fast->next) )
		{
			return NULL;
		}
		fast = fast->next->next;


		if( !slow )
		{
			return NULL;
		}
		slow = slow->next;

	}
	return NULL;

}