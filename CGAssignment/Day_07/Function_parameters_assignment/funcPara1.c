/*
Desp: Refer the code below and find the issue.

#include<stdio.h>
int *func(void);
int main()
{
        int num,*ptr = NULL;
        ptr = (int *)func();
        num = *ptr;
        return 1;
}
int *func()
{
        int local;
        local = 10;
        return(&local);
}
Author: Yashodha_Beeraka_557
Date of creation or Date of modification: 08-11-2024
Version: 0.1v
*/
#include <stdio.h>
#include <stdlib.h>

int *func(void);

int main()
{
    int num, *ptr = NULL;
    ptr = func();
    num = *ptr;

        printf("Value: %d\n", num);

        free(ptr);
    return 0;
}

int *func()
{
    int *local = (int *)malloc(sizeof(int));
    if (local != NULL)
        {
        *local = 10;
    }
    return local;
}
