/* 
Desp: 2D, MultiDimensional Arrays

1. Implement sort() to sort a given array. Refer the code snippet below.

int main()

{

char arr[]= “xaybz”;

sort(arr, sizeof(arr)/sizeof(arr[0]);

return 0;

}

Author: Yashodha_Beeraka_557
Date of creation or Date of modification: 29th-oct-2024
Version: 0.1v
*/
#include <stdio.h>
#include <string.h>

void sort(char arr[], int n) 
{
    int i, j;
    char temp;
    for (i = 0; i < n-1; i++) 
	{
        for (j = 0; j < n-i-1; j++) 
		{
            if (arr[j] > arr[j+1]) 
			{
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int main() 
{
    char arr[] = "xaybz";
    int n = sizeof(arr) / sizeof(arr[0]) - 1; 
    sort(arr, n);

    printf("Sort Array: %s\n", arr);
    return 0;
}

