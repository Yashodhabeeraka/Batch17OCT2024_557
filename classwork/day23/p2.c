#include<stdio.h>
#include<stdlib.h>
#include<sys/types.h>
#include<unistd.h>
#include<sys/wait.h>

extern char**environ;
int main ()
{
        int i;
        for (i=0; environ[i]; i++)
        {
                printf("%s\n",environ[i]);
        }
        printf("\n\n");
        return 0;
}
