/*
Q2. print the series of the 1,2,4,8,16,32,64
*/

#include<stdio.h>

int main()
{
	int num=1;

	for (int iter=1; iter<=6; iter++)
	{
		printf("%d," ,num);
		num*=2;
	}

	printf("%d", num);

	printf("\n\n");
	return 0;
}

