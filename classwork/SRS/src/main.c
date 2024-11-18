/* HEADER FILES */
#include <common.h>
#include <student.h>

/* main FUNCTION */
int main(int argc,int argv[])
{
	int count=0;
	FILE *fd=NULL;
	fd=fopen(argv[1],"r");
	if(fd!=NULL)
	{
		while(fgets(line,BUFF,fd)!=NULL)
		{
			count++;
		}
	}
	else
	{
		perror("fopen: ");
	    exit(1);
	}
	STD *e=NULL;
	e=(STD *)malloc(count*sizeof(STD));
	
	return 0;
}

