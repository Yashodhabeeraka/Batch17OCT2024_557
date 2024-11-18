/* Locking */
#include <stdio.h>
#include <pthread.h>
#include <stdlib.h>

int counter=0;//shared resource
pthread_mutex_t lock;//mutex for synchronization

void *increment(void*arg)
{
	pthread_mutex_lock(&lock); //lock the mutex
	for (int i = 0; i < 10; ++i) 
	{
		printf("\n%d", counter);
        counter++;
	}
}
int main() 
{
    pthread_t thread1, thread2;
    pthread_mutex_init(&lock, NULL);

    pthread_create(&thread1, NULL, increment, NULL);
    pthread_create(&thread2, NULL, increment, NULL);

    pthread_join(thread1, NULL);
    pthread_join(thread2, NULL);

    pthread_mutex_destroy(&lock);

    printf("Final counter value: %d\n", counter);
    return 0;
}
