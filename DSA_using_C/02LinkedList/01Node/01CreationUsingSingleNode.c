#include <stdlib.h>
#include <stdio.h>

#define NEWNODE (struct node*) malloc( sizeof(struct node) )



struct node
{
	int data;
	struct node *next;
};


struct node* create(int n)
{
	if(n<=0) return NULL;

	struct node *head = NEWNODE;
	
	if(n==1)
	{
		head->next = NULL;
	}	
	else
	{
		head->next = create(n-1);
	}

	return head;
}



void print(struct node* Head)
{
	struct node *t = Head;
	while(t)
	{
		printf("%d ",t->data);
		t = t->next;
	}
	
}




int main()
{

	struct node *Head = NULL;
	int n =0;

	printf("How Many Node You Want To Create : ");
	scanf("%d", &n);


	Head = create(n);

	print(Head);

/*
	freeNode(Head);

	Head = NULL;
*/

	return 0;
}