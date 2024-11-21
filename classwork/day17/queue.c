/* Demo on the Queue operations */
#include<stdio.h>

#define MAX 5

int rear = 0;
int front = 0;

int q[MAX];

void enqueue(int);
void dequeue();
void displayQueue();

int main()
{
	enqueue(1);
	enqueue(2);
	enqueue(3);
	enqueue(4);
	enqueue(5);

	displayQueue();
	
	dequeue();
	dequeue();
	dequeue();
	dequeue();
	dequeue();
	
	displayQueue();

	printf("\n \n");
	return 0;
}

void displayQueue()
{
	int i;
	if (front ==  rear)
	{
		printf("\n Empty Queue \n");
		return ;
	}

	printf("\n Queue is  \n");
	for (i=front;i<rear;i++)
	{
		printf("%d",q[i]);
	}
	printf("\n\n");
}

void enqueue(int val)
{
	if (rear == MAX)
	{
		printf("\n Queue is Full \n");
		return;
	}
	q[rear] = val;
	rear++;
}

void dequeue()
{
	if (front == rear)
	{
		// Rest the Queue
		front = 0;
		rear = 0;

		printf("\n Empty Queue \n");
		return;
	}
	printf("\n %d is Dequeue from the Queue", q[front]);
	front++;
}




