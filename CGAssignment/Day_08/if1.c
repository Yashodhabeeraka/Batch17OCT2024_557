/*
Description: Using ternary operator compare 3 numbers and display the smallest number
*/
#include<stdio.h>

int main()
{
        int num1,num2,num3,res;

                printf("Enter num1: ");
                scanf("%d",&num1);

                printf("\nEnter num2: ");
                scanf("%d",&num2);

                printf("\nEnter num3: ");
                scanf("%d",&num3);

                res=(num1<num2)?((num1<num3)?num1:num3):((num2<num3)?num2:num3);
                printf("\n%d is the smallest\n",res);

                return 0;
}
