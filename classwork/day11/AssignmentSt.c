/*WAP to which should have the following functionalities
1. scan employee recs 
2. display
3. search for a particulary employee based on
  a. id
  b. lName
4. search for employess whos salary fall in
   between 6K-10K and display only those records
5. update employee rec to change his/her lName*/
#include <stdio.h>
#include <string.h>

struct Employee
{
	char eSalu[20];
	char eName[20];
	char eGender;
	char eAddress[20];
	int eId;
	float eSal;
};

typedef struct Employee EMP;


void getDetails(EMP [],int);
void dispDetails(EMP [], int);


int main()
{

	EMP e1;
	EMP e[3];
	int i;
	getDetails(e,3);
	dispDetails(e,3);

	printf("\n\n");
	return 0;

}

void getDetails(EMP e[], int n)
{
	int i;

	printf("\nEnter Employee Details\n");
	for(i=0;i<n;i++)
	{
		printf("\nSalutation: ");
		scanf("%s",e[i].eSalu);
		printf("\nName: ");
		scanf("%s",e[i].eName);
		printf("\nID: ");
		scanf("%d",&e[i].eId);
		printf("\nGender: ");
		scanf(" ");
		scanf("%c",&e[i].eGender);
		printf("\nSalary: ");
		scanf("%f",&e[i].eSal);

	}
}

void dispDetails(EMP e[], int n)
{
	int i;
	printf("\nEmployee Details are\n");
	for(i=0;i<n;i++){
		printf("\n=========================\n");
		printf("\nSalutation: %s",e[i].eSalu);
		printf("\nID: %d",e[i].eId);
		printf("\nName: %s",e[i].eName);
		printf("\nGender: %c",e[i].eGender);
		printf("\nSalary: %f",e[i].eSal);
		printf("\n=========================\n");
	}
}

void searchID(EMP e[], int n, int eID)
{
	for(i=0;i<n;i++)
	{
		if(eID[i]==eID)
		{
			printf("\n Employee ID Found\n");
		}
		else
		{
			printf("\n No Employee ID Found\n");
		}
	}
}

void searchSalu(EMP e[], int n, char eSalu)
{
	for()
	{
	
	}

}
void searchSal(EMP e[], int n, char eSal)
{
	
