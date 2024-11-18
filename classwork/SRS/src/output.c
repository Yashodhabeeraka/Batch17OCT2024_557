/* HEADER FILES */ 
#include <common.h>
#include <student.h>
/* FUNCTION DEFINATION */
void *outputDoc(void *argv,STD *s,int n)
{
    int i;
    char dept[SIZE];
    strcpy(dept,s->department);
    char *ofile=NULL;
    ofile=(char *)argv;
    FILE *fd=NULL;
    fd=fopen(ofile,"a");
    if(fd!=NULL)
    {
        fprintf(fd,"\nDepartment: ");
        fprintf(fd,"%s",dep);
        for(i=0;i<n;i++)
        {
            if(strcmp(dept,e->department)==0)
            {
                fprintf(fd,"\nID: ");
                fputs(e->id,fd);
                fprintf(fd,"\nName: ");
                fputs(e->name,fd);
                fprintf(fd,"\nGrade: ");
                fprintf(fd,"%c",assign_grade(e->tpercent));
                fprintf(fd,"\nAttendence percentage: ");
                fprintf(fd,"%.2f",avg_attendence(e));
                fprintf(fd,"\nRank: ");
                fprintf(fd,"%d",assign_ranks(e->tpercent));
            }
            else
            {
                printf("\n\n");
                strcpy(dep,e->department);
                fprintf(fd,"\nDepartment: ");
                fprintf(fd,"%s",dept);
            }
        }
    else
    {
        perror("fopen: ");
        return 1;
    }
    fclose(fd);
    return 0;
}

