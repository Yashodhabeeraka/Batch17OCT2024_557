/* 
Function and structure decleration
*/
#include<common.h>

#ifndef EMP_H
#define EMP_H

typedef struct Employee
{
	int id;
	int phno;
	int sal;
	char Name[MAX];
	char g;
}EMP;

int file(char *argv[], EMP *e);
int getEmp(EMP *, char []);
int displayEmp(EMP *);

#endif
