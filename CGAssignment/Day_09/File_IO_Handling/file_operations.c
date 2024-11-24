#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "file_operations.h"

#define MAX_LINE_LENGTH 80

int readIntegerFile(FILE *fptr, int *num) {
    if (fptr == NULL || num == NULL) {
        return -1;
    }
    return fscanf(fptr, "%d", num);
}

int readStringFile(FILE *fptr, char *linebuf) {
    if (fptr == NULL || linebuf == NULL) {
        return -1;
    }
    if (fgets(linebuf, MAX_LINE_LENGTH, fptr) != NULL) {
        size_t len = strlen(linebuf);
        if (len > 0 && linebuf[len - 1] == '\n') {
            linebuf[len - 1] = '\0';
        }
        return 0;
    }
    return -1;
}

int writeToFile(FILE *fptr, int num, char *line) {
    if (fptr == NULL || line == NULL) {
        return -1;
    }
    fprintf(fptr, "%d%s\n", num, line);
    return 0;
}

