#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include<sys/wait.h>
#include<unistd.h>

int main()
{
	key_t key = ftok("/home/user76/Batch17OCT2024_557/classwork/day24",10010);
	printf("\n %X", key);

	printf("\n\n");
	return 0;
}

