/*
1. What does the code below refer to? Extend the code and demonstrate the use of ptr to access the contents of a 2D array.
int (*ptr)[4];
[Refer the sample code in “array_ptr_simple.c”]
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
        int arr[][3]= {1,2,3,4,5,6};
        {
                printf("\n  1: %d %d", arr[1][0], arr[0][2]);
        }

        {
        //using a single pointer
            int *ptr = arr[1];
                printf("\n 2:  %d %d %d", *(ptr+0), *(ptr+1), *(ptr+2));
        }
        {
        //using an array of 3 pointers
            int *ptr2[3]; //array of 3 pointers
            ptr2[0] = &arr[0][0];
            ptr2[1] = &arr[0][1];
            ptr2[2] = &arr[0][2];
            printf("\n 3:  %d %d %d", *ptr2[0], *ptr2[1], *ptr2[2]);
        }
    {
        //using an array of 2 pointers with each pointer pointing to an array of integers
        int (*ptr3)[2]; //pointer to an array of integers
        ptr3 = arr[0];// first row
        printf("\n 4: %d %d %d", (*ptr3)[0], (*ptr3)[1], (*ptr3)[2]);
        ptr3++;
        printf("\n 4: %d %d %d", (*ptr3)[0], (*ptr3)[1], (*ptr3)[2]);
    }
}
