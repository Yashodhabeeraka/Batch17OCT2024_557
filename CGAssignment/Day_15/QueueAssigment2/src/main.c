#include <stdio.h>
#include "header.h"

int main() {
    node *front = NULL, *rear = NULL;
    enqueueList(&front, &rear, "WellCome");
    enqueueList(&front, &rear, "to Capgemini");
    printf("%s\n", dequeueList(&front, &rear));
    printf("%s\n", dequeueList(&front, &rear));
    freeQueueList(front);
    return 0;
}

