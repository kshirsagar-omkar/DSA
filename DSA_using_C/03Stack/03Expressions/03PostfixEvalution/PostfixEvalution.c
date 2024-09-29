/*
	#include "/home/omkar/Documents/omkar/DSA/DSA_using_C/03Stack/03Expressions/03PostfixEvalution/PostfixEvalution.h"
	compile : /home/omkar/Documents/omkar/DSA/DSA_using_C/03Stack/03Expressions/03PostfixEvalution/PostfixEvalution.c

*/




#include "PostfixEvalution.h"




int postfixToPrifix(char *expression)
{
	struct Stack stack;



	init(&stack);

	for(int i=0; expression[i]; ++i)
	{

		switch(expression[i])
		{
			case '*':
						push(&stack , ( pop(&stack) * pop(&stack) ) );
						break;
			case '/':
						push(&stack , ( pop(&stack) / pop(&stack) ) );
						break;
			case '+':
						push(&stack , ( pop(&stack) + pop(&stack) ) );
						break;
			case '-':
						push(&stack , ( pop(&stack) - pop(&stack) ) );
						break;
			default:

					push(&stack,expression[i]-'0');

		}
	}

	return pop(&stack);

}



