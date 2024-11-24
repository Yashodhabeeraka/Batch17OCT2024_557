#include "header.h"

void init_queue(queue_t *q, int capacity)
{
    q->data = (char **)malloc(capacity * sizeof(char *)); // Allocate memory for strings
    for (int i = 0; i < capacity; i++) {
        q->data[i] = (char *)malloc(100 * sizeof(char)); // Allocate memory for each string
    }

    q->front = END;
    q->rear = END;
}

int check_empty(queue_t *q)
{
    if (END == q->front)
    {
        return SUCCESS;
    }
    else
    { 
        return FAILURE;
    }
}

int check_full(queue_t *q)
{
    if ((q->rear + 1) % MAX_QUEUE_SIZE == q->front)
    {
        return SUCCESS;
    }
    else
    { 
        return FAILURE;
    }
}

int enqueue(queue_t *q, char *elem)
{
    if (check_full(q))
    {
        return FAILURE; // Queue full
    }

    if (check_empty(q))
    {
        q->front = 0;
        q->rear = 0;
    }
    else
    { 
        q->rear = (q->rear + 1) % MAX_QUEUE_SIZE;
    }

    strcpy(q->data[q->rear], elem); // Insert the string at the rear
    return SUCCESS;
}

int dequeue(queue_t *q, char **p_elem)
{
    if (check_empty(q))
    {
        return FAILURE; // Queue empty
    }

    *p_elem = q->data[q->front]; // Return the string at the front

    if (q->front == q->rear)
    {
        q->front = END;
        q->rear = END;
    }
    else
    {
        q->front = (q->front + 1) % MAX_QUEUE_SIZE;
    }

    return SUCCESS; // Success
}

void display(queue_t *q)
{
    if (check_empty(q))
    {
        printf("Queue is empty\n");
        return;
    }

    int index = q->front;
    while (index != q->rear)
    {
        printf("Queue[%d]: %s\n", index, q->data[index]);
        index = (index + 1) % MAX_QUEUE_SIZE;
    }
    printf("Queue[%d]: %s\n", q->rear, q->data[q->rear]);
}
