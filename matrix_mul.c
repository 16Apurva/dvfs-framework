#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 300

int A[N][N];
int B[N][N];
int C[N][N];

int main() {

    clock_t start, end;

    for(int i = 0; i < N; i++) {

        for(int j = 0; j < N; j++) {

            A[i][j] = rand() % 100;

            B[i][j] = rand() % 100;

            C[i][j] = 0;
        }
    }

    start = clock();

    for(int i = 0; i < N; i++) {

        for(int j = 0; j < N; j++) {

            for(int k = 0; k < N; k++) {

                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    end = clock();

    double execution_time =
        ((double)(end - start)) / CLOCKS_PER_SEC;

    printf("Execution Time: %f seconds\n",
           execution_time);

    return 0;
}
