#include<stdio.h>
#include<stdlib.h>
#include<sys/types.h>
#include<unistd.h>
#include<sys/wait.h>

int main(int argc, char *argv[])
{
    char *temp[5];
    for (i=0; i<5; i++)
        temp[i] = (char *) malloc (1024);
        
    if (strcmp(argv[1],"calc") == 0)
    {
        strcpy(temp[0], argv[1]);
        strcpy(temp[1], argv[2]);
        strcpy(temp[2], argv[3]);
        strcpy(temp[3], argv[4]);
        temp[4]=(char *)0;
        
        execv(argv[1], temp);
    }
    else if
    {
        strcpy(temp[0], argv[1]);
        strcpy(temp[1], argv[2]);
        strcpy(temp[2], argv[3]);
        //strcpy(temp[3], argv[4]);
        temp[4]=(char *)0;
        
        //execv(argv[1], temp);
    }
    execv(argv[1], temp);
    
    strcpy(temp[0], argv[1]);
    strcpy(temp[1], argv[2]);
    strcpy(temp[2], argv[3]);
    strcpy(temp[3], argv[4]);
    temp[4]=(char *)0;
    
    execv("/home2/user76/Batch17OCT2024_557/classwork/day23/calc", temp);
    printf("\n This will not print at all \n\n");
    
}
