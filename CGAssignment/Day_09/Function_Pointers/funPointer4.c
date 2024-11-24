/*
Desp: 4. Extend Q1 to define an array of function pointers and invoke them based user input character.
Author: Yashodha_Beeraka_557
Date of creation or Date of modification: 6th-11-2024
Version: 0.1v
*/
#include <stdio.h>

// Function prototypes
int add(int x, int y);
int sub(int x, int y);
int multiply(int x, int y);
int divide(int x, int y);

int main() {
    char operator;
    int x, y, result;

    // Array of function pointers
    int (*operations[4])(int, int) = {add, sub, multiply, divide};

    // Ask for user input
    printf("Enter operator (+, -, *, /): ");
    scanf(" %c", &operator);

    // Ask for integer inputs
    printf("Enter first operand: ");
    scanf("%d", &x);
    printf("Enter second operand: ");
    scanf("%d", &y);

    // Select the appropriate function based on operator input
    int operation_index;
    switch (operator) {
        case '+':
            operation_index = 0;
            break;
        case '-':
            operation_index = 1;
            break;
        case '*':
            operation_index = 2;
            break;
        case '/':
            operation_index = 3;
            break;
        default:
            printf("Invalid operator.\n");
            return 1;
    }

    // Invoke the function using the array of function pointers
    result = operations[operation_index](x, y);

    // Display the result
    printf("Result: %d\n", result);

    return 0;
}

// Function implementations
int add(int x, int y) {
    return x + y;
}

int sub(int x, int y) {
    return x - y;
}

int multiply(int x, int y) {
    return x * y;
}

int divide(int x, int y) {
    if (y != 0)
        return x / y;
    else {
        printf("Error: Division by zero.\n");
        return 0;
    }
}
