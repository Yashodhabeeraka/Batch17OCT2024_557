#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>

int main()
{
	printf("\n I am Parent and my id is %d",getpid());
	printf("\n Parent's PPID: %d",getppid());
	
	pid_t id = fork();
	
	if (id == 0)
	{
		printf("\n I am child process");
		printf("\n My Id = %d",getpid());
	}
	else
	{
		printf("\n In the parent child process id = %d", id);
	}

	printf("\n Hello world");
	//printf("\n PID: %d", getpid());
	//printf("\n Parent's PPID: %d",getppid());
	
	//printf("\n Fork returned id = %d", id);
	printf("\n\n");

    return 0;
}

