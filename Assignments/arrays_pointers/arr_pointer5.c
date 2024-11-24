/*
5. Refer the program “array_dbl_pointers_function_partial.c”. 
Implement the missing functionality in the code marked with
TBD1, TBD2…..

FUNCTION NAME: main
DESCRIPTION: main function for 2D array - function program
RETURNS: Nothing

Author: Yashodha_Beeraka_557
Date of creation or Date of modification: 4th-11-2024
Version: 0.1v
*/
#include <stdio.h>
#include <stdlib.h>

void func1(int (*ptr)[3]);
void func2(short (*mat)[3]);

int main() {
    int mat[3][3], i, j;
    int k = 0;
    for (i = 0; i < 3; i++)
        for (j = 0; j < 3; j++) {
            mat[i][j] = k++;
        }

    printf("Initialized data to: ");
    for (i = 0; i < 3; i++) {
        printf("\n");
        for (j = 0; j < 3; j++) {
            printf("%p   ", &mat[i][j]);
            printf("%d  ", mat[i][j]);
        }
    }
    printf("\n");

    func1(mat);

    // Convert mat to short for func2
    short mat_short[3][3];
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            mat_short[i][j] = (short)mat[i][j];
        }
    }
    func2(mat_short);

    return 0;
}

void func1(int (*ptr)[3]) {
    printf("Inside func1:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", ptr[i][j]);
        }
        printf("\n");
    }
}

void func2(short (*mat)[3]) {
    register short i, j;

    printf(" Declare as pointer to column, explicitly specify 2nd dim: ");
    for (i = 0; i < 3; i++) {
        printf("\n");
        for (j = 0; j < 3; j++) {
            printf("%d  ", mat[i][j]); // Display the element
        }
    }
    printf("\n");
}

