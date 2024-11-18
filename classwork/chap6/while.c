/*
while loop
while(condition1)
{
	statements
}
*/
#include <stdio.h>
#include <stdlib.h>

#define SUCCESS 0
#define FAILURE -1
#define True 1
#define False 0

int displayMenu();

int main()
{
	int ch;
	int flag =0;
	 
	int a,b,sum,sub,mul,div;
	
	printf("\n Enter the values: ");
	scanf("%d,%d", &a,&b);
	while(True)
	{
	flag=0;
		//ch displayMenu();
        //displayMenu();

		switch(displayMenu())
		{
			case 1:
				sum=a+b;
				printf("\n Addition Function executed: %d", sum);
				break;
			case 2:
				sub=a-b;
				printf("\n Subtraction Function executed: %d", sub);
				break;
			case 3:
				mul=a*b;
				printf("\n Multiplication Function executed: %d", mul);
				break;
			case 4:	
				div=a/b;
				printf("\n Division Function executed: %d", div);
				break;
			case 5:	

				printf("\n Exit from application \n\n");
				//exit(SUCCESS);
				flag = 1;
				break;
			default:
				printf("\n Enter the correct choice \n");
		
		}// end of switch
		
		if (flag==1)
			break;
	
	} // end of while loop

	printf("\n Program Ended\n\n");
	return (SUCCESS);
}
int displayMenu()
{
	int choice;
	
	printf("\n Press,");
	printf("\n1 Addition");
	printf("\n2 Subtraction");
	printf("\n3 Multiplacation");
	printf("\n4 Division");
	printf("\n5 Exit");
	scanf("%d", &choice);
	return choice;
}

