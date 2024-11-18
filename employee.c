/* Description: Assignment 01.
Slno| ID| Name| Gender| Address| Phonenumber| Salary| Desgination
*/

#include<stdio.h>

int main()
{
	int id;
	char name[20];
	char gender;
	int phno;
	char address[20];
	float salary;
	char desg[20];

	printf("\nEnter the Employee details\n");

	printf("\nID: ");
	scanf("%d",&id);

	printf("\nName: ");
	scanf("%s",&name);
	
	printf("\nGender: ");
	scanf("");
	scanf("%c",&gender);
	
	printf("\nPhone Number: ");
	scanf("%d",&phno);
	
	printf("\nAddress: ");
	scanf("%s",&address);
	
	printf("\nSalary: ");
	scanf("%f",&salary);
	
	printf("\nDesgination: ");
	scanf("%s",&desg);

	printf("\nSlno | ID | Name | Gender | Address | Phonenumber | Salary | Desgination");
	printf("\n%03d | %d | %s | %c | %s | %d | %f | %s\n" 1,id,name,gender,address,phno,salary,desg);
	printf("\n\n");

	return 0;
}

	
