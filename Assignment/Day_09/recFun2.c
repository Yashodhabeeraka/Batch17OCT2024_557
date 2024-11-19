/*
Desp:  What is tail recursion? Why is it important? Give an example
Tail recursion occurs when a function calls itself as its last operation,
meaning there are no further computations after the recursive call.

Importance of Tail Recursion
1. Optimization.
2. Memory Efficiency.
3. Improved Performance.

Author: Yashodha_Beeraka_557
Date of creation or Date of modification: 08-11-2024
Version: 0.1v

*/

#include <stdio.h>

int main()
{
    int number = 5;
    int result = tail_recursive_factorial(number, 1);
    printf("Factorial of %d is %d\n", number, result);
    return 0;
}

int tail_recursive_factorial(int n, int accumulator)
{
    if (n == 0)
        {
        return accumulator;
    }
        else
        {
        return tail_recursive_factorial(n - 1, n * accumulator);
    }
}