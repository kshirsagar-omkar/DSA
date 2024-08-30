#include <stdio.h>
#include <stdlib.h>

#define NEWNODE (struct node*) malloc( sizeof(struct node) );


struct node
{
	int data;
	struct node *next;
};

struct node* create(int n)
{
	struct node *firstNode = NEWNODE;
	struct node *lastNode = firstNode;

	for(size_t i=2; i<=n; ++i)
	{
		lastNode->next = NEWNODE;
		lastNode = lastNode->next;
		lastNode->next = NULL;
	}
	return firstNode;
}

void display(struct node* firstNode)
{
	struct node* temp = firstNode;
	while(temp)
	{
		printf("%d ", temp->data);
		temp = temp->next;
	}
}

void accept(struct node *firstNode)
{
	struct node * temp = firstNode;
	while(temp)
	{
		printf("Enter Data : ");
		scanf("%d",&temp->data);
		temp = temp->next;
	}
}


struct node* ereaseAll(struct node *firstNode)
{
	struct node *temp = firstNode;
	while(firstNode)
	{
		temp = firstNode;
		firstNode = firstNode->next;
		free(temp);
	}
	return NULL;
}

int main()
{

	struct node* Head = NULL;

	Head = create(3);
	accept(Head);
	display(Head);

	Head = ereaseAll(Head);
	return 0;
}