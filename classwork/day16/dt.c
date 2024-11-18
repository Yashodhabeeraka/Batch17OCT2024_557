#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
	int val;
	struct node *ptr; // self reference pointer
}NODE;

int main()
{
	// creating node and allocated mem
	NODE h1,h2,h3;
	
	// ptr1 is used to navigate/travese between nodes
	NODE *ptr1;

	// initialze values to each node
	h1.val=10;
	h1.ptr=NULL;

	h2.val=20;
	h2.ptr=NULL;

	h3.val=30;
	h3.ptr=NULL;

	printf("\n Address of h1 = %p",&h1);
	printf("\n Address of h2 = %p",&h2);
	printf("\n Address of h3 = %p",&h3);
	printf("\n Address of ptr1 = %p", &ptr1);

	printf("\n h1 valued %d and ptr=%p",h1.val,h1.ptr);
	printf("\n h2 valued %d and ptr=%p",h2.val,h2.ptr);
	printf("\n h3 valued %d and ptr=%p",h3.val,h3.ptr);
	
	// making relationship (travese)/creating list
	h1.ptr=&h2;
	h2.ptr=&h3;

	//travese 
	ptr1=&h1; // prt1 pointing to BA of the list<F4> (first rec)

	printf("\n%d",h1.val);
	printf("\n%d",ptr1->val);

	//ptr1=&h2;
	ptr1=h1.ptr; // ptr1 is pointing to h2
	printf("\n%d",ptr1->val);

	//ptr1=&h3;
	ptr1=h2.ptr; // from earlier line 48
	printf("\n%d",ptr1->val);

	printf("\n\n");
	return 0;
}

