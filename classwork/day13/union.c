/* Union Demo*/

#include <stdio.h>
#include<string.h>
#include<stdlib.h>

typedef struct sEmployee
{
	int id;
	float sal;
	char g;
	char name[20];
}sEMP;

typedef union uEmployee
{
	int id;
	float sal;
 	char g;
 	char name[20];
}uEMP;

int main()
{
	sEMP es;
	uEMP eu;
	uEMP *eu1=NULL;

	printf("\nSize of struct= %d",sizeof(es));
	printf("\nSize of union= %d",sizeof(eu));
	
	eu.id=101;
	eu.sal=10000;
	strcpy(eu.name,"Yashodha");
	//printf("\nID =%d",eu.id);
	printf("\nName= %s",eu.name);
	
	eu1=(uEMP *)malloc(sizeof(uEMP));
	eu1->id =102;
	printf("\nID: %d",eu1->id);
	printf("\n\n");
	return 0;
}
