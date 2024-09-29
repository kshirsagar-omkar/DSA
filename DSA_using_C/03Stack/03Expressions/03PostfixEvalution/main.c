#include <stdio.h>

#include "PostfixEvalution.h"


int main()
{
	
	char exp[50];
	printf("enter expression : ");
	scanf("%s",exp);

	printf("value : %d\n", postfixToPrifix(exp) );
	


	return 0;
}