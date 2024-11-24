#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_ID_LEN 5
#define MAX_NAME_LEN 50

typedef struct Node {
    char id[MAX_ID_LEN];
    char name[MAX_NAME_LEN];
    int val;
    struct Node *next;
} Node;

// Function to create a new node
Node* create_node(const char *id, const char *name, int val) {
    Node *new_node = (Node*)malloc(sizeof(Node));
    strncpy(new_node->id, id, MAX_ID_LEN);
    strncpy(new_node->name, name, MAX_NAME_LEN);
    new_node->val = val;
    new_node->next = NULL;
    return new_node;
}

// Function to search and update a node by name
int search_update_name(Node **head, char *search, char *replace) {
    Node *current = *head;
    while (current != NULL) {
        if (strncmp(current->name, search, MAX_NAME_LEN) == 0) {
            strncpy(current->name, replace, MAX_NAME_LEN);
            return 1; // Success
        }
        current = current->next;
    }
    return 0; // Not found
}

// Function to insert a node in sorted order based on name
int sorted_insert_name(Node **head, char *id, char *name, int val) {
    Node *new_node = create_node(id, name, val);
    if (*head == NULL || strncmp((*head)->name, name, MAX_NAME_LEN) > 0) {
        new_node->next = *head;
        *head = new_node;
        return 1;
    }
    Node *current = *head;
    while (current->next != NULL && strncmp(current->next->name, name, MAX_NAME_LEN) < 0) {
        current = current->next;
    }
    new_node->next = current->next;
    current->next = new_node;
    return 1;
}

// Function to insert a node in sorted order based on val
int sorted_insert_val(Node **head, char *id, char *name, int val) {
    Node *new_node = create_node(id, name, val);
    if (*head == NULL || (*head)->val > val) {
        new_node->next = *head;
        *head = new_node;
        return 1;
    }
    Node *current = *head;
    while (current->next != NULL && current->next->val < val) {
        current = current->next;
    }
    new_node->next = current->next;
    current->next = new_node;
    return 1;
}

// Function to print the list
void print_list(Node *head) {
    Node *current = head;
    while (current != NULL) {
        printf("ID: %s, Name: %s, Val: %d\n", current->id, current->name, current->val);
        current = current->next;
    }
}

// Main function to test the code
int main() {
    Node *head = NULL;

    sorted_insert_name(&head, "B001", "Bob", 20);
    sorted_insert_name(&head, "A002", "Alice", 10);
    sorted_insert_name(&head, "C003", "Charlie", 30);

    printf("List after sorted insert by name:\n");
    print_list(head);

    sorted_insert_val(&head, "D004", "David", 25);
    sorted_insert_val(&head, "E005", "Eve", 5);

    printf("\nList after sorted insert by val:\n");
    print_list(head);

    search_update_name(&head, "Alice", "Zara");

    printf("\nList after search and update:\n");
    print_list(head);

    return 0;
}

