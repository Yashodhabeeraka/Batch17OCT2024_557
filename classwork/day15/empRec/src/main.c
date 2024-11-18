#include <common.h>
#include <emp.h>
int main()
{
	EMP *e=NULL;

	e=(EMP *)malloc(5*sizeof(EMP));

	file(argv[1], e);
	displayEMP(e);

	return 0;
}

