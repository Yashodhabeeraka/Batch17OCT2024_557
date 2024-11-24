/*
Desp: Refer the program “array_pointer.c”.
Add a function getmax() to find the maximum
in the array and call in main() and display the result.

Author: Yashodha_Beeraka_557
Date of creation or Date of modification: 29th-oct-2024
Version: 0.1v
*/
#include <stdio.h>

#define MAX 100

int getmax(int arr[], int n)
{
    int max = arr[0];
    for (int i = 1; i < n; i++)
        {
        if (arr[i] > max)
                {
            max = arr[i];
        }
    }
    return max;
}

int main()
{
    int arr[MAX] = {11, 22, 33};
    int max = getmax(arr, 3);
    printf("Maximum value: %d\n", max);
    return 0;
}