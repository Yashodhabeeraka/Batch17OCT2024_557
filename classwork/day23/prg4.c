#include<stdio.h>
#include<stdlib.h>
#include<sys/types.h>
#include<unistd.h>
#include<sys/wait.h>

int main(int argc, char *argv[])
{
	printf("\n ec2.c\n");

	printf("\n PID: %d",getpid());

	printf("\n%s%s", argv[0],argv[1]);

	printf("\nHello, %s\n Welcome to the world of programming\n\n",(argv[1]));

	return 0;
}
