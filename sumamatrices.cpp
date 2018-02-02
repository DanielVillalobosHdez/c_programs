
#include <stdio.h>
#include <stdlib.h>

#define N 3
#define Z 0

int main(){
    double  matriz1[N-1][N-1] = {
        {2, 3},
        {1, 2}
    }, matriz2[N-1][N] = {
        {3, -7, 2},
        {4, 5, 6},
    }, resultado[N-1][N];

    resultado[0][0] = (matriz1[0][0] * matriz2[0][0]) + (matriz1[0][1] * matriz2[1][0]);
    printf("%2.2lf", resultado[0][0]);

    return EXIT_SUCCESS;
}
