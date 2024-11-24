#include <stdio.h>
#include <pthread.h>
#include <unistd.h>
#include <time.h>
#include <stdlib.h>

#define THREAD_COUNT 3

// Thread function declarations
void* thread1_func(void* arg);
void* thread2_func(void* arg);
void* thread3_func(void* arg);

// Structure to hold thread details
typedef struct {
    pthread_t thread_id;
    int thread_num;
    pthread_attr_t attr;
} thread_info_t;

// Function to get the current timestamp
void get_timestamp(char* buffer) {
    time_t rawtime;
    struct tm * timeinfo;
    time(&rawtime);
    timeinfo = localtime(&rawtime);
    strftime(buffer, 20, "%Y-%m-%d %H:%M:%S", timeinfo);
}

// Main function
int main() {
    thread_info_t threads[THREAD_COUNT];
    pthread_attr_t attr1, attr2, attr3;
    struct sched_param param;

    // Initialize thread attributes
    pthread_attr_init(&attr1);
    pthread_attr_init(&attr2);
    pthread_attr_init(&attr3);

    // Thread 1: Detached, Cancellation Disabled
    pthread_attr_setdetachstate(&attr1, PTHREAD_CREATE_DETACHED);

    // Thread 2: Not Detached, Deferred Cancellation
    pthread_attr_setdetachstate(&attr2, PTHREAD_CREATE_JOINABLE);

    // Thread 3: Not Detached, Asynchronous Cancellation
    pthread_attr_setdetachstate(&attr3, PTHREAD_CREATE_JOINABLE);

    // Create threads with specific attributes
    pthread_create(&threads[0].thread_id, &attr1, thread1_func, NULL);
    pthread_create(&threads[1].thread_id, &attr2, thread2_func, NULL);
    pthread_create(&threads[2].thread_id, &attr3, thread3_func, NULL);

    // Set cancellation state and type for threads after creation
    pthread_setcancelstate(PTHREAD_CANCEL_DISABLE, NULL); // Thread 1 cancellation disabled
    pthread_setcanceltype(PTHREAD_CANCEL_DEFERRED, NULL); // Thread 2 deferred cancellation
    pthread_setcanceltype(PTHREAD_CANCEL_ASYNCHRONOUS, NULL); // Thread 3 async cancellation

    // Wait for 3 minutes
    sleep(180);

    // Cancel all threads after 3 minutes
    printf("Main thread: Cancelling all threads after 3 minutes\n");
    pthread_cancel(threads[0].thread_id);
    pthread_cancel(threads[1].thread_id);
    pthread_cancel(threads[2].thread_id);

    // Sleep for 1 second to let threads process cancellation
    sleep(1);

    return 0;
}

// Thread 1: Health Check - Display message every 2 seconds
void* thread1_func(void* arg) {
    char timestamp[20];
    while (1) {
        get_timestamp(timestamp);
        printf("T1: %s Health OK\n", timestamp);
        sleep(2);
    }
    return NULL;
}

// Thread 2: Print numbers starting from 1000 in steps of 2 every 3 seconds
void* thread2_func(void* arg) {
    int count = 1000;
    char timestamp[20];
    while (1) {
        get_timestamp(timestamp);
        printf("T2: %s %lu %d\n", timestamp, pthread_self(), count);
        count += 2;
        sleep(3);
    }
    return NULL;
}

// Thread 3: Print numbers starting from 2000 in steps of 2 every 3 seconds
void* thread3_func(void* arg) {
    int count = 2000;
    char timestamp[20];
    while (1) {
        get_timestamp(timestamp);
        printf("T3: %s %lu %d\n", timestamp, pthread_self(), count);
        count += 2;
        sleep(3);
    }
    return NULL;
}

