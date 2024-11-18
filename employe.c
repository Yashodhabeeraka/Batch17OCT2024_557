#include<stdio.h>
#include<string.h>

int main()
{
	char str1[20];
	char ch;

	char buff[1024] = {'\0',};

	puts("\nslno | ID | Name |\n");
	fgets(str1, 15, stdin);
	strcat(buff,"101 | ");
	strcat(buff, str1);
	strcat(buff, " | ");
	strcat(buff,"bhima");
	strcat(buff,"shankar");
	strcat(buff," | ");
	puts(buff);
	
	//return 0;
}

