#ifndef CHAR_STACK
#define CHAR_STACK 


#include <stdbool.h>
#include <stdlib.h>




#define NEWNODE (struct node*) malloc(sizeof(struct node))
#define BOTTOM NULL




struct node
{
	struct node *next;
	char data;
	struct node *prev;
};



struct Stack
{
	struct node *head;		// Hold LinkedList
	struct node *top;		// Point To Topmost Node
};




void init(struct Stack *stack);
bool isEmpty(struct Stack *stack);
void push(struct Stack *stack, char data);
int pop(struct Stack *stack);
int peek(struct Stack *stack);
void freeStack(struct Stack *stack);





#endif