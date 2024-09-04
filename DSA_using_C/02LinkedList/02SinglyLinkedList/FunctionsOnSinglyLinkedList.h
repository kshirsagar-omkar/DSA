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

/*Write a Function which prints no. (cnt) of odd & even numbers in list*/
void countNumberOfOddEvenInSLL(struct node *firstNode);

/*Write a function which counts no. of positive and negative numbers in lisst*/
void countPositiveNegativeNumbersInSLL(struct node *firstNode);

/*Print Odd Even In List*/
void printOddEvenInSLL(struct node *firstNode);

/*ptint alternative numbers in a list*/
void printAlternativeNumbersInSLL(struct node *firstNode);


/*Search Given Number in SLL ang Return Position otherwise 0*/
size_t searchSLL(struct node *firstNode, const int key);


/*Write a Function that FindAll And Replace */
void findAllAndReplace(struct node *firstNode, const int key, const int replaceValue);


/*Insert in SLL*/
struct node* insertInSLL(struct node *firstNode, const int pos);

/*Delete in SSL*/
struct node *deleteInSLL(struct node *firstNode, const int pos);






















/*ChatGPT Problem Statements*/

//Problem 1: Reverse a Singly Linked List
struct node* reverseSLL(struct node *firstNode);


//Problem 2: Detect a Cycle in a Linked List
struct node* detectCycleInLL(struct node *firstNode);
struct node* createNode(int data);
void initializeExamples(struct node** heads);



#endif