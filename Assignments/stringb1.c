/*
Desp: 1. WAP to define read and store the following details together in a structure and
display the structure details
name – char* [input could of maximum length 50 char]
age – uint
designation – enum [use the enum values used in enum exercise]
void read (EMP *emp)
void display (EMP emp);

Implement additional function below.
//read and update the employee record
int update(EMP *emp);

//copy the emp to a new employee and return
EMP copy(EMP emp);
Author: Yashodha_Beeraka_557
Date of creation or Date of modification: 5th-11-2024
Version: 0.1v
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef enum 
{
    INTERN,
    JUNIOR,
    SENIOR,
    MANAGER
} Designation;

typedef struct 
{
    char name[51];
    unsigned int age;
    Designation designation;
} EMP;

void read(EMP *emp) 
{
    printf("Enter name: ");
    fgets(emp->name, 51, stdin);
    emp->name[strcspn(emp->name, "\n")] = '\0'; 

    printf("Enter age: ");
    scanf("%u", &emp->age);

    printf("Enter designation (0 for INTERN, 1 for JUNIOR, 2 for SENIOR, 3 for MANAGER): ");
    int desig;
    scanf("%d", &desig);
    emp->designation = (Designation)desig;

    
    while (getchar() != '\n');
}

void display(EMP emp) 
{
    printf("Name: %s\n", emp.name);
    printf("Age: %u\n", emp.age);
    printf("Designation: ");
    switch (emp.designation) 
	{
        case INTERN: printf("INTERN\n"); break;
        case JUNIOR: printf("JUNIOR\n"); break;
        case SENIOR: printf("SENIOR\n"); break;
        case MANAGER: printf("MANAGER\n"); break;
    }
}


int update(EMP *emp) 
{
    printf("Updating employee details...\n");
    read(emp);
    return 0;
}


EMP copy(EMP emp) 
{
    EMP new_emp;
    strcpy(new_emp.name, emp.name);
    new_emp.age = emp.age;
    new_emp.designation = emp.designation;
    return new_emp;
}

int main() 
{
    EMP emp1;
    read(&emp1);
    display(emp1);

    printf("\nUpdating employee record...\n");
    update(&emp1);
    display(emp1);

    printf("\nCopying employee record...\n");
    EMP emp2 = copy(emp1);
    display(emp2);

    return 0;
}

