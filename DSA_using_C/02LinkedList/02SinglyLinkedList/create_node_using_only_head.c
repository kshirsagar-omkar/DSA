#include <stdio.h>
#include <stdlib.h>
#define NEWNODE (struct node*) malloc( sizeof(struct node) );

struct node
{
	int data;
	struct node *next;
};



struct node* create(const int n)
{
	if( n <= 0 )
	{
		printf("error : Check The Input size !!\n");
		return NULL;
	}


	struct node *head = NEWNODE;
	head->next = NULL;
	head->data = 1;

	int k=0;
	for(int i=2; i<=n; ++i)
	{
		(head+k)->next = NEWNODE;
		(head+k)->next->data = i;
		(head+k)->next->next = NULL;
		k+=2;
	}

	return head;
}







void display(struct node *firstNode)
{
	struct node *temp = firstNode;

	printf("Linked List : ");
	while(temp)
	{
		printf("%d --> ", temp->data);
		temp = temp->next;
	}
	printf("NULL\n\n");
}


int main()
{

	int n=3;
	struct node *head = create(n);
	display(head);























	// struct node *t1 = NEWNODE;
	// struct node *t2 = NEWNODE;
	// struct node *t3 = NEWNODE;


	



	// printf("t1 : %lu\n",t1);
	// printf("t2 : %lu\n",t2);
	// printf("t3 : %lu\n",t3);

	// printf("\n");

	// printf("t1+0 : %lu\n",t1+0);
	// printf("t1+2 : %lu\n",t1+2);
	// printf("t3+4 : %lu\n",t1+4);


	return 0;
}