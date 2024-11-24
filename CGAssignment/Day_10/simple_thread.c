#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>

void *read_username(void *arg) {
    char *username = (char *)malloc(50 * sizeof(char)); // Allocate memory for username
    if (username == NULL) {
        printf("Memory allocation failed!\n");
        return NULL;
    }

    printf("Enter username: ");
    fgets(username, 50, stdin);
    return username; // Return pointer to dynamically allocated memory
}

int main() {
    pthread_t tid;
    void *result;

    // Create thread to read username
    pthread_create(&tid, NULL, read_username, NULL);

    // Wait for thread to finish
    pthread_join(tid, &result);

    // Display the username returned by the thread
    printf("Username entered: %s", (char *)result);

    // Free memory allocated for username
    free(result);

    // Display thread IDs
    printf("Parent thread ID: %lu\n", pthread_self());
    printf("Child thread ID: %lu\n", tid);

    return 0;
}

