/*
b. Reverse the string read at the index in a) using a function of prototype as below. Caller to read the returned string and display the
reversed string. [Ensure that the input source array is not corrupted and remaining elements are intact].

char *reverse(char *arr[][10], int row);

Author: Yashodha_Beeraka_557
Date of creation or Date of modifi*cation: 4th-11-2024
Version: 0.1v
*/
#include <stdio.h>
#include <string.h>

char* reverse(char arr[][10], int row) {
    static char reversed[10];
    char *str = arr[row];
    int len = strlen(str);
    for (int i = 0; i < len; i++) {
        reversed[i] = str[len - 1 - i];
    }
    reversed[len] = '\0';
    return reversed;
}

void read_displaystring(char arr[][10], int row) {
    printf("Original string: %s\n", arr[row]);
}

int main() {
    char arr[][10] = {"Word", "Excel", "Pdf", "Paint"};
    int row;
    printf("Enter row index: ");
    scanf("%d", &row);
    if (row >= 0 && row < 4) {
        read_displaystring(arr, row);
        char *reversed_str = reverse(arr, row);
        printf("Reversed string: %s\n", reversed_str);
    } else {
        printf("Invalid row index.\n");
    }
    return 0;
}

