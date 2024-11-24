#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "header.h"

node* createNode(char *str) {
    node *newNode = (node*)malloc(sizeof(node));
    newNode->data = strdup(str);
    newNode->next = NULL;
    return newNode;
}

void enqueueList(node **front, node **rear, char *str) {
    node *newNode = createNode(str);
    if (*rear == NULL) {
        *front = *rear = newNode;
    } else {
        (*rear)->next = newNode;
        *rear = newNode;
    }
}

char* dequeueList(node **front, node **rear) {
    if (*front == NULL) {
        printf("Queue is empty\n");
        return NULL;
    }
    node *temp = *front;
    char *str = temp->data;
    *front = (*front)->next;
    if (*front == NULL) {
        *rear = NULL;
    }
    free(temp);
    return str;
}

void freeQueueList(node *front) {
    node *temp;
    while (front != NULL) {
        temp = front;
        front = front->next;
        free(temp->data);
        free(temp);
    }
}

