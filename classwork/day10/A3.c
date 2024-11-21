/*
A3. Write a program to find the  n-th number made of prime digits

Input Format:
First Line Of Input Contains T Number Of Test Cases
Second Line Of Input Contains an input Number N.

Output Format:
Print the Nth number of sequence and it should be only prime.

Constraints:
1<=T<=100
1<=N<=10000

Examples :
Input  :
1
10
Output :
 33
*/
#include <stdio.h>

int main() 
{
    int T, N;
    printf("Enter the number of test cases: ");
    scanf("%d", &T);
    while (T--) 
	{
        printf("Enter the value of N: ");
        scanf("%d", &N);
        int nthNumber = findNthPrimeDigitNumber(N);
        printf("The %dth no.of prime digits 2,3,5&7:%d\n", N, nthNumber);
    }
    return 0;
}
int findNthPrimeDigitNumber(int n) 
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
                result += 7 * base;
                n -= 1;
                break;
            case 1:
                result += 2 * base;
                break;
            case 2:
                result += 3 * base;
                break;
            case 3:
                result += 5 * base;
                break;
        }
        base *= 10;
    }
    return result;
}

