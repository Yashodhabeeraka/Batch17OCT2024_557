/*
A2.Program to find nth number made of given four digits 1, 4,6 and 9 as the only digits..

Input Format:

The First Line Of Input Contains T no of test cases
The Second Line Of Input Contains N as input taken.

Output Format:
Print the number of digits in the nth number .

Constraints:

1<=T<=100
1<=N<=100

Examples:

Input : 6
Output : 14

1,4 6, 9.11,14

Input : 21
Output : 111
*/

#include <stdio.h>
#include <math.h>

int main() 
{
    int T, N;
    printf("Enter the number of test cases: ");
    scanf("%d", &T);
    while (T--) 
	{
        printf("Enter the value of N: ");
        scanf("%d", &N);
        int nthNumber = findNthNumber(N);
        printf("The %dth no.of digits 1,4,6,&9 is: %d\n", N, nthNumber);
    }
    return 0;
}
int findNthNumber(int n) 
{
    int result = 0;
    int base = 1;
    while (n > 0) 
	{
        int remainder = n % 4;
        n = n / 4;
        switch (remainder) 
		{
            case 0:
                result += 9 * base;
                n -= 1;
                break;
            case 1:
                result += 1 * base;
                break;
            case 2:
                result += 4 * base;
                break;
            case 3:
                result += 6 * base;
                break;
        }
        base *= 10;
    }
    return result;
}

