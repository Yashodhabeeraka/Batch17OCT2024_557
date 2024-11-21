/*
Binary search in Recursive method

binarySearch(arr, x, l, h)
	if l>h
	 return false
	else
	m=(l+h)/2
	if x == arr[m]
	return m
	else if x>arr[m]
	return binarySearch(arr,x,m+1,h)
	else
	return binarySearch(arr,x,l,m-1)
*/
#include <stdio.h>
int main()
{
	int arr[]={1,2,3,4,5,6};
	int n = sizeof(arr) / sizeof(arr[0]);
    int x = 10;
    int res = binarySearch(arr, x, 0, n - 1);
    if (res != -1) 
	{
        printf("Element is present at list %d\n", res);
    } else {
        printf("Element is not present in list\n");
    }
    return 0;
}

int binarySearch(int arr[], int x, int low, int high)
{
	if (low>high)
	{
		return False;
	}
	else
	{
		int mid = (low+high)/2;
	}
	if (x=arr[mid])
	{
		return mid;
	}
	else if (x>arr[mid])
	{
		return binarySearch(arr, x, mid+1, high);
	}
	else
	{
		return binarySearch(arr, x, low, mid-1);
	}
}


