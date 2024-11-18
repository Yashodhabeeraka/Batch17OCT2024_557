/* 
for (intial section; cond section; counter)
{
	statement;
}
*/
#include<stdio.h>

int main()
{
	int i,j;
	
    for(i=0, j=2;i<10; i++,j+=2) 
//  for(i=0, j=2;(i<10)||(j<10); i++,j+=2)
//	for(i=0, j=2;(i<10)&&(j<15); i++,j+=2)
//	for (i=0;i<10;i++)
	{
//		for (j=0;j<10;j++)
			printf("\n i=%d\tj=%d", i,j);
	}
	printf("\n Program end\n");
	return 0;
}

