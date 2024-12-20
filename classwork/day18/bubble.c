/*
Algorithm:
def bubbleSort(arr):
n=len(arr)
swapped=false
for i in range(n-1):
for index in range(0,n-i-1):

if arr[index]>arr[index+1]:
swapped=True
arr[index],arr[index-1]=arr[index+1],arr[index]
if not swapped
return

arr=[64,34,25,22,11,90]
bubblesort(arr)
print("sorted array is:")

*/
#include <stdio.h>
#include <stdlib.h>

#define True 1


int bubSort(int *, int);

int swapEle(int *, int *);

void display(int *, int);

int main(int argc, char *argv[])
{
	int *a=NULL;

	int key;
	int i,count;


	if(argc<3){
		printf("\nEnter atleast 1 element\n\n");
		return EXIT_FAILURE;
	}

	a = (int *)malloc(sizeof(int)*(argc-1));
	for(i=1,count=0;i<argc;i++,count++)
		a[count] = atoi(argv[i]);

	

	printf("\nBefore Sorting\n");
	display(a,count);
	bubSort(a,count);
	printf("\nAfter Sorting\n");
	display(a,count);

	printf("\n\n");
	return 0;
}

int bubSort(int *arr, int CAP)
{
	int i,j;
	int t;
	for(i=0;i<CAP-1;i++)
	{
		for(j=0;i<CAP-i-1;j++)
		{
			if(arr[j]>arr[j+1])
			{
				//	swapEle(&arr[j],&arr[j+1]);
				t = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = t;
			}
		}
	}
	return True;
}


void display(int *arr, int CAP)
{
	int i;
	printf("\nList is\n\n");
	for(i=0;i<CAP;i++)
		printf("%d ",arr[i]);
	printf("\n\n");
}

int swapEle(int *t1, int *t2)
{
	int temp;
	printf("\n%d\t%d\n",*t1,*t2);
	temp = *t1;
	*t1 = *t2;
	*t2 = temp;
}
