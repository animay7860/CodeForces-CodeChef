#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <pthread.h>
#include <sys/syscall.h>

void *thread_function(void *arg);
void *thread_function_b(void *arg);

int arr[10];


int main() {
    int res,resb;   
    pthread_t a_thread;
    pthread_t b_thread;
    void *thread_result;
    printf("Enter the value of array\n");
    for(int i=0;i<10;i++){ 
        scanf("%d",&arr[i]);
    }

    res = pthread_create(&a_thread, NULL, thread_function, NULL);
    
    if (res != 0) {
        perror("Thread creation failed\n");
        exit(EXIT_FAILURE);
    }

    printf("Waiting for thread to finish...PID %d TID %d \n", (int)getpid(), (int)syscall(__NR_gettid));

    res = pthread_join(a_thread, NULL);
    
    if (res != 0) {
        perror("Thread join failed");
        exit(EXIT_FAILURE);
    }

    resb = pthread_create(&a_thread, NULL, thread_function_b, NULL);
    
    if (resb != 0) {
        perror("Thread creation failed");
        exit(EXIT_FAILURE);
    }

    printf("Waiting for thread to finish...PID %d TID %d \n", (int)getpid(), (int)syscall(__NR_gettid));

    resb = pthread_join(a_thread, NULL);
    
    if (resb != 0) {
        perror("Thread join failed");
        exit(EXIT_FAILURE);
    }
    exit(EXIT_SUCCESS);
}

void *thread_function(void *arg) {

    int max = arr[0];
    for(int i=0;i<10;i++){
        if(arr[i]>max){
            max = arr[i];
        }
    }
    printf("Max element %d\n",max);
    sleep(3);
        
    pthread_exit(NULL);
    
}
void *thread_function_b(void *arg) {
    int min = arr[0];
    for(int i=0;i<10;i++){
        if(arr[i]<min){
            min = arr[i];
        }
    }
    printf("Min element %d\n",min);
    sleep(3);
        
    pthread_exit(NULL);
    
}