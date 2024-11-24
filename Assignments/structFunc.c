/*
Desp: Structure and Functions assignments
Mandatory
1. Refer the code in “student.c”. Implement the following requirements.
a. Change the name member to char * datatype
b. Add 2 functions below to read and store name and percentage scores from user in student record.
//pass name address as parameter and read and update name field Return updated name
char *read_update_name(char *name);
//pass address of percentage as parameter, read and update percentage field of student record. Also return updated percentage
int read_update_percentage(int *percent);
c. Check for memory leaks
d. Specify atleast 5 dataset used for testing
Check for memory leaks.
Author: Yashodha_Beeraka_557
Date of creation or Date of modification: 5th-11-2024
Version: 0.1v
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct 
{
    char *name;
    int percentage;
} student;

char *read_update_name(char *name) 
{
    char buffer[100];
    printf("Enter name: ");
    scanf("%99s", buffer);
    name = (char *)malloc(strlen(buffer) + 1);
    if (name != NULL) 
	{
        strcpy(name, buffer);
    }
    return name;
}
int read_update_percentage(int *percent) 
{
    printf("Enter percentage: ");
    scanf("%d", percent);
    return *percent;
}

void free_student(student *s) 
{
    if (s->name != NULL) 
	{
        free(s->name);
        s->name = NULL;
    }
}

int main() 
{
    student s;
    s.name = NULL;

    s.name = read_update_name(s.name);
    s.percentage = read_update_percentage(&s.percentage);

    printf("Updated Student Record:\n");
    printf("Name: %s\n", s.name);
    printf("Percentage: %d\n", s.percentage);

    free_student(&s);

    return 0;
}

