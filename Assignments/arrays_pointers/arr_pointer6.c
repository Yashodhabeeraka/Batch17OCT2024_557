/*
6. Refer the program "pointer_example.c". Fix the warning issue
referring "pointer_example.c" 

FUNCTION NAME: main
DESCRIPTION: main function for 2D array - function program
RETURNS: Nothing
Author: Yashodha_Beeraka_557
Date of creation or Date of modification: 4th-11-2024
Version: 0.1v
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char arr[] = "ABC";
    
    char *ptr = (char*)&arr;
    printf("%p %p", (void*)arr, (void*)ptr);
    printf("\n 1 %c %c", *ptr, *(ptr+1));
    
    char msg[][5] = {"AB", "gh", "er"};
    char (*ptr2)[5];
    
    ptr2 = msg;
    printf("%p %p", (void*)msg, (void*)ptr2);
    printf("\n 2 %c %c", (*ptr2)[0], (*ptr2)[1]);
    
    return 0;
}

