
/*
Desp: 2a. Extend Q1. Above and add 3 functions below.

//to search for a name and to replace it with a user defined name, return replaced string
char*search_update(char *searchstr, char *replacestr);
//search and delete the record with given name or percentage value, return SUCCESS on successful delete else FAILURE
int delete_record(char *searchstr, int percent);
//search for name and if found create a copy of the record in newstudent
and return SUCCESS, else FAILURE
int copy(char *name, struct student **newstudent);

Author: Yashodha_Beeraka_557
Date of creation or Date of modification: 5th-11-2024
Version: 0.1v
*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define SUCCESS 1
#define FAILURE 0

struct student {
    char name[50];
    int percentage;
    struct student *next;
};

struct student *head = NULL; // Declare the head pointer globally

// Function to search for a name and replace it with a user-defined name
char* search_update(char *searchstr, char *replacestr) {
    struct student *current = head;
    while (current != NULL) {
        if (strcmp(current->name, searchstr) == 0) {
            strcpy(current->name, replacestr);
            return current->name;
        }
        current = current->next;
    }
    return NULL; // Return NULL if the name is not found
}

// Function to search and delete the record with given name or percentage value
int delete_record(char *searchstr, int percent) {
    struct student *current = head;
    struct student *previous = NULL;

    while (current != NULL) {
        if (strcmp(current->name, searchstr) == 0 || current->percentage == percent) {
            if (previous == NULL) {
                head = current->next; // Deleting the head node
            } else {
                previous->next = current->next;
            }
            free(current);
            return SUCCESS;
        }
        previous = current;
        current = current->next;
    }
    return FAILURE; // Return FAILURE if the record is not found
}

// Function to search for a name and create a copy of the record in newstudent
int copy(char *name, struct student **newstudent) {
    struct student *current = head;

    while (current != NULL) {
        if (strcmp(current->name, name) == 0) {
            *newstudent = (struct student *)malloc(sizeof(struct student));
            if (*newstudent == NULL) {
                return FAILURE; // Return FAILURE if memory allocation fails
            }
            strcpy((*newstudent)->name, current->name);
            (*newstudent)->percentage = current->percentage;
            (*newstudent)->next = NULL;
            return SUCCESS;
        }
        current = current->next;
    }
    return FAILURE; // Return FAILURE if the name is not found
}

// Example main function to demonstrate usage
int main() {
    // Add code here to initialize the linked list and test the functions
    return 0;
}
