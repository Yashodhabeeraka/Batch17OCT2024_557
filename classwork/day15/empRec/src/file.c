/* 
File function defination
*/
#include<common.h>
#include<emp.h>

int file(char *argv[], EMP *e)
{
	FILE *fp=NULL;
	char line[BUFF];
	fp=fopen(argv[1],"r");
	if(fp!=NULL)
	{
		while(fgets(line,BUFF,fp)!=NULL)
		{
			line[strlen(line)-1]='\0';
			int result=getEmp(line,e);
			if(result==1)
			{
				printf("End of file");
			}
		}
	}
	else
	{
		perror("fopen: ");
		return 1;
	}
	fclose(fp);
	return 0;
}
