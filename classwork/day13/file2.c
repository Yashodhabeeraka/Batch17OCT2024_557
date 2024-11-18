/* copy file*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	FILE *rfptr=NULL, *wfptr=NULL;
	
	char ch='b';
	rfptr=fopen("Test1.txt","r");
	if(rfptr == NULL)
	{
		perror("fopen: ");
		return 1;
	}

	wfptr=fopen("t1.txt","w");
	if(wfptr==NULL)
	{
		perror("fopen:");
		return 1;
	}

	while((ch=fgetc(rfptr))!=EOF)
	{
		fputc(ch,wfptr);
	}
	fclose(rfptr);

	printf("\n\n");
	return 0;
}

