/*
Desp: 1. WAP to invoke functions below based on user input character using function pointer. Character mapping and respective functions to be invoked are given below.

Character input Function

+ int add(int x, int y)

- int sub(int x, int y)

* int multiply(int x, int y)

/ int divide(int x, int y)

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

    // Ask for user input
    printf("Enter operator (+, -, *, /): ");
    scanf(" %c", &operator);  // Use " %c" to avoid newline character issues

    // Ask for integer inputs
    printf("Enter first operand: ");
    scanf("%d", &x);
    printf("Enter second operand: ");
    scanf("%d", &y);

    // Declare a function pointer
    int (*operation)(int, int);

    // Assign the correct function pointer based on user input
    switch (operator) {
        case '+':
            operation = add;
            break;
        case '-':
            operation = sub;
            break;
        case '*':
            operation = multiply;
            break;
        case '/':
            operation = divide;
            break;
        default:
            printf("Invalid operator.\n");
            return 1;  // Exit if invalid operator
    }

    // Invoke the function using the pointer
    result = operation(x, y);

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
