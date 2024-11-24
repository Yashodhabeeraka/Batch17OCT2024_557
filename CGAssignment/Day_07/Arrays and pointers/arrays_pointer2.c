/*
2. Refer the code in “array_ptr_simple_char.c”. Implement the missing functionality in the code marked with TBD1, TBD2…..
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
    int arr[2][4] = { {1, 2, 3, 4}, {5, 6, 7, 8} };
    int (*ptr)[4]; // pointer to an array of 4 integers

    ptr = arr; // ptr now points to the first row of arr

    // Accessing elements using ptr
    printf("\nUsing ptr to access 2D array elements:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 4; j++) {
            printf("arr[%d][%d] = %d\n", i, j, ptr[i][j]);
        }
    }

  