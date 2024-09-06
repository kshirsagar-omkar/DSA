#ifndef FUNCTIONS_ON_DOUBLY_LINKEDLIST
#define FUNCTIONS_ON_DOUBLY_LINKEDLIST


#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


struct node
{
	struct node *prev;
	int data;
	struct node *next;
};

bool isNodeEmpty(struct node * current);

struct node* createDoublyLinkedList(const int n);
void setNodeData(struct node* current);
void displayDoublyLinkedList(struct node *firstNode);
struct node *freeAllDoublyLinkedList(struct node* firstNode);

/*Print Reverse A Doubly Linked List*/
void printReverseDoublyLinkedList(struct node *firstNode);

/*Insert int doubly Linked list*/
struct node *insertDLL(struct node *firstNode, const int pos);
/*Create Single DLL Node*/
struct node* createSingleDLLNode();


/*Delete a node in DLL*/
struct node* deleteDLL(struct node *firstNode, const int pos);


#endif