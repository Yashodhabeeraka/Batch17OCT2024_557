#include<stdio.h>
#include<stdlib.h>
#include<sys/types.h>
#include<unistd.h>
#include<sys/wait.h>

int main()
{
        printf("\n This is sProgram 04\n");
		
		execl("/usr/bin/ls","/usr/bin/ls",(char *)0);
        printf("\n Ending sProgram");

        printf("\n\n");
        return 0;
}
