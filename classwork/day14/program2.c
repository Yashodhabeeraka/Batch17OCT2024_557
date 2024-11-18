#include<stdio.h>
#include<string.h>
#include<unistd.h>
#include<stdlib.h>
#include<pthread.h>

typedef unsigned long long ULL;

void *findNum(ULL, ULL, ULL);

int main()
{
	ULL s=0;
	ULL e=1900000;
	ULL k=1899999;

	findNum(s,e,k);

	return 0;
}

void *findNum(ULL s,ULL e, ULL key)
{
	ULL i;
	for (i=s; i<e; i++)
	{
		if (i==key)
		{
			printf("\n Found @pos = %llu\n",i);
			break;
		}
	}
}
