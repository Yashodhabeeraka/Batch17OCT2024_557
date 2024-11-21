#include<stdio.h>
#include<stack_v01.h>

// Driver code for stack operations
int main()
{
	int v,i;
	/*
	v = pop();
	printf("\n%d element is deleted from the container/stack",v);
	*/

	push(23);
	push(24);
	push(53);
	push(52);
	push(12);
	push(03);

	displayStack();

	for (i=0; i<MAX; i++)
	{
		v=pop();
		printf("\n %d Elements is deleted from the container/stack",v);
		displayStack();
	}
	printf("\n\n");
	return 0;
}

