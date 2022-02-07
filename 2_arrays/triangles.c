#include <stdio.h>

#define N 10

int main()
{
    const int diagonal = N - 1;

    int array[N][N];
    int i, j;

    for(i = 0; i < N; ++i) {
        for(j = 0; j < N; ++j) {
            array[i][j] = ( (i + j) < diagonal)? 0: 1;
        }
    }

    for(i = 0; i < N; ++i) {
        for(j = 0; j < N; ++j) {
            printf("%2d", array[i][j]);
        }
        printf("\n");
    }

    return 0;
}