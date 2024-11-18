/* */
#include<stdio.h>
#include<string.h>

int main()
{
	int c1,c2,c3;
	char res[40]={'\0',};
	char temp[10]={'\0',};
	c1=2;
	c2=1;
	c3=0;

	//2*1=2 -- c1*c2=C3
	while(c2<11)
	{
		c3=c2*c1;
		sprintf(temp," %d * %d = %d ",c1,c2,c3);
		strcpy(res,temp);
		
		printf("\n%s\n",res);
		c2++;
	}
		return 0;
}

