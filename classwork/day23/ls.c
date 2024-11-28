#include<stdio.h>
#include<stdlib.h>
#include<sys/types.h>
#include<unistd.h>
#include<sys/wait.h>

int main()
{
	printf("\n This is sProgram 04\n");
	if (fork()>0)
	{
		wait(0);
		printf("\nsProgram 04: %d",getpid());
	}
	else
	{
		execl("/usr/bin/ls","/usr/bin/ls",(char *)0);
	}
	printf("\n Ending sProgra");

	printf("\n\n");
	return 0;
}

