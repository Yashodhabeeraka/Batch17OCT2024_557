#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>

int main()
{
	long int i;
	int pid = getpid();
	pid_t ppid = getppid();

	printf("\n My own PID = %d\n",pid);
	printf("\n for %d parent is %d \n", pid,ppid);

	getchar();
	/*for (i=0; i<99999; i++)
	
		printf("%ld",i);*/

	printf("\n\n");
	
	return 0;
}
