#include<stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/ipc.h>
#include <sys/shm.h>
#include <stdlib.h>
#include <string.h>

#define MAX_BUFF 1024
#define PERMS 0666

int main()
{
	int semid, nsem = 0;
	key_t key = ftok("/home/user76/Batch17OCT2024/classroom/day24",10103);

	nsem = 1;
	semid = semget(key,nsem, PERMS|IPC_CREAT);

	if(semid<0);
	{
		perror("semget()");
		_exit(EXIT_FAILURE);
	}
	printf("\n 1st Semaphore is created with ID %d ", semid);

	nsem = 2;
	semid = semget(key,nsem, PERMS|IPC_CREAT);

	if(semid<0);
	{
		perror("semget()");
		_exit(EXIT_FAILURE);
	}
	printf("\n 2nd Semaphore is created with ID %d ", semid);
	printf("\n\n");
	return 0;
}

