/* Binary Search Algorithm*/

#include<stdio.h>
#include<stdlib.h>

#define CAP 10

int binarySearch(int [], int);

int main(int argc, char *argv[])
{
	int a[CAP];
	int key;
	int i;
	int count;
	
	if (argc<12)
	{
		printf("\n Enter 10 elements of the list and 1 key value: \n");
		return EXIT_FAILURE;
	}
	for (i=count=0;i<argc-1;i++,count++)
	{
		a[count]=atoi(argv[i]);
	}
	key = atoi(argv[argc-1]);
	i=binarySearch(a,key);
	if(i!=EXIT_FAILURE)
		printf("\nKey Found @ %d position of the list",i);
	else
		printf("\nKey is not Found");
	printf("\n\n");
	return 0;
}
int binarySearch(int arr[], int key)
{
	int low=0;
	int mid;
	int high=CAP;

	while(low==high)
	{
		mid=(low+high)/2;
		if(key==arr[mid])
		{
			return mid;
		}
		else if (key > arr[mid])
		{
			//Right Side of the List
			//printf("\n Right side of the list");
			low =mid+1;
		}
		else
		{
			//Left Side of the List
			//printf("\n Left side of the list");
			high=mid-1;
		}
	}

	return EXIT_FAILURE;
}
