#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LINE_LENGTH 80
#define FAILURE -1

int writeToFile(FILE *fptr, char *line) {
    if (fptr == NULL || line == NULL) {
        return FAILURE;
    }
    fprintf(fptr, "%s\n", line);
    return 0;
}

int readFromFile(FILE *fptr, char *linebuf) {
    if (fptr == NULL || linebuf == NULL) {
        return FAILURE;
    }
    if (fgets(linebuf, MAX_LINE_LENGTH, fptr) != NULL) {
        // Remove newline character if present
        size_t len = strlen(linebuf);
        if (len > 0 && linebuf[len - 1] == '\n') {
            linebuf[len - 1] = '\0';
        }
        return 0;
    }
    return FAILURE;
}

int main(int argc, char *argv[]) {
    if (argc != 3) {
        printf("Usage: %s <line1> <line2>\n", argv[0]);
        return FAILURE;
    }

    char *line1 = argv[1];
    char *line2 = argv[2];

    if (strlen(line1) > MAX_LINE_LENGTH || strlen(line2) > MAX_LINE_LENGTH) {
        printf("Error: Each line must be at most %d characters long.\n", MAX_LINE_LENGTH);
        return FAILURE;
    }

    FILE *fout = fopen("fout.txt", "w");
    if (fout == NULL) {
        printf("Error: Could not open fout.txt for writing.\n");
        return FAILURE;
    }

    if (writeToFile(fout, line1) == FAILURE || writeToFile(fout, line2) == FAILURE) {
        printf("Error: Could not write to fout.txt.\n");
        fclose(fout);
        return FAILURE;
    }
    fclose(fout);

    FILE *fin = fopen("fout.txt", "r");
    if (fin == NULL) {
        printf("Error: Could not open fout.txt for reading.\n");
        return FAILURE;
    }

    char linebuf[MAX_LINE_LENGTH];
    while (readFromFile(fin, linebuf) == 0) {
        printf("%s\n", linebuf);
    }
    fclose(fin);

    return 0;
}

