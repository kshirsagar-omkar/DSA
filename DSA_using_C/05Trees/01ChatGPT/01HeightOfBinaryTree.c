/*
	Height of a Binary Tree: Write a function to calculate the height of a binary tree. The height of a 
	tree is the number of edges in the longest path from the root to a leaf node.
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

int max(int a, int b)
{
	return a>b ? a : b;
}

int heightOfBinaryTree(struct node *root)
{
	if(root == NULL)
	{
		return -1;
	}
	return max( heightOfBinaryTree(root->left), heightOfBinaryTree(root->right) ) + 1;
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


    printf("%d\n",heightOfBinaryTree(root));


    freeTree(root);
    root = NULL;



	return 0;
}