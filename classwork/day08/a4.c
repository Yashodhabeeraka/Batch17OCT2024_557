/* 
Q4. Print the star pattern
given input: n = 5
output:
*
**
***
****
*****
*/

#include <stdio.h>

int main() 
{
    int n = 5;

    for (int i = 1; i <= n; i++) 
	{
        for (int j = 1; j <= i; j++) 
		{
            printf("*");
        }
        printf("\n");
    }
    return 0;
}

