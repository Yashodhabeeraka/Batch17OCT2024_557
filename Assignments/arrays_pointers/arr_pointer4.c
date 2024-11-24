/*4. Refer the program “array_ptr_repr_partial.c”. Implement the functions below which are yet to be implemented in code.

int func1(int (*ptr)[3]); // pointer to array, second dimension is explicitly specified

int func2(int **ptr); // double pointer, using an auxiliary array of pointers

FUNCTION NAME: main
DESCRIPTION: main function for 2D array - function program
RETURNS: Nothing

Author: Yashodha_Beeraka_557
Date of creation or Date of modification: 4th-11-2024
Version: 0.1v
*/
#include <stdio.h>
#include <stdlib.h>

int func1(int (*ptr)[3]);
int func2(int **);

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

    // Convert mat to double pointer for func2
    int *ptr[3];
    for (i = 0; i < 3; i++) {
        ptr[i] = mat[i];
    }
    func2(ptr);

    return 0;
}

int func1(int (*ptr)[3]) {
    printf("Inside func1:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", ptr[i][j]);
        }
        printf("\n");
    }
    return 0;
}

int func2(int **ptr) {
    int rows = 3, cols = 3;
    int **aux = (int **)malloc(rows * sizeof(int *));
    if (aux == NULL) {
        printf("Memory allocation failed\n");
        return -1;
    }

    for (int i = 0; i < rows; i++) {
        aux[i] = (int *)malloc(cols * sizeof(int));
        if (aux[i] == NULL) {
            printf("Memory allocation failed\n");
            return -1;
        }
    }

    // Copy data from ptr to aux
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            aux[i][j] = ptr[i][j];
        }
    }

    // Print the copied data to verify
    printf("Inside func2:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", aux[i][j]);
        }
        printf("\n");
    }

    // Free allocated memory
    for (int i = 0; i < rows; i++) {
        free(aux[i]);
    }
    free(aux);

    return 0;
}
