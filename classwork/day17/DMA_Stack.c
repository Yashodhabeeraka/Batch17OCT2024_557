/* Stack using Dynamic Memory Allocation*/

#include<stdio.h>
#include<stdlib.h>

#define MAX 5

int top;
int bottom=-1;

void push(int *, int);
void pop(int *);

void displayStack(int *);

int main()
{
	int *arr==NULL;
	arr=(int *)malloc(MAX*sizeof(int));
	printf("\n Main = %u", arr);
	top=bottom;

	//temp=arr;
	push(arr,1);
	push(arr,2);
	push(arr,3);
	push(arr,4);
	push(arr,5);
	push(arr,6);
	//arr=temp;
	
	displayStack(arr);
	pop(arr);
	pop(arr);
	pop(arr);
	pop(arr);
	pop(arr);
	pop(arr);

	printf("\n\n");
	free(temp);

	return 0;
}

void displayStack(int *arr)
{
	int iter;
	if(top==bottom)
	{
		printf("\n Stack is: \n");
		return;
	}
	for (iter=top; iter>=0; iter--; arr--)
	{
		printf("\n %d", *arr)
	}
	printf("\n\n");
}

void push(int *arr, int val)
{
	if (top==MAX-1)
	{
		printf("\n Stack is full. \n");
		return;
	}
	*arr=val;
	arr++;
	top++;
}
void push(int *arr)
{
	if (top==bottom)
	{
		printf("\n Stack is empty. \n");
		return;
	}
}

