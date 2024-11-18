/* Thread demo*/

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<pthread.h>

void printHello();
int main()
{
	pthread_t tid;

	int status=0;

	printf("\nIn Main function\n");
	printf("\nI am main program/process/mainthread\n");

	status = pthread_create(&tid,NULL,printHello,NULL);
	
	// pthread_join(tid,NULL);

	printf("\nAfter completing (main)\n");
	
	sleep (1);
	return 0;
}

void printHello()
{
	printf("\n Hello World \n");
}

