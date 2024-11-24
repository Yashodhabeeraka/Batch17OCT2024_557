#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <pthread.h>

int is_palindrome = 0;
int not_palindrome = 0;
pthread_mutex_t mutex;

int check_palindrome(char *str) {
    int length = strlen(str);
    for (int i = 0; i < length / 2; i++) {
        if (str[i] != str[length - i - 1]) {
            return 0;  // Not a palindrome
        }
    }
    return 1;  // Is a palindrome
}

void* check_palindrome_thread(void* arg) {
    char *input_str = (char*)arg;
    int is_pal = check_palindrome(input_str);
    pthread_mutex_lock(&mutex);
    if (is_pal) {
        is_palindrome++;
        printf("\"%s\" is a palindrome\n", input_str);
    } else {
        not_palindrome++;
        printf("\"%s\" is not a palindrome\n", input_str);
    }
    pthread_mutex_unlock(&mutex);
    return (void*)input_str;  // Returning the string to the main thread
}

int main(int argc, char *argv[]) {
    if (argc < 2) {
        printf("Usage: %s <string1> <string2> ... <stringN>\n", argv[0]);
        return 1;
    }

    pthread_t threads[argc - 1];
    pthread_mutex_init(&mutex, NULL);

    // Create threads for each command-line argument
    for (int i = 1; i < argc; i++) {
        pthread_create(&threads[i - 1], NULL, check_palindrome_thread, (void*)argv[i]);
    }

    // Wait for threads to finish and collect results
    for (int i = 0; i < argc - 1; i++) {
        void* result;
        pthread_join(threads[i], &result);
        printf("Returned from thread: %s\n", (char*)result);
    }

    // Print the final counts
    printf("Total palindromes: %d\n", is_palindrome);
    printf("Total non-palindromes: %d\n", not_palindrome);

    pthread_mutex_destroy(&mutex);
    return 0;
}

