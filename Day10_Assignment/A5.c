/* A5.
Write a c program to print alphabet triangle.
Input: 5
Output:
     A
    ABA
   ABCBA
  ABCDCBA
 ABCDEDCBA
     1
    121
   12321
  1234321
 123454321
 */
#include <stdio.h>

int main()
{
    int num = 5;
    alpTri(num);
    numTri(num);
    return 0;
}

void alpTri(int num)
{
    for (int i = 0; i < num; i++)
    {
        for (int j = 0; j < num; j++)
        {
            if (j < num - i - 1)
            {
                printf(" ");
            }
            else if (j <= num - 1)
            {
                printf("%c", 'A' + j - (num - i - 1));
            }
        }
        for (int j = num - 2; j >= 0; j--)
        {
            if (j >= num - i - 1)
            {
                printf("%c", 'A' + j - (num - i - 1));
            }
        }
        printf("\n");
    }
}

void numTri(int num)
{
    for (int i = 0; i < num; i++)
    {
        for (int j = 0; j < num; j++)
        {
            if (j < num - i - 1)
            {
                printf(" ");
            }
            else if (j <= num - 1)
            {
                printf("%d", j - (num - i - 1) + 1);
            }
        }
        for (int j = num - 2; j >= 0; j--)
        {
            if (j >= num - i - 1)
            {
                printf("%d", j - (num - i - 1) + 1);
            }
        }
        printf("\n");
    }
}

