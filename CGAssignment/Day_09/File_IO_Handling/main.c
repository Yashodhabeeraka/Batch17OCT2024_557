/*
2. Accept 3 file names as command line arguments. The first 2 are input files in which first file has to be created as an integer file and the second file has to created as a string file. Merge the contents of these 2 files into the 3rd file. It should be one integer from the first file followed by one line from the second file.
a. Display the merged file.
b. Add appropriate error handling.
c. Modularize the program and do it as multi file program.
d. Remove all memory leaks
e. Read "Integer file" using fscanf (Formatted I/O)
f. Read "Strings file" using fgets (Line I/O)
g. Write "Output file" using fprintf (Formatted I/O)
Example:
f1.txt
10
20
f2.txt:
hello
hi
fout.txt:
10hello
20hi
Author: Yashodha_Beeraka_557
Date of creation or Date of modification: 6th-11-2024
Version: 0.1v
*/
#include <stdio.h>
#include <stdlib.h>
#include "file_operations.h"

#define MAX_LINE_LENGTH 80

int main(int argc, char *argv[]) {
    if (argc != 4) {
        printf("Usage: %s <integer_file> <string_file> <output_file>\n", argv[0]);
        return -1;
    }

    FILE *intFile = fopen(argv[1], "r");
    FILE *strFile = fopen(argv[2], "r");
    FILE *outFile = fopen(argv[3], "w");

    if (intFile == NULL || strFile == NULL || outFile == NULL) {
        printf("Error: Could not open one or more files.\n");
        if (intFile) fclose(intFile);
        if (strFile) fclose(strFile);
        if (outFile) fclose(outFile);
        return -1;
    }

    int num;
    char linebuf[MAX_LINE_LENGTH];

    while (readIntegerFile(intFile, &num) != EOF && readStringFile(strFile, linebuf) == 0) {
        if (writeToFile(outFile, num, linebuf) == -1) {
            printf("Error: Could not write to output file.\n");
            fclose(intFile);
            fclose(strFile);
            fclose(outFile);
            return -1;
        }
    }

    fclose(intFile);
    fclose(strFile);
    fclose(outFile);

    // Display the merged file
    outFile = fopen(argv[3], "r");
    if (outFile == NULL) {
        printf("Error: Could not open output file for reading.\n");
        return -1;
    }

    while (fgets(linebuf, MAX_LINE_LENGTH, outFile) != NULL) {
        printf("%s", linebuf);
    }

    fclose(outFile);
    return 0;
}

