#include <stdio.h>

#include "/home/omkar/Documents/omkar/DSA/DSA_using_C/03Stack/03Expressions/01InfixToPostfix/infixToPostfix.h"

#define EXPRESSION_SIZE 50

int main()
{
	char expression[EXPRESSION_SIZE];
	char postfixExpression[EXPRESSION_SIZE] = {0};

	printf("Enter Infix Expression : ");
	scanf("%s",expression);

	infixToPostFix(expression, postfixExpression);
	
	printf("%s\n",postfixExpression);

	return 0;
}