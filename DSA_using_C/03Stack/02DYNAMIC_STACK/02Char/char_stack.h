#ifndef CHAR_STACK
#define CHAR_STACK 


#include <stdbool.h>
#include <stdlib.h>




#define CHAR_NEWNODE (struct CHARnode*) malloc(sizeof(struct CHARnode))
#define BOTTOM NULL




struct CHARnode
{
	struct CHARnode *next;
	char data;
	struct CHARnode *prev;
};



struct CHARstack
{
	struct CHARnode *head;		// Hold LinkedList
	struct CHARnode *top;		// Point To Topmost Node
};




void initCHAR(struct CHARstack *stack);
bool isEmptyCHAR(struct CHARstack *stack);
void pushCHAR(struct CHARstack *stack, char data);
int popCHAR(struct CHARstack *stack);
int peekCHAR(struct CHARstack *stack);
void freeStackCHAR(struct CHARstack *stack);





#endif