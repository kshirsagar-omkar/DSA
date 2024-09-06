#include "FunctionsOnDoublyLinkedList.h"


int main()
{
	struct node *head=NULL;
	int nodeLength;
	int position = 0;

	printf("How many node's you want to add : ");
	scanf("%d",&nodeLength);

	head = createDoublyLinkedList( nodeLength );
	displayDoublyLinkedList(head);
/*

	printf("--Reverse of DLL-- : ");
	printReverseDoublyLinkedList(head);
	printf("\n\n");


	printf("--Insert Node at Given Position DLL-- : \n");
	printf("Enter Position To Insert node : ");
	scanf("%d",&position);

	head = insertDLL(head, position);
	displayDoublyLinkedList(head);
	printf("\n\n");

*/

	printf("--Delete Node at Given Position DLL-- : \n");
	printf("Enter Position To Delete node : ");
	scanf("%d",&position);

	head = deleteDLL(head, position);
	displayDoublyLinkedList(head);
	printf("\n\n");


	freeAllDoublyLinkedList(head);
	return 0;
}