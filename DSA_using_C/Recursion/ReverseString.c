#include <stdio.h>

void reverse(char *str, int n)
{
	if( *(str+n) )
	{
		reverse(str,n+1);
	}
	printf("%c",str[n]);
}


int main()
{


	char *str = "Hello";

	reverse(str,0);

	return 0;
}