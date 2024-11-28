#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>

int main() {
    pid_t pid;

    pid = fork(); // Create a new process

    if (pid < 0) {
        // Fork failed
        fprintf(stderr, "Fork failed\n");
        return 1;
    } else if (pid == 0) {
        // Child process
        printf("Child process: pid = %d\n", getpid());

        if (getpid() % 2 == 0) {
            printf("Child process: Even PID\n");
        } else {
            printf("Child process: Odd PID\n");
        }
    } else {
        // Parent process
        printf("Parent process: pid = %d\n", getpid());

        if (getpid() % 2 == 0) {
            printf("Parent process: Even PID\n");
        } else {
            printf("Parent process: Odd PID\n");
        }
    }

    return 0;
}

