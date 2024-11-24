#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <string.h>
#include <ctype.h>

// Function to count words
void *startroutine1(void *arg) {
    char *str = (char *)arg;
    int word_count = 0;
    char *token = strtok(str, " \t\n");

    while (token != NULL) {
        word_count++;
        token = strtok(NULL, " \t\n");
    }

    int *result = malloc(sizeof(int));  // Allocate memory for result
    *result = word_count;
    return result;
}

// Function to count characters
void *startroutine2(void *arg) {
    char *str = (char *)arg;
    int char_count = 0;

    while (*str) {
        if (!isspace(*str)) {  // Ignore spaces
            char_count++;
        }
        str++;
    }

    int *result = malloc(sizeof(int));  // Allocate memory for result
    *result = char_count;
    return result;
}

// Thread function that spawns two child threads
void *threadproc(void *arg) {
    char *text = (char *)arg;
    pthread_t thread1, thread2;
    void *word_count, *char_count;

    // Create threads to count words and characters
    pthread_create(&thread1, NULL, startroutine1, text);
    pthread_create(&thread2, NULL, startroutine2, text);

    // Wait for the threads to finish
    pthread_join(thread1, &word_count);
    pthread_join(thread2, &char_count);

    // Display the results
    printf("Word count: %d\n", *(int *)word_count);
    printf("Character count: %d\n", *(int *)char_count);

    // Free memory
    free(word_count);
    free(char_count);

    return NULL;
}

int main() {
    char input[256];

    // Read the input text
    printf("Enter a text: ");
    fgets(input, 256, stdin);

    // Create threadproc to count words and characters
    pthread_t main_thread;
    pthread_create(&main_thread, NULL, threadproc, input);
    pthread_join(main_thread, NULL);

    return 0;
}

