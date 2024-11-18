/* 
FILE ==> DS
fd => file pointer to FILE DS
mode: r,w,a,r+,w+,a+

fclose(fd)=> close the opened file

read and write operation => fprintf,fscanf ==> Formated writing and reading resp.

fputs, fgets ==> unfomatted i/o operation

fwrite/fread ==>reading or writing binary objects.

*/
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
	FILE *fd=NULL;
	char Ch='b';
	char name[]="Yashodha";
	char rname[100];
	
	int i;

	fd = fopen("Test1.txt","r");

	//fd = fopen("Test2.txt","w");
	
	//fd = fopen("Test1.txt","r"); // opening the existing file
	
	//fd = fopen("Test2.txt","r");//opening the not existing file
	
	//fd = fopen("Test1.txt","a");// append
	
	//fd = fopen("Test1.txt","r"); // opening the existing file
	if(fd == NULL)
	{
		perror("fopen: ");
		printf("\n%p\n\n",fd);
		exit(1);
	}
	printf("\nOpened the file successfully %p \n\n", fd);
/*
	while((Ch=fgetc(fd))!=EOF)
	{
		putchar(Ch);
	}
*/
/*
	while((Ch=fgetc(stdin)))
	{
		putchar(ch);
	}
*/
/*
	fputc(Ch,fd);
	fputc(Ch,fd);
	fputc(Ch,fd);
	fputc(Ch,fd);
	fputc(Ch,fd);
*/
/*
	for(i=0;i<strlen(name);i++)
		fputc(name[i],fd)
*/
	i=0;
	while((Ch=fgetc(fd))!=EOF)
	{
		rname[i]=Ch;
		i++;
	}
	rname[i]='\0';
	printf("\nrname=%s\n",rname);
	printf("\n\n");
	fclose(fd);
	return 0;
}
