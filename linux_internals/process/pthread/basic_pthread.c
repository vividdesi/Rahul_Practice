#include <stdio.h>
#include <pthread.h>

// Function executed by the thread
void* myThreadFunc(void* arg) {
    printf("Hello from the thread! Argument: %d\n", *(int*)arg);
    return NULL;
}

int main() {
    pthread_t thread;   // Thread handle
    int arg = 42;

    // Create a new thread
    if (pthread_create(&thread, NULL, myThreadFunc, &arg) != 0) {
        perror("Failed to create thread");
        return 1;
    }

    // Wait for the thread to finish
    pthread_join(thread, NULL);

    printf("Thread finished execution.\n");
    return 0;
}

