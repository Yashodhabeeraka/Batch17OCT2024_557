/* 
Unformatted i/o 

getc, putc => read/write single char ==> stream 
getchar, putchar ==> read/ write single character ==> std i/o

gets, puts ==> read/ write for a string => stream

getch() ==> DOS platform ==> not echo read char to the screen
*/
#include<stdio.h>
int main()
{
	char ch;
	printf("\n Enter character: ");
	/*
	ch = getchar();
	printf("\n read char: ");
	putchar(ch);

	putchar('A');
	putchar(65);
	*/
	ch = fgetc(stdin);
	
	printf("\n Read character: ");
	putc(ch, stdout);

	printf("\n\n");
	return 0;
}
