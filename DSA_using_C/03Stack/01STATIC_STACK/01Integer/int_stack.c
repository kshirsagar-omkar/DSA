#include "int_stack.h"
#include <stdio.h>




void init(struct StaticStack *stack)
{
	stack->top = BOTTOM;
}



bool isEmpty(struct StaticStack *stack)
{
	return stack->top == BOTTOM;
}


bool isFull(struct StaticStack *stack)
{
	return stack->top == SIZE-1;
}


void push(struct StaticStack *stack, int data)
{
	// ++stack->top;
	stack->stack[++stack->top] = data;
}

int pop(struct StaticStack *stack)
{
	// int data = stack->stack[stack->top];
	// stack->top--;
	// return data;
	return stack->stack[stack->top--];
}


int peek(struct StaticStack *stack)
{
	return stack->stack[stack->top];
}



void display(struct StaticStack *stack)
{
	printf("\nSTACK : ");
	for(int i=0; i<=stack->top; ++i)
	{
		printf("%d ",stack->stack[i]);
	}
	printf("\n");
}