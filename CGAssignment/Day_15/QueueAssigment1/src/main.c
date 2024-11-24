#include <stdio.h>
#include "header.h"

int main() {
    queue_t *q = initQueue(MAX_QUEUE_SIZE);
    enqueueArray(q, "Hello");
    enqueueArray(q, "World");
    printf("%s\n", dequeueArray(q));
    printf("%s\n", dequeueArray(q));
    freeQueueArray(q);
    return 0;
}

