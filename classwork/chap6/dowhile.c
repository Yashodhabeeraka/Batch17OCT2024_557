/* 
do{
	statement
}while(condition);
*/

#include<stdio.h>

int main()
{
	char taste='g';
	int empPlate=10;
	int sFull = 0;

	do 
	{ 
		printf("\n Have a bite of food \n");
		empPlate--;
		
		printf("\n Stomach Full (1/0): ");
		scanf("%d", &sFull);
		
		printf("\n How was the taste (g/b): ");
		scanf(" ");
		taste = getchar();
		
		printf("\n Empty plate value: %d", empPlate);
	}while((taste=='g') && (sFull==0) && (empPlate>=0));

	printf("\n Program Ended \n");
	return 0;

}
