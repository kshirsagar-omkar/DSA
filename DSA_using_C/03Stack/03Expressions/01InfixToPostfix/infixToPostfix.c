/*
	#include "/home/omkar/Documents/omkar/DSA/DSA_using_C/03Stack/03Expressions/01InfixToPostfix/infixToPostfix.h"
	compile : /home/omkar/Documents/omkar/DSA/DSA_using_C/03Stack/03Expressions/01InfixToPostfix/infixToPostfix.c
*/





#include "infixToPostfix.h"




void infixToPostFix(char *expression, char *postfixExpression)
{
	struct CHARstack *stack = (struct CHARstack*) malloc(sizeof(struct CHARstack));
	initCHAR(stack);

	
	int k=0;

	for(int i=0; expression[i]; ++i)
	{
		if(expression[i]=='(')
		{
			pushCHAR(stack, expression[i]);
			continue;
		}
		
		if(expression[i]==')')
		{
			while( !isEmptyCHAR(stack) 	)
			{
				char ch = popCHAR(stack);
				if(ch == '(')
				{
					break;
				}
				postfixExpression[k++] = ch;
			}
			continue;
		}


		if( getPriority( expression[i] ) == -1 )
		{
			postfixExpression[k++] = expression[i];

		}
		else
		{
			while( !isEmptyCHAR(stack) )
			{
				if( getPriority( peekCHAR(stack) ) >= getPriority( expression[i] ) )
				{
					postfixExpression[k++] = popCHAR(stack);
				}
				else
				{
					break;
				}
			}
			pushCHAR(stack, expression[i]);
		}
	}
	while( !isEmptyCHAR(stack) )
	{
		postfixExpression[k++] = popCHAR(stack);
	}
	postfixExpression[k++] = '\0';
	free(stack);
}

