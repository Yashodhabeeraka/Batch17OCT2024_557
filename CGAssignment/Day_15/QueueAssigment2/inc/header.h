#ifndef HEADER_H
#define HEADER_H

typedef struct node_q {
    char *data;
    struct node_q *next;
} node;

node* createNode(char *str);
void enqueueList(node **front, node **rear, char *str);
char* dequeueList(node **front, node **rear);
void freeQueueList(node *front);

#endif // HEADER_H

