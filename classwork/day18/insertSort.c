/* 
Insertion sort:

def insertionSort(customList)
for i in range(1,len(customList)):
key=customList[i]
j=i-1
while j>0 and key<customList[j]:
customList[j+1]=customList[j]:
j-=1
customList[j+1]=key
print(customList)
*/
#include<stdio.h>
#include <stdlib.h>

#define True 1

int insertSort(int *, int );
void display(int *, int);

int main(int argc, char *argv[])
{
	int *a=NULL;

	int key;
	int i,count;

	if(argc<3)
	{
		printf("\nEnter atleast 1 element\n\n");
		return EXIT_FAILURE;
	}

	a = (int *)malloc(sizeof(int)*(argc-1));
	for(i=1,count=0;i<argc;i++,count++)
		a[count] = atoi(argv[i]);

	printf("\nBefore Sorting\n");
	display(a,count);
	insertSort(a,count);
	printf("\nAfter Sorting\n");
	display(a,count);

	printf("\n\n");
	return 0;
}

int insertSort(int *arr, int CAP)
{
	int i,j,key;
	for (i=1;i<CAP;i++) 
	{
        key=arr[i];
        j=i-1;
		while ((j>=0) && (key<arr[j]))
		{
			arr[j+1]=arr[j];
			j=j-1;
		}
		arr[j+1]=key;
	}
}
void display(int *arr, int CAP)
{
	int i;
	printf("\nList is\n\n");
	for(i=0;i<CAP;i++)
		printf("%d ",arr[i]);
	printf("\n\n");
}

