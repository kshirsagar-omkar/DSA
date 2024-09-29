/*
		#include "/home/omkar/Documents/omkar/DSA/DSA_using_C/03Stack/03Expressions/04InfixToPostFixEvalution/InfixToPostFixEvalution.h"
		compile : /home/omkar/Documents/omkar/DSA/DSA_using_C/03Stack/03Expressions/04InfixToPostFixEvalution/InfixToPostFixEvalution.c
*/


#include "InfixToPostFixEvalution.h"
// #include <stdio.h>

int infixToPostFixEvalution(char *expression)
{
	char postfixExpression[50] = {0};
	
	infixToPostFix(expression, postfixExpression);




	// printf("%s\n",postfixExpression);

	// return 0;

	return postfixToPrifix( postfixExpression );
}
