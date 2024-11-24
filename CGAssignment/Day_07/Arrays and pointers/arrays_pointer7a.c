/*
7. Consider an array of strings as below.
char arr[][10]={"Word", "Excel", "PowerPoint", "Pdf", "Paint"};

a. Implement a function read_displaystring() to read a row index from the user, access the string, store in a char * variable and using this,
traverse every alternate character in the string and display in console.

void read_displaystring(char *arr[][10], int row);

Author: Yashodha_Beeraka_557
Date of creation or Date of modification: 4th-11-2024
Version: 0.1v
*/

#include <stdio.h>

void read_displaystring(char arr[][10], int row) {
    char *str = arr[row];
    printf("Alternate characters in the string: ");
    for (int i = 0; str[i] != '\0'; i += 2) {
        printf("%c", str[i]);
    }
    printf("\n");
}

int main()
{
    char arr[][10] = {"Word", "Excel", "PowerPoint", "Pdf", "Paint"};
    int row;
    printf("Enter row index: ");
    scanf("%d", &row);
    if (row >= 0 && row < 5) {
        read_displaystring(arr, row);
    } else {
        printf("Invalid row index.\n");
    }
    return 0;
}