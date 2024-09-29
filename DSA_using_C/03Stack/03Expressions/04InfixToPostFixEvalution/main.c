/*
	compile:

	gcc main.c \
	InfixToPostFixEvalution.c \
	/home/omkar/Documents/omkar/DSA/DSA_using_C/03Stack/03Expressions/01InfixToPostfix/infixToPostfix.c \
	/home/omkar/Documents/omkar/DSA/DSA_using_C/03Stack/03Expressions/02PriorityTable/PriorityTable.c \
	/home/omkar/Documents/omkar/DSA/DSA_using_C/03Stack/02DYNAMIC_STACK/02Char/char_stack.c \


	/home/omkar/Documents/omkar/DSA/DSA_using_C/03Stack/03Expressions/03PostfixEvalution/PostfixEvalution.c \
	/home/omkar/Documents/omkar/DSA/DSA_using_C/03Stack/02DYNAMIC_STACK/01Integer/int_stack.c \

	-o main 

*/




#include <stdio.h>


#include "InfixToPostFixEvalution.h"



int main()
{

	char expression[50];

	printf("Enter Infix Expression : ");
	scanf("%s",expression);

	printf("Value : %d\n", infixToPostFixEvalution(expression) );

	return 0;
}