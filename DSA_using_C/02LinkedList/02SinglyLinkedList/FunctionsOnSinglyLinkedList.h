#ifndef FUNCTIONS_ON_SINGLY_LINKED_LIST
#define FUNCTIONS_ON_SINGLY_LINKED_LIST

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

struct node
{
	int data;
	struct node *next;
};


/*Add a node in starting of linked list*/
struct node* create(const int n);
void display(struct node *firstNode);
void accept(struct node *firstNode);
struct node* freeAll(struct node *firstNode);


struct node* addFirst(struct node* firstNode);
struct node* dellFirst(struct node* firstNode);
struct node* addLast(struct node* firstNode);
struct node* dellLast(struct node* firstNode);


size_t lengthSLL(struct node *firstNode);
int sumSLL(struct node *firstNode);


/*ChatGPT Problem Statements*/

//Problem 1: Reverse a Singly Linked List
struct node* reverseSLL(struct node *firstNode);


//Problem 2: Detect a Cycle in a Linked List
struct node* detectCycleInLL(struct node *firstNode);
struct node* createNode(int data);
void initializeExamples(struct node** heads);



#endif