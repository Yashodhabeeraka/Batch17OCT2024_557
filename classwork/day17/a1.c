/* 
1. Create the employee records dynamically and display it  using the stack operation.
(using push and pop and used by linked list )
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct Employee
{
	int id;
	int sal;
	int phno;
	char Name[20];
	char Gender;
	struct Employee* next;
}EMP;

// Push operation
int push(EMP *top, EMP *newEmp) 
{
    if (newEmp == NULL) 
	{
		printf("\n ");
        return -1; 
    }
    newEmp->next = *top; 
    *top = newEmp;  
    return 0;
}
//Getting Employee Details

int getEmp(EMP *e)
{
	printf("\nEnter the Employee Details\n");
	scanf("%d",e->id);
	scanf("%d"&e->sal);
	scanf("%d",&e->phno);
	scanf("%s",e->Name);
	getchar();
	scanf("%c",&e->Gender);
	return 0;
}

//Printing the Employee Details

int printEmp(EMP *e)
{
	printf("\nEmployee Details are\n");
	printf("\n===============================\n");
	printf("\nID: %d",e->id);
	printf("\nName: %s",e->Name);
	printf("\nGender: %c",e->Gender);
	printf("\nPhNo: %d",e->phno);
	printf("\nSalary: %d",e->sal);
	printf("\n===============================\n");
	return 0;
}
