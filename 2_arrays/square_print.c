#include <stdio.h>

#define N 5

int main()
{
    int array[N][N];
    int i, j;

    for(i = 0; i < N; ++i) {
        for(j = 0; j < N; ++j) {
            array[i][j] = 1 + (i * N) + j;
        }
    }

    for(i = 0; i < N; ++i) {
        for(j = 0; j < N; ++j) {
            printf("%4d", array[i][j]);
        }
        printf("\n");
    }

    return 0;
}