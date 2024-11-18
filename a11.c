/* WAP to which should have the following functionalities
1. scan employee recs 
2. display
3. search for a particulary employee based on
  a. id
  b. lName
4. search for employess whos salary fall in
   between 6-10K and display only those records

5. update employee rec to change his/her lName*/
#include <stdio.h>
#include <string.h>

struct Employee {
    char eSalu[5];
    char eName[20];
    char eGender;
    char eAddress[20];
    int eId;
    float eSal;
};

typedef struct Employee EMP;

void getDetails(EMP [], int);
void dispDetails(EMP [], int);
void searchID(EMP [], int, int);
void searchLName(EMP [], int, char []);
void searchSalaryRange(EMP [], int, float, float);
void updateLName(EMP [], int, int, char []);

int main() {
    EMP e[2];
    int id;
    char lName[20];
    float minSal = 6000, maxSal = 10000;
    char newLName[20];

    getDetails(e, 2);
    dispDetails(e, 2);

    printf("\nEnter ID: ");
    scanf("%d", &id);
    searchID(e, 2, id);

    printf("\nEnter Last Name: ");
    scanf("%s", lName);
    searchLName(e, 2, lName);

    printf("\nEmployees with salary between %.2f and %.2f:\n", minSal, maxSal);
    searchSalaryRange(e, 2, minSal, maxSal);

    printf("\nEnter ID to update  lName: ");
    scanf("%d", &id);
    printf("Enter new Last Name: ");
    scanf("%s", newLName);
    updateLName(e, 2, id, newLName);

    printf("\nUpdated Employee Details:\n");
    dispDetails(e, 2);

    return 0;
}

void getDetails(EMP e[], int n) {
    int i;
    printf("\nEnter Employee Details\n");
    for (i = 0; i < n; i++) {
        printf("\nSalutation: ");
        scanf("%s", e[i].eSalu);
        printf("\nName: ");
        scanf("%s", e[i].eName);
        printf("\nID: ");
        scanf("%d", &e[i].eId);
        printf("\nGender: ");
        scanf(" %c", &e[i].eGender);
        printf("\nAddress: ");
        scanf("%s", e[i].eAddress);
        printf("\nSalary: ");
        scanf("%f", &e[i].eSal);
    }
}

void dispDetails(EMP e[], int n) {
    int i;
    printf("\nEmployee Details are\n");
    for (i = 0; i < n; i++) {
        printf("\n=========================\n");
        printf("\nSalutation: %s", e[i].eSalu);
        printf("\nName: %s", e[i].eName);
        printf("\nID: %d", e[i].eId);
        printf("\nGender: %c", e[i].eGender);
        printf("\nAddress: %s", e[i].eAddress);
        printf("\nSalary: %.2f", e[i].eSal);
        printf("\n=========================\n");
    }
}

void searchID(EMP e[], int n, int Id) {
    int i;
    for (i = 0; i < n; i++) {
        if (e[i].eId == Id) {
            printf("\nEmployee found with ID %d:\n", Id);
            printf("Name: %s\n", e[i].eName);
            return;
        }
    }
}

void searchLName(EMP e[], int n, char lName[]) {
    int i;
    for (i = 0; i < n; i++) {
        if (strcmp(e[i].eName, lName) == 0) {
            printf("\nEmployee found with Last Name %s:\n", lName);
            printf("ID: %d\n", e[i].eId);
            return;
        }
    }
}

void searchSalaryRange(EMP e[], int n, float minSal, float maxSal) {
    int i;
    for (i = 0; i < n; i++) {
        if (e[i].eSal >= minSal && e[i].eSal <= maxSal) {
            printf("\nEmployee ID: %d\n", e[i].eId);
            printf("Name: %s\n", e[i].eName);
            printf("Salary: %.2f\n", e[i].eSal);
        }
    }
}

void updateLName(EMP e[], int n, int Id, char newLName[]) {
    int i;
    for (i = 0; i < n; i++) {
        if (e[i].eId == Id) {
            strcpy(e[i].eName, newLName);
            printf("\nEmployee ID %d Last Name updated to %s\n", Id, newLName);
            return;
        }
    }
}

