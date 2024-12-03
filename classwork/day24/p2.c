#include<stdio.h>
#include<stdlib.h>
#include<sys/wait.h>
#include<unistd.h>

#define BUFF 1024

int main()
{
        int fd[2];
		int status;
        char line[BUFF];
        pid_t cpid;

        pipe(fd);

        cpid=fork();
        if (cpid == 0)
        {
                //child process
                close(fd[0]); // reading is closed
                //write(fd[1], "Hello world\n",12);
                _exit(EXIT_SUCCESS);
        }
        else
        {
                //parent process
				wait(&status);
				printf("\n Child with %d pid exited with status =%d",cpid,(status));
                close(fd[1]); //writing is closed
                read(fd[0], line, BUFF);
                printf("\n Line Read\n %s",line);
        }

        printf("\n End the program\n");
        return 0;
}

