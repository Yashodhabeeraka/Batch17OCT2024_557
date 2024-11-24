#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>

void *memory_leak_example(void *arg) {
    char *str = malloc(100);  // Allocate memory
    if (str == NULL) {
        return NULL;
    }

    // Simulate processing
    printf("Thread processing...\n");

    // No free() here, so memory will be leaked

    return NULL;
}

int main() {
    pthread_t tid;
    
    // Create a thread that will cause a memory leak
    pthread_create(&tid, NULL, memory_leak_example, NULL);
    pthread_join(tid, NULL);

    // No memory is freed, resulting in a leak

    return 0;
}

