/*
Desp: 1. Refer the question 1 solved in “Structure and function”. Extend the above program to read a number of records from the user as a single command line argument (each record is delimited by a semicolon and record fields are delimited by comma) and store in an array of structures.
Sample input and output are given below.
Input: “user1,90;user21,100, userABC,56,userX,40”;
Output:
No. of records: 4
Record 1:
Name:user1, Percentage:90
Record 2:
Name:user21, Percentage:100
Record 3:
Name:userABC, Percentage:56
Record 4:
Name:userX, Percentage:40
Implement all required functions and call them to get the desired output.
Check for memory leak.
Author: Yashodha_Beeraka_557
Date of creation or Date of modification: 5th-11-2024
Version: 0.1v
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Define the structure to hold each record
typedef struct {
    char name[50];
    int percentage;
} Record;

// Function to parse the input string and store records in an array
int parseRecords(char *input, Record records[]) {
    int count = 0;
    char *token = strtok(input, ";");
    while (token != NULL) {
        sscanf(token, "%[^,],%d", records[count].name, &records[count].percentage);
        count++;
        token = strtok(NULL, ";");
    }
    return count;
}

// Function to print the records
void printRecords(Record records[], int count) {
    printf("No. of records: %d\n", count);
    for (int i = 0; i < count; i++) {
        printf("Record %d:\n", i + 1);
        printf("Name: %s, Percentage: %d\n", records[i].name, records[i].percentage);
    }
}

int main(int argc, char *argv[]) {
    if (argc != 2) {
        printf("Usage: %s \"user1,90;user21,100;userABC,56;userX,40\"\n", argv[0]);
        return 1;
    }

    Record records[100]; // Assuming a maximum of 100 records
    char input[1000];
    strcpy(input, argv[1]);

    int count = parseRecords(input, records);
    printRecords(records, count);

    return 0;
}

