#include <stdio.h>

#define N 5

int main()
{
    int array[N];
    int i;

    for(i = 0; i < N; ++i) {
        array[i] = 1 + i;
        printf("%d ", array[i]);
    }

    printf("\n");

    for(i = (N - 1); i >= 0; --i) {
        printf("%d ", array[i]);
    }

    printf("\n");

    return 0;
}