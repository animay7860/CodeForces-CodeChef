#include <bits/stdc++.h>
using namespace std;
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <pthread.h>     //for thread functions
#include <sys/syscall.h> //for thread id
#define max 1000;
int matA[max][max];
int matB[max][max];
int matC[max][max];
int n;
int step_i = 0;

char message[] = "Full Program Ran";

void *thread_function(void *arg); // Unlike fork, creating a new thread require us to explicitly provides a pointer to a function where the new thread should start executing.

int main()
{
    int res[max];

    scanf("%d", &n);

    pthread_t threads[3];
    void *thread_result;

    for (int i = 0; i < n; i++)
    {
        int *p;
        res[i] = pthread_create(&threads[i], NULL, thread_function, (void *)(p));
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &matA[i][j]);
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &matB[i][j]);
        }
    }

    // Displaying matA
    cout << endl
         << "Matrix A" << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
            cout << matA[i][j] << " ";
        cout << endl;
    }

    // Displaying matB
    cout << endl
         << "Matrix B" << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
            cout << matB[i][j] << " ";
        cout << endl;
    }

    for (int i = 0; i < n; i++)
    {
        if (res[i] != 0)
        {
            perror("Thread creation failed");
            exit(EXIT_FAILURE);
        }
    }

    printf("Waiting for thread to finish...PID %d TID %d \n", (int)getpid(), (int)syscall(__NR_gettid));

    for (int i = 0; i < n; i++)
        res[i] = pthread_join(threads[i], NULL);

    cout << endl
         << "Multiplication of A and B" << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            cout << matC[i][j] << " ";
        cout << endl;
    }

    printf("Thread joined\n");
    printf("Message is now %s\n", message);
    exit(EXIT_SUCCESS);

    return 15;
}

void *thread_function(void *arg)
{
    int i = step_i++; // i denotes row number of resultant matC

    for (int j = 0; j < n; j++)
        for (int k = 0; k < n; k++)
            matC[i][j] += matA[i][k] * matB[k][j];
}