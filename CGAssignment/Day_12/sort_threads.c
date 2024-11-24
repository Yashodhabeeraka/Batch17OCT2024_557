#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <string.h>

#define MAX_LINE_LENGTH 1024

// Structure to hold line and sorted line
typedef struct {
    char line[MAX_LINE_LENGTH];
    char sorted_line[MAX_LINE_LENGTH];
} LineData;

// Thread function to sort words in a line
void *sort_words(void *arg) {
    LineData *line_data = (LineData *)arg;
    char *line = line_data->line;
    char *words[100];
    int word_count = 0;

    // Tokenize the line into words
    char *token = strtok(line, " \t");
    while (token != NULL) {
        words[word_count++] = token;
        token = strtok(NULL, " \t");
    }

    // Sort the words in ascending order
    for (int i = 0; i < word_count - 1; i++) {
        for (int j = i + 1; j < word_count; j++) {
            if (strcmp(words[i], words[j]) > 0) {
                char *temp = words[i];
                words[i] = words[j];
                words[j] = temp;
            }
        }
    }

    // Build the sorted line
    strcpy(line_data->sorted_line, "");
    for (int i = 0; i < word_count; i++) {
        strcat(line_data->sorted_line, words[i]);
        if (i < word_count - 1) {
            strcat(line_data->sorted_line, " ");
        }
    }

    return NULL;
}

int main(int argc, char *argv[]) {
    if (argc != 4) {
        printf("Usage: %s <line1> <line2> <line3>\n", argv[0]);
        return 1;
    }

    pthread_t threads[3];
    LineData line_data[3];

    // Prepare the lines and create threads
    for (int i = 0; i < 3; i++) {
        strcpy(line_data[i].line, argv[i + 1]);
        pthread_create(&threads[i], NULL, sort_words, &line_data[i]);
    }

    // Wait for all threads to finish
    for (int i = 0; i < 3; i++) {
        pthread_join(threads[i], NULL);
    }

    // Display the sorted lines
    for (int i = 0; i < 3; i++) {
        printf("Sorted Line %d: %s\n", i + 1, line_data[i].sorted_line);
    }

    return 0;
}

