#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <string.h>

#define MAX_LINE_LENGTH 1024

// Structure to hold a line and its word count
typedef struct {
    char line[MAX_LINE_LENGTH];
    int word_count;
} LineData;

// Thread function to count words in a line
void *count_words(void *arg) {
    LineData *line_data = (LineData *)arg;
    char *line = line_data->line;
    int count = 0;

    // Tokenize the line to count words
    char *token = strtok(line, " \t");
    while (token != NULL) {
        count++;
        token = strtok(NULL, " \t");
    }

    // Save the word count in the structure
    line_data->word_count = count;
    return NULL;
}

// Function to create threads and process the file
pthread_t* create_threads(int line_count) {
    pthread_t *threads = (pthread_t *)malloc(line_count * sizeof(pthread_t));
    return threads;
}

// Function to process the file line by line
void process_file(char *filename, pthread_t *threads, LineData *lines, int line_count) {
    FILE *file = fopen(filename, "r");
    if (!file) {
        printf("Error opening file %s\n", filename);
        return;
    }

    // Read lines and create threads
    for (int i = 0; i < line_count; i++) {
        if (fgets(lines[i].line, MAX_LINE_LENGTH, file)) {
            // Remove trailing newline character
            lines[i].line[strcspn(lines[i].line, "\n")] = '\0';
            pthread_create(&threads[i], NULL, count_words, &lines[i]);
        }
    }

    // Wait for threads to finish
    for (int i = 0; i < line_count; i++) {
        pthread_join(threads[i], NULL);
    }

    // Display the word counts
    for (int i = 0; i < line_count; i++) {
        printf("Line: %s\n", lines[i].line);
        printf("Word Count: %d\n", lines[i].word_count);
    }

    fclose(file);
}

int main(int argc, char *argv[]) {
    if (argc != 3) {
        printf("Usage: %s <filename> <line_count>\n", argv[0]);
        return 1;
    }

    char *filename = argv[1];
    int line_count = atoi(argv[2]);

    // Allocate memory for threads and line data
    pthread_t *threads = create_threads(line_count);
    LineData *lines = (LineData *)malloc(line_count * sizeof(LineData));

    // Process the file with the threads
    process_file(filename, threads, lines, line_count);

    // Free allocated memory
    free(threads);
    free(lines);

    return 0;
}

