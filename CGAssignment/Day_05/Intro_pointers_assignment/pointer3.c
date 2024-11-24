/*
DEsp:
3. Refer the code in “pointer_prg.c”. The functions swap_nums() and swap_pointer                                                                             s() are expected to swap the numbers and pointers respectively.
But swap_pointers() is currently not giving the expected results. Analyse and th                                                                             e fix the issue.

Author: Yashodha_Beeraka_557
Date of creation or Date of modification:29th-Oct-2024
Version: 0.1v
*/
#include <stdio.h>
#include <stdlib.h>

#define MAX 80

// Swap integers by pointer
void swap_nums(int *x, int *y)
{
    int tmp;
    tmp = *x;
    *x = *y;
    *y = tmp;
}

// Swap pointers to string
void swap_pointers(char **x, char **y)
{
    char *tmp;
    tmp = *x;
    printf("\n swap_pointers: x, y is %p %p, tmp=x:%p \n", (void *)*x, (void *)*                                                                             y, (void *)tmp);
    printf("\n swap_pointers: x, y is %s %s, tmp=x:%s \n", *x, *y, tmp);
    *x = *y;
    *y = tmp;
    printf("\nswap_pointers :  x, y is %s %s \n", *x, *y);
}

int test_swap_char()
{
    char arr1[MAX] = "ABC";
    char arr2[MAX] = "DEFGH";

    char *s1 = arr1;
    char *s2 = arr2;
    printf("\n s1, s2 address bef  is %p %p", (void *)s1, (void *)s2);

    // Swap the pointers
    swap_pointers(&s1, &s2);
    printf("\n s1, s2 address aft is %p %p", (void *)s1, (void *)s2);

    return 0;
}

int test_swap_num()
{
    int a = 3, b = 4;

    // Swap the numbers using pass by pointer
    swap_nums(&a, &b);
    printf("a is %d\n", a);
    printf("b is %d\n", b);

    return 0;
}