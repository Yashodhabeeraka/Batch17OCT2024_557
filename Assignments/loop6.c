/*
Desc: 6. Analyse the code, identify the issues
*/

#include <stdio.h>
int main()
{
	float count = 0, num = 1000;
	do
	{	
		printf ("\n%f\n%f", num,count);
		num /= count;
	}
	while (count--); 
	return 0;
}
