/*
	Write a function to count the number of leaf nodes in a binary tree. A leaf 
	node is one with no children.
*/



#include "/home/omkar/Documents/omkar/DSA/DSA_using_C/05Trees/02TreesStructure/Tree.h"
// #include <math.h>


/*

        50
       /  \
     30    70
    / \    / \
   20 40  60 80
  /
 10

*/


int countLeafNodes(struct node *root)
{
	if(root==NULL) return 0;

	if(root->left == NULL && root->right == NULL) return 1;

	return ( countLeafNodes(root->left) + countLeafNodes(root->right));
}




int main()
{

	struct node *root;
	initTree(&root);


	binarySearchTree(&root, 50);
    binarySearchTree(&root, 30);
    binarySearchTree(&root, 70);
    binarySearchTree(&root, 20);
    binarySearchTree(&root, 40);
    binarySearchTree(&root, 60);
    binarySearchTree(&root, 80);
    binarySearchTree(&root, 10);


    printf("InOrder Traverse Tree : ");
    inOrderTraverse(root);
    printf("\n");


    printf("%d\n",countLeafNodes(root));


    freeTree(root);
    root = NULL;



	return 0;
}