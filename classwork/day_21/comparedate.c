/*
First date > Second date -- print "E"
First date = Second date -- print "S"
First date < Second date -- print "L"

sample i/p:
3
08/01/2008 07/01/2009
08/01/2008 08/01/2008
07/03/2009 07/02/2009
sample o/p:
E
S
L
sample i/p:
1
07/28/2012 07/29/2012
E
*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define BUFF 1024

int main()
{
	int n=0;
	char date1[BUFF],date2[BUFF];
	int day1,day2;
	int month1, month2;
	int year1,year2;
	char *token=NULL;
	scanf("%d",&n);
	while(n--)
	{
		scanf("%s%s",date1,date2);
		//tokenize and get the date,mm,and year seperated
		//for each date
		token=strtok(date1,"/");
		month1=atoi(token);
		token=strtok(NULL,"/");
		day1=atoi(token);
		token=strtok(NULL,"/");
		year1=atoi(token);

		token=strtok(date1,"/");
		month2=atoi(token);
		token=strtok(NULL,"/");
		day2=atoi(token);
		token=strtok(NULL,"/");
		year2=atoi(token);
		if (year1 > year2 || (year1 == year2 && month1 > month2) || (year1 == year2 && month1 == month2 && day1 > day2))
        {
            printf("E\n");
        }
        else if (year1 == year2 && month1 == month2 && day1 == day2)
        {
            printf("S\n");
        }
        else
        {
            printf("L\n");
        }
    }
    return 0;
}
