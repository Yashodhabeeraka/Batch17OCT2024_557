/* Demo on the command line argument */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (int argc, char *argv[])
{
	int i;
	
	if (argc<3)
	{
		fprintf(stderr, "\n dest/source is missing");
		fprintf(stderr, "\n./app src dest\n\n");

		return 1;
	}

	printf("\n no.of agruments = %d",argc);

	for (i=0; i<argc; i++)
		printf("\n argv[%d] = %s",i,argv[i]);

	printf("\n\n");
	return 0;
}

