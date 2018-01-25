#include <stdio.h>
#include <stdlib.h>

#define N 3

int main(){
    double sum = 0;
    double a[N][N] = {
        {5, 0, 4},
        {1, 4, 9},
        {2, 9, 7}
    };
    double pri = a[0][0];
    double nor;
    double fil2;
    double fil3;

    for (int d=0; d<N; d++){
        double diag = 1;
        for (int e=0; e<N; e++)
            diag *= a[e][(d+e)%N];
        printf("diag = %.2lf\n", diag);
        sum +=diag;
    }
    printf("******************************************\n");
    for (int d=0; d<N; d++){
        double diag = 1;
        for (int e=0; e<N; e++)
            diag *= a[(e+d)%N][N-1-e];
        printf("diag = %.2lf\n", diag);
        sum -=diag;
    }

    printf("Determinante = %.2lf\n", sum);

    for (int div=0; div<N; div++) {
        nor = a[0][div]/a[0][0];
        printf("%.2f\n", nor);
        a[0][N] = nor;
    }
    for (int div=0; div<N; div++) {
        fil2 = 
    }

    return EXIT_SUCCESS;
}
