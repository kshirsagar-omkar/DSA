#include <stdlib.h>
#include <stdio.h>

#define NEWNODE (struct node*) malloc( sizeof(struct node) )



struct node
{
	int data;
	struct node *next;
};


struct node* create(const int n)
{
	struct node *firstNode = NEWNODE;				// Return this as a starting node of linkedlist 
	struct node *lastNode = firstNode;				// For Creating StructOjts Dynamically and appending it to firstNode ...

	for(int i=2; i<=n; ++i)
	{
		lastNode->next = NEWNODE;
		lastNode = lastNode->next;
		lastNode->next = NULL;
	}
	return firstNode;
}



void print(struct node* Head, const int n)
{
	struct node *temp = Head;
	for(int i=1; i<=n; ++i)
	{
		printf("%d ", temp->data);
		temp = temp->next;
	}
}




void fill(struct node* Head, const int n)
{
	struct node *temp = Head;
	for(int i=1; i<=n; ++i)
	{
		printf("Enter Data : ");
		scanf("%d", &temp->data);
		temp = temp->next;
	}
}




void freeNode(struct node *tempNode)
{
	if(tempNode)
	{
		freeNode( tempNode->next );
	}
	free( tempNode );
}




int main()
{

	struct node *Head = NULL;
	int n =0;

	printf("How Many Node You Want To Create : ");
	scanf("%d", &n);


	Head = create(n);

	fill(Head, n);

	print(Head, n);

	freeNode(Head);

	Head = NULL;

	return 0;
}