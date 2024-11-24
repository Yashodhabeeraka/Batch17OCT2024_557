#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "header.h"

queue_t* initQueue(int capacity) {
    queue_t *q = (queue_t*)malloc(sizeof(queue_t));
    q->capacity = capacity;
    q->front = q->rear = -1;
    q->data = (char**)malloc(capacity * sizeof(char*));
    for (int i = 0; i < capacity; i++) {
        q->data[i] = NULL;
    }
    return q;
}

int isFull(queue_t *q) {
    return (q->rear + 1) % q->capacity == q->front;
}

int isEmpty(queue_t *q) {
    return q->front == -1;
}

void enqueueArray(queue_t *q, char *str) {
    if (isFull(q)) {
        printf("Queue is full\n");
        return;
    }
    if (isEmpty(q)) {
        q->front = q->rear = 0;
    } else {
        q->rear = (q->rear + 1) % q->capacity;
    }
    q->data[q->rear] = strdup(str);
}

char* dequeueArray(queue_t *q) {
    if (isEmpty(q)) {
        printf("Queue is empty\n");
        return NULL;
    }
    char *str = q->data[q->front];
    if (q->front == q->rear) {
        q->front = q->rear = -1;
    } else {
        q->front = (q->front + 1) % q->capacity;
    }
    return str;
}

void freeQueueArray(queue_t *q) {
    for (int i = 0; i < q->capacity; i++) {
        if (q->data[i] != NULL) {
            free(q->data[i]);
        }
    }
    free(q->data);
    free(q);
}

