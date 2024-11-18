/*
#include <stdio.h>
#include <string.h>

typedef struct {
    int id;
    char name[50];
    char gender;
    int phone;
    int salary;
}EMP;
int main()
{
	printf("\n\n");

	return 0;
}

void empFile(const char *filename, Employee employees[], int *count) 
{
    FILE *file = fopen("filename.txt", "w");
    if (file == NULL)
	{
        perror("\nfopen: ");
        return 1;
    }
}
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LINE_LENGTH 100

typedef struct {
    int id;
    char name[50];
    char gender;
    int phone;
    int salary;
} Employee;

void parseLine(char *line, Employee *emp) {
    char *token = strtok(line, "|");
    emp->id = atoi(token);

    token = strtok(NULL, "|");
    strcpy(emp->name, token);

    token = strtok(NULL, "|");
    emp->gender = token[0];

    token = strtok(NULL, "|");
    emp->phone = atoi(token);

    token = strtok(NULL, "|");
    emp->salary = atoi(token);
}

void readAndStoreEmployees(const char *inputFile, const char *outputFile) {
    FILE *inFile = fopen(inputFile, "r");
    FILE *outFile = fopen(outputFile, "a");
    if (inFile == NULL || outFile == NULL) {
        perror("Error opening file");
        return;
    }

    char line[MAX_LINE_LENGTH];
    Employee emp;

    while (fgets(line, sizeof(line), inFile)) {
        parseLine(line, &emp);
        fprintf(outFile, "ID: %d, Name: %s, Gender: %c, Phone: %d, Salary: %d\n",
                emp.id, emp.name, emp.gender, emp.phone, emp.salary);
    }

    fclose(inFile);
    fclose(outFile);
}

int main() {
    const char *inputFile = "employees.txt";
    const char *outputFile = "new_employees.txt";

    readAndStoreEmployees(inputFile, outputFile);

    printf("Employee records have been read and appended to %s\n", outputFile);
    return 0;
}

