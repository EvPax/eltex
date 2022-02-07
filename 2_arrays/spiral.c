#include <stdio.h>

#define N 5

int main()
{
    int array[N][N] = {0};
    int i = 0, j = 0;
    int k = N;
    int counter = 1;

    if(0 == N % 2) {
        printf("Error\nNumber must be odd\n");
        return 1;
    }
    
    for(; ;) {

        for(;(i + j) < (k - 1); ++j) {
            array[i][j] = counter;
            ++counter;
        }

        for(;i != j; ++i) {
            array[i][j] = counter;
            ++counter;
        }

        for(;(i + j) > (k - 1); --j) {
            array[i][j] = counter;
            ++counter;
        }
        for(;i != j; --i) {
            array[i][j] = counter;
            ++counter;
        }
        i++;
        j++;

        if (N / 2 == i) {
            array[i][j] = counter;
            break;
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