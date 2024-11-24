#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <string.h>

#define MAX_WORDS 5

typedef struct {
    char *word;
    int index;
} thread_data;

void *append_ed(void *arg) {
    thread_data *data = (thread_data *)arg;
    char *word = data->word;
    int length = strlen(word);
    
    // Allocate memory for new string
    char *new_word = malloc(length + 4);  // "_ed" added
    if (new_word == NULL) {
        printf("Memory allocation failed\n");
        return NULL;
    }

    strcpy(new_word, word);
    strcat(new_word, "_ed");

    printf("Thread %d processed word: %s\n", data->index, new_word);

    free(new_word);
    return NULL;
}

int main(int argc, char *argv[]) {
    if (argc < 2) {
        printf("Please provide words as command line arguments.\n");
        return 1;
    }

    pthread_t threads[MAX_WORDS];
    thread_data data[MAX_WORDS];

    for (int i = 1; i < argc && i < MAX_WORDS + 1; i++) {
        data[i-1].word = argv[i];
        data[i-1].index = i;

        pthread_create(&threads[i-1], NULL, append_ed, &data[i-1]);
    }

    // Wait for threads to finish
    for (int i = 0; i < argc - 1 && i < MAX_WORDS; i++) {
        pthread_join(threads[i], NULL);
    }

    return 0;
}

