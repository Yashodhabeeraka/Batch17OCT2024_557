#ifndef HEADER_H
#define HEADER_H

#define MAX_QUEUE_SIZE 5

typedef struct queue {
    char **data;
    int front;
    int rear;
    int capacity;
} queue_t;

queue_t* initQueue(int capacity);
int isFull(queue_t *q);
int isEmpty(queue_t *q);
void enqueueArray(queue_t *q, char *str);
char* dequeueArray(queue_t *q);
void freeQueueArray(queue_t *q);

#endif // HEADER_H

