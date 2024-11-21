/* Dynamic memory allocation*/
#include<stdio.h>
#include<string.h>

typedef struct Employee
{
        int id;
        int sal;
        int phno;
        char name[20];
        char gender;

}EMP;
int printEMP(EMP *);
int getEMP(EMP *);

int main()
{
        EMP e1;//allocated by the complier

        EMP *e = NULL;
        //EMP *e if we delcare like this it become wild pointer

        e=&e1;//pointing to base address

        scanf("%d%d%d",&e1.id,&e1.sal,&e1.phno);
        scanf("%s",e1.name);
        getchar();
        scanf("%c",&e1.gender);

        printf("\nID: %d",e->id);
        printf("\nName: %s",e->name);
        printf("\nGender: %c",e->gender);
        printf("\nPhoneno:%d",e->phno);
        printf("\nSalary: %d",e->sal);

        printf("\n\n");
        return 0;
}
