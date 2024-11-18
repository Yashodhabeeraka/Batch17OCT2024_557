#include<stdio.h>

int main()
{
	char empname[20];

	fgets(empname,14, stdin);
	puts(empname);
/*
	if (strcmp (gets(buff)=="Quit")==0)
	{
		Quit code
	}
	else
	{
		other than quit code
	}
*/

	return 0;
}
