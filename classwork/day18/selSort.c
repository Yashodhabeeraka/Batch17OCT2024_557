/* 
Selection sort

def selectionSort(customList):
for i in range(len(customList)):
min_index = i
for j in range(i+1,len(customList)):
if customList[min_index]>customList[j]:
min_index=j
customList[i],customList[min_index]=customList[min_index],
print(customList)
*/

#include <stdio.h>
#include <stdlib.h>

#define True 1

void selectionSort(int *, int);
void display(int *, int);

int main(int argc, char *argv[]) 
{
    int *a = NULL;
    int i, count;

    if (argc < 3) 
	{
        printf("\nEnter elements\n\n");
        return EXIT_FAILURE;
    }

    a = (int *)malloc(sizeof(int) * (argc - 1));
    for (i = 1, count = 0; i < argc; i++, count++)
        a[count] = atoi(argv[i]);

    printf("\nBefore Sorting\n");
    display(a, count);
    selectionSort(a, count);
    printf("\nAfter Sorting\n");
    display(a, count);

    printf("\n\n");
    free(a);
    return 0;
}

void selectionSort(int *array, int CAP) 
{
    int i, j, imin, temp;
    for (i = 0; i < CAP - 1; i++) 
	{
        imin = i; 
        for (j = i + 1; j < CAP; j++)
            if (array[j] < array[imin])
                imin = j;

        // placing in correct position
        temp = array[i];
        array[i] = array[imin];
        array[imin] = temp;
    }
}

void display(int *arr, int CAP) 
{
    int i;
    printf("\nList is\n\n");
    for (i = 0; i < CAP; i++)
        printf("%d ", arr[i]);
    printf("\n\n");
}

