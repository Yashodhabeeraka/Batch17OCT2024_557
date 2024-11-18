/* user defined data type (UDT)
structures
unions
enums

struct, union, enum

struct tagName
{
	members of structure
};
struct Square
{
    int len;
    int breadth;
};
struct chair
{
    int no.legs;
    char make[20];
    char material[20];
    char color[20];
    float price;
    char DOM[20];
    char placeManu[20];
};
int a1,a2;
struct Square s1,s2,s3,s[10];
another way 
struct Square
{
    int len;
    int breadth;
}s4,s5,s6,s[10]; fixed type


typedef struct Square SQR;
capital letter defines SQR userdefine quality

SQR s7,s8,s9;

another way to define a typedef;

typedef struct Square
{
    int len;
    int breadth;
} SQR1;

elements properties and numbers
1) . ==> static variable  ==>  nameVar.memberName
2) -> ==> pointer variable ==> nameVar->memberName

SQR1 *ptr;
ptr->len; 
or
s1.len

void function(struct Square s)
{
    
}*/
/* Demo on the Structures
In a structure we cannot use functions*/
#include<stdio.h>
#include<string.h>

struct Employee 
{
    char empName[20];
    char empGender;
    char empAddress[20];
    int empID;
    float empSal;
};
typedef struct Employee EMP;
int main()
{
    EMP e1;
    e1.empID=101;
    e1.empSal=10000.1;
    strcpy(e1.empName,"Yashodha");
    strcpy(e1.empAddress,"Telangana");
    e1.empGender='F';
    
    printf("\n Employee Details are: \n");
    printf("\n ID: %d",e1.empID);
    printf("\n Name: %s",e1.empName);
    printf("\n Gender: %c",e1.empGender);
    printf("\n Address: %s",e1.empAddress);
    printf("\n Salary: %f",e1.empSal);
    
    printf("\n\n");
    return 0;
}
