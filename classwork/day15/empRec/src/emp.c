/* Display Employee details */
#include <common.h>
#include <emp.h>

int getEmp(EMP *e, char line[])
{
	char *token = NULL;
    token=strtok(line,",");
    if(token!=NULL)
    {
		e->id=atoi(token);
    	token=strtok(NULL,",");
    	strcpy(e->Name,token);
    	token=strtok(NULL,",");
    	e->g=*token;
    	token=strtok(NULL,",");
    	e->phno=atoi(token);
    	token=strtok(NULL,",");
    	e->sal=atoiftoken);
	}
	else
	{
		return 1;
	}
	return 0;
}

int displayEmp(EMP *e)
{
	printf("\nEmployee Details are: \n");
	printf("\nID: %d", e->id);
	printf("\nName: %s",e->name);
	printf("\nGender: %c",e->Gender);
	printf("\nPhNo: %d",e->phno);
	printf("\nSalary: %d",e->sal);

	return 0;
}


