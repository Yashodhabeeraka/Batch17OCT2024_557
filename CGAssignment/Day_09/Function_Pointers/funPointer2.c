/*
Desp: 2. Extend Q1 to include a function below which will return the address of a function based on input character.
<address of function> getaddr(char mychar);
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

// Function to return the address of a function based on input character
int (*getaddr(char mychar))(int, int);

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

    // Get the function address using getaddr() based on user input
    int (*operation)(int, int) = getaddr(operator);

    if (operation != NULL) {
        // Invoke the function using the pointer
        result = operation(x, y);
        printf("Result: %d\n", result);
    } else {
        printf("Invalid operator.\n");
    }

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

// Function to return the address of a function based on input character
int (*getaddr(char mychar))(int, int) {
    switch (mychar) {
        case '+': return add;
        case '-': return sub;
        case '*': return multiply;
        case '/': return divide;
        default: return NULL;
    }
}

