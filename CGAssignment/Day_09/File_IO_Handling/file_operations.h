#ifndef FILE_OPERATIONS_H
#define FILE_OPERATIONS_H

int readIntegerFile(FILE *fptr, int *num);
int readStringFile(FILE *fptr, char *linebuf);
int writeToFile(FILE *fptr, int num, char *line);

#endif

