/*A1. Check whether a given number can be expressed as the sum of two prime number

i/p
Enter a positive integer: 34
Output
34 = 3 + 31

34 = 5 + 29
34 = 11 + 23
34 = 17 + 17
No.ofWays = 4

No.ofWays=-1*/

#include <stdio.h>
#include <math.h>

int main()
{
    int num;
    printf("Enter a positive integer: ");
    scanf("%d", &num);
    
    primeNum(num);
    return 0;
}

// Function to check if a number is prime
int prime(int num)
{
    if (num <= 1)
        return 0;
    
    for (int i = 2; i <= sqrt(num); i++)
    {
        if (num % i == 0)
            return 0;
    }
    return 1;
}

// Function to find pairs of prime numbers that sum up to N
void primeNum(int N)
{
    int count = 0;
    for (int i = 2; i <= N / 2; i++)
    {
        if (prime(i) && prime(N - i))
        {
            printf("%d = %d + %d\n", N, i, N - i);
            count++;
        }
    }
    if (count > 0)
        printf("Number of ways = %d\n", count);
    else
        printf("Number of ways = -1\n");
}