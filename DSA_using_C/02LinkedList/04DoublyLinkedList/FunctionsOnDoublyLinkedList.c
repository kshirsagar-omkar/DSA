#include "FunctionsOnDoublyLinkedList.h"
#define NEWNODE (struct node*) malloc(sizeof(struct node))



bool isNodeEmpty(struct node * current)
{
	if(!current) return true;
	return false;
}


void setNodeData(struct node* current)
{
	if(!current)
	{
		printf("Current Node is Empty!!\n");
		return;
	}
	printf("Enter The Data : ");
	scanf("%d",&current->data);
}


struct node* createDoublyLinkedList(const int n)
{
	struct node *head = NEWNODE;
	head->prev = NULL;
	head->next = NULL;
	setNodeData(head);

	struct node *current = head;

	for(size_t i=2; i<=n; ++i)
	{
		struct node *temp = NEWNODE;
		temp->next = NULL;
		current->next = temp;
		temp->prev = current;
		setNodeData(temp);
		current = current->next;
	}
	printf("\n");
	return head;
}


struct node* createSingleDLLNode()
{
	return createDoublyLinkedList(1);
}


void displayDoublyLinkedList(struct node *firstNode)
{
	if(!firstNode)
	{
		printf("Given Node is Empty!!\n");
		return;
	}

	printf("Doubly Linked List : ");
	struct node *current = firstNode;
	while(current)
	{
		printf("%d --> ",current->data);
		current = current->next;
	}
	printf("NULL\n\n");
}


struct node *freeAllDoublyLinkedList(struct node* firstNode)
{
	if(!firstNode)
	{	
		printf("Given Node is Empty!!\n");
		return firstNode;
	}
	
	while(firstNode)
	{
		struct node *current = firstNode;
		firstNode = firstNode->next;
		free(current);
	}
	return firstNode;
}


void printReverseDoublyLinkedList(struct node *firstNode)
{
	if(!firstNode)
	{
		printf("Given Node is Empty!!\n");
		return;
	}

	struct node *current = NULL;
	/*This 'for loop' used for taling current node at LAST position*/
	for(current = firstNode; current->next; current=current->next);

	printf("NULL");
	for( ; current; current = current->prev)
	{
		printf(" <-- %d", current->data);
	}
}



struct node *insertDLL(struct node *firstNode, const int pos)
{
	if(!firstNode)
	{
		printf("Given Node is Empty!!\n");
		return firstNode;
	}
	if(pos==1)
	{
		firstNode->prev = createSingleDLLNode();
		firstNode->prev->next = firstNode;
		firstNode = firstNode->prev;
		return firstNode;
	}


	struct node *current = firstNode;
	for(size_t i=1; current && i<=pos-2; ++i, current = current->next);

	if(current==NULL)
	{
		printf("Invalid Position !!!\n");
		return firstNode;
	}

	struct node *temp = createSingleDLLNode();

	temp->next = current->next;
	temp->prev = current;
	if(current->next)
		current->next->prev = temp;
	current->next = temp;
	

	return firstNode;
}


struct node* deleteDLL(struct node *firstNode, const int pos)
{
	if(!firstNode)
	{
		printf("Given Node is Empty!!\n");
		return firstNode;
	}

	struct node *current = NULL;
	if(pos==1)
	{	
		firstNode = firstNode->next;
		free(firstNode->prev);
		firstNode->prev = NULL;
		return firstNode;
	}


	current = firstNode;
	for(size_t i=1; current && i<=pos-2; ++i, current = current->next);

	if(current==NULL || current->next==NULL)
	{
		printf("Invalid Position !!!\n");
		return firstNode;
	}

	struct node *temp = current->next;
	current->next = temp->next;
	if(current->next)
		temp->next->prev = current;
	free(temp);
	return firstNode;
}