/*
i/p:
3
it is a simple problem
Raspberry is sweet
test
o/p:
9
11
-2
*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int find(char *str1, char *str2)
{
	char *index=strstr(str1,str2);//first occ of sbstring
	if(index)
	{
		return -1;
	}
}

int main()
{
	int n;
	scanf("%d",&n);
	int i;
	for(i=0; i<n; i++)
	{
		
		
