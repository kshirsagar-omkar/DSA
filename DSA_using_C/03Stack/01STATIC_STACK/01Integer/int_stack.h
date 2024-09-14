#ifndef STATIC_STACK
#define STATIC_STACK


#include <stdbool.h>


#define SIZE 30
#define BOTTOM -1



struct StaticStack
{
	int top;
	int stack[SIZE];
	
};




void init(struct StaticStack *stack);

bool isEmpty(struct StaticStack *stack);
bool isFull(struct StaticStack *stack);

void push(struct StaticStack *stack, int data);
int pop(struct StaticStack *stack);
int peek(struct StaticStack *stack);


void display(struct StaticStack *stack);

#endif













// void setStack(struct StaticStack stack, int *a)
// {
// 	int size = sizeof(a)/sizeof(a[0]);
// 	for(int i=0; i<size; ++i)
// 	{
// 		stack.stack[i] = a[i];
// 	}
	
// }