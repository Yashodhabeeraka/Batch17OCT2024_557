/*
Desp: 4. Extend the code given below to read N and a start value from the user to perform the given operations.
#define MAX 100
int main()
{
int arr[MAX] = {11,22,33};
}
Add the following functions choosing proper input, output and return.
a. init() - Use the inputs to initialize the first N elements of
the array with N consequetive values starting with given start value .
b. update() – increment value of every element in the array
c. display() – display the contents of array
Author: Yashodha_Beeraka_557
Date of creation or Date of modification:30th-oct-2024
Version: 0.1v
*/
#include<stdio.h>
#define MAX 100
void in_it(int [], int, int);
void update(int [], int);
void disp(int [], int);
int main()
{
        int arr[MAX]={11,22,33};
        int num,first;

        printf("Enter the n values: \n");
        scanf("%d",&num);

        printf("Enter the first Value: \n");
        scanf("%d",&first);

        in_it(arr,num,first);
        disp(arr,num);
        printf("\n\n");
        update(arr,num);
        disp(arr,num);
        return 0;
}
void in_it(int arr[], int num, int first)
{
        int i;
        for(i=0;i<num;i++)
        {
                arr[i]=first+i;
        }
}
void update(int arr[], int num)
{
         int i;
         for (i=0;i<num;i++)
         {
                arr[i]++;
         }
}
void disp(int arr[], int num)
{
        int i;
        for(i=0;i<num;i++)
        {
                printf("%d \t",arr[i]);
        }
}
