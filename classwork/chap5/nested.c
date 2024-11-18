/*
descprtion: Greatest of Five numbers using nested if else statements
Authour: Yashodha Beeraka
version: 0.1v
*/

#include<stdio.h>

int main()
{
	int a,b,c,d,e;

	printf("\n Enter a value: ");
	scanf("%d",&a);

	printf("\n Enter b value: ");
	scanf("%d",&b);
	
	printf("\n Enter c value: ");
	scanf("%d",&c);
	
	printf("\n Enter d value: ");
	scanf("%d",&d);
	
	printf("\n Enter e value: ");
	scanf("%d",&e);

	if (a>=b)
	{
		if (a>c)
		{
			if (a>d)
			{
				if (a>e)
				{
					printf("\n The value a is greater: %d", a);
				}
				else
				{
					printf("\n The value e is greater: %d", e);
				}
			}
			else
			{
				if (d>e)
				{		
					printf("\n The value d is greater: %d", d);
				}
				else
				{			
					printf("\n The value e is greater: %d", e);
				}
			}
		}
		else 
		{
			if (b>c)
			{
				if (b>d)
				{
					if (b>e)
					{	
						printf("\n The value b is greater: %d", b);
					}
					else
					{	
						printf("\n The value e is greater: %d", e);
					}
				}
				else
				{
					if (d>e)
					{
						printf("\n The value d is greater: %d", d);
					}
					else
					{
						printf("\n The value e is greater: %d", e);
					}
				}
			}
			else
			{
				if (c<d)
				{
					if (c>e)
					{
						printf("\n The value c is greater: %d", c);
					}
					else
					{		
						printf("\n The value e is greater: %d", e);
					}
				}
				else
				{
					if (d>e)
					{
						printf("\n The value d is greater: %d", d);
					}
					else
					{
						printf("\n The value e is greater: %d", e);
					}
				}
			}
		}
	}
	return 0;
}
