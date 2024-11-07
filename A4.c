/* A4. rotate array every kth element

1 2 3 4 5 6 7 8 9

k= 3

3 2 1 6 5 4 9 8 7 
*/
#include <stdio.h>

void array(int arr[], int start, int end);
void printArray(int arr[], int start);

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int start = sizeof(arr) / sizeof(arr[0]);
    int end = 3;
    
    array(arr, start, end);
    printArray(arr, start);
    
    return 0;
}

void array(int arr[], int start, int end)
{
    int i, j;
    for (i = 0; i < start; i += end)
    {
        if (i + end > start)
            break;
        for (j = 0; j < end / 2; j++)
        {
            int temp = arr[i + j];
            arr[i + j] = arr[i + end - 1 - j];
            arr[i + end - 1 - j] = temp;
        }
    }
}

void printArray(int arr[], int start)
{
    int i;
    for (i = 0; i < start; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
