/*
	#include "/home/vaibhav/Documents/omkar/DSA/DSA_using_C/03Stack/02DYNAMIC_STACK/02Char/char_stack.h"
	compile : /home/vaibhav/Documents/omkar/DSA/DSA_using_C/03Stack/02DYNAMIC_STACK/02Char/char_stack.c
*/







#include "char_stack.h"


void initCHAR(struct CHARstack *stack)
{
	freeStackCHAR(stack);	//if Gien Stack is not empty

	stack->head = NULL;
	stack->top = BOTTOM;

}


bool isEmptyCHAR(struct CHARstack *stack)
{
	return stack->top == BOTTOM;
}


void pushCHAR(struct CHARstack *stack, char data)
{
	struct CHARnode* temp = CHAR_NEWNODE;
	temp->data = data;
	temp->next = NULL;
	temp->prev = NULL;

	if(stack->top == NULL)
	{
		stack->head = temp;
		stack->top = temp;
	}
	else
	{
		stack->top->next = temp;
		temp->prev = stack->top; 
		stack->top = stack->top->next;
	}
}


int popCHAR(struct CHARstack *stack)
{
	char data = stack->top->data;
	struct CHARnode *temp = stack->top;

	stack->top = stack->top->prev;

	if(stack->top != NULL)
	{
		stack->top->next = NULL;
	}
	else
	{
		stack->head = NULL;
	}
	free(temp);
	return data;
}


int peekCHAR(struct CHARstack *stack)
{
	return stack->top->data;
}


void freeStackCHAR(struct CHARstack *stack)
{
	if(stack)
	{
		while( ! isEmptyCHAR(stack) ) popCHAR(stack);
	}
}