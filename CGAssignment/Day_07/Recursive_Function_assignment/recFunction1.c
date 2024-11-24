/*
Desp: To calculate the maximum stack depth of a recursive call to a function.
(For eg a factorial function ).
Author: Yashodha_Beeraka_557
Date of creation or Date of modification: 08-11-2024
Version: 0.1v
*/

#include <stdio.h>
int main()
{
    int number = 5;
    int max_depth = 0;
    int result = factorial(number, 1, &max_depth);
    printf("Factorial of %d is %d\n", number, result);
    printf("Maximum stack depth is %d\n", max_depth);
    return 0;
}

int factorial(int n, int depth, int *max_depth)
{
    if (n == 0 || n == 1)
        {
        if (depth > *max_depth)
                {
            *max_depth = depth;
        }
        return 0;
    }
        else
        {
        if (depth > *max_depth)
                {
            *max_depth = depth;
        }
        return n * factorial(n - 1, depth + 1, max_depth);
    }
}