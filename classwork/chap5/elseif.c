/* 
else if ladder
*/
#include <stdio.h>

int main ()
{
	char clrcode;

	clrcode = getchar();

	if (clrcode == 'B')
		printf("\nBlack\n");
	else if(clrcode == 'N')
		printf("\nBrown\n");	
	else if(clrcode == 'R')
		printf("\nRed\n");
	else if(clrcode == 'O')
		printf("\nOrange\n");
	else
		printf("\nEnter the correct colour code \n");

	printf("\nProgram Ended\n");

	return 0;
}
