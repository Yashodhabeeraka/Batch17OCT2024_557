/*
Desp: 3. Extend Q1 to include a function below which takes a function pointer to a calculator function and one integer (value = 10) as arguments and shall invoke the given function 
with required arguments. For the second argument read input from user. Return the result.
int invokefunc(<function pointer as argument1>, int val1);
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
int invokefunc(int (*func_ptr)(int, int), int val1);
int (*getaddr(char mychar))(int, int);

int main() {
    char operator;
    int result;

    // Ask for user input
    printf("Enter operator (+, -, *, /): ");
    scanf(" %c", &operator);

    // Get the function pointer using operator input
    int (*operation)(int, int) = getaddr(operator);

    if (operation != NULL) {
        // Invoke invokefunc with the fixed value 10
        result = invokefunc(operation, 10);
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

// Function to invoke the passed function with fixed value 10
int invokefunc(int (*func_ptr)(int, int), int val1) {
    int val2;
    printf("Enter the second operand: ");
    scanf("%d", &val2);

    return func_ptr(val1, val2);  // Invoke function with val1 (fixed value) and val2 (user input)
}

