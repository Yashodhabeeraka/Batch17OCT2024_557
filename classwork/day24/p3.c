#include<stdio.h>
#include<stdlib.h>
#include<sys/wait.h>
#include<unistd.h>

#define BUFF 1024

int main()
{	
	int fd[2]; 
	int status;
	char line[BUFF];
    pid_t cpid;

    pipe(fd);

    cpid=fork();
    if (cpid == 0)
    {
