/* Demo on stack using array*/
#include<stdio.h>
#include<stdlib.h>

#include <stack_v01.h>

int bottom=-1;
int top=-1;
 
//int push(int);
//int pop();

//int stackCount[MAX}
 
int push(int v)
{
	if(top==MAX-1)
	{
		printf("\n Stack/container is Full\n");
		return 0;
	}
	top++;
	stackCount[top]=v;
 	//top++;
	return 0;
}

int pop()
{
	int v;
	if(top==bottom)
	{
		printf("\n Stack/container is empty\n");
		return 0;
	}
	v = stackCount[top];
 	top--;
	return v;
}
void displayStack()
{
	int iter;
	if(top == bottom)
	{
		printf("\nStack/Container is empty\n");
		return;
	}
	printf("\nStack elements are\n");
	for(iter=top; iter>bottom;iter--)
	{
		printf("\n%d",stackCont[iter]);
	}
	printf("\n\n");

}
