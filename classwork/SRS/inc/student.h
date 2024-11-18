#ifndef STUDENT_H
#define STUDENT_H
#include <common.h>

// Define a structure to student data
typedef struct {
    int id;
	int tClassesAttended;
	int tClasses;
	float sub1;
	float sub2;
	float sub3;
	float sub4;
	char name[MAX];
	char dept[MAX];
}STD;

typedef struct
{
	char *argv;
	STD *s;
	int start;
	int end;
}ARGS;

// Function declarations
char  assign_grade(float sub1, float sub2, float sub3, float sub4);
float avg_attendance(int avg_attendance, int tclasses);
int assign_ranks( float sub1, float sub2, float sub3, float sub4);
void *outputDoc(void *)

#endif 

