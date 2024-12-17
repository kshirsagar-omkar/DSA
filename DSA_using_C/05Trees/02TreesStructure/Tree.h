
// #include "/home/omkar/Documents/omkar/DSA/DSA_using_C/05Trees/02TreesStructure/Tree.h"
// compile : /home/omkar/Documents/omkar/DSA/DSA_using_C/05Trees/02TreesStructure/Tree.h


#include <stdlib.h>
#include <stdio.h>

#define NEWNODE (struct node*) calloc(1,sizeof(struct node))


struct node
{
	struct node *left;
	int data;
	struct node *right;
};


void initTree(struct node **root)
{
	(*root) = NULL;
}

void binarySearchTree(struct node **root,int data)
{
	//If root in NULL then Create root and assign data to it and return from function
	if( (*root) == NULL )
	{
		(*root) = NEWNODE;
		(*root)->data = data;
		return;
	}

	//If root is not null then see which node is best for adding data

	
	//This Will Traverse to last node of a tree, Where tree ends 
	struct node *lastNode = (*root);


	//lakud todya kontya fandi vr basto te lakshat thevne
	struct node *secondLastNode = NULL;

	
	//This Loop Ensure where / which node to place data in tree
	while(lastNode != NULL)
	{
		secondLastNode = lastNode;
		if(data <= lastNode->data)
		{
			lastNode = lastNode->left;
		}
		else
		{
			lastNode = lastNode->right;
		}
	}

	if( data <= secondLastNode->data )
	{
		secondLastNode->left = NEWNODE;
		secondLastNode->left->data = data;
	}
	else
	{
		secondLastNode->right = NEWNODE;
		secondLastNode->right->data = data;
	}

}



void inOrderTraverse(struct node *root)
{
	if(root!=NULL)
	{
		inOrderTraverse(root->left);
		printf("%d ",root->data);
		inOrderTraverse(root->right);
	}
}


void freeTree(struct node *root)
{
	if( root != NULL )
	{
		freeTree( root->left );
		freeTree( root->right );
		free(root);
	}
}
