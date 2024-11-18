#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define BUFF 1024
#define OR ||

int main (int argc, char *argv[])
{
        FILE *fp;
	//	int i;
		char fileName[BUFF];
		char lines[BUFF];
	//	char *tokens;

		if ((argc<2)OR(argc>2)
			fprintf(stderr, "\nconfigFile is missing");
			fprintf(stderr, "\n./app configFile.csv");

        printf("\n no.of agruments = %d",argc);

        for (i=0; i<argc; i++)
                printf("\n argv[%d] = %s",i,argv[i]);

        printf("\n\n");
        return 0;
}

