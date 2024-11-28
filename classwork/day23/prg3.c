#include<stdio.h>
#include<stdlib.h>
#include<sys/types.h>
#include<unistd.h>
#include<sys/wait.h>

int main()
{
	printf("\n This is sProg04\n");

	if execl("/usr/bin/ls","ls"(char *)0<0);
	{
		
