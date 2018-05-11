
#include <stdio.h>
#include <stdlib.h>

#define N 3
#define Z 0

void matriz(double C[N-1][N]){
    printf("\n");
    for (int fila=0; fila<N-1; fila++){
        for (int columna=0; columna<N; columna++)
            printf("%2.2lf ", C[fila][columna]);
        printf("\n");
    }
    printf("\n");
}


void preguntarA(double A[N-1][N-1],double B[N-1][N]) {

    for(int filasA=Z; filasA<N-1; filasA++){
        for (int columnaA=Z; columnaA<N-1; columnaA++){
            printf("matriz A: fila %i Columna %i: ", filasA, columnaA);
            scanf(" %lf", &A[filasA][columnaA]);
        }
    }
    for(int filasB=Z; filasB<N-1; filasB++){
        for (int columnaB=Z; columnaB<N; columnaB++){
            printf("matriz B: fila %i Columna %i: ", filasB, columnaB);
            scanf(" %lf", &B[filasB][columnaB]);
        }
    }

}


int main(){
    double  A[N-1][N-1], B[N-1][N], C[N-1][N];


    preguntarA(A, B);


    for(int fila=0; fila<N-1; fila++)
        for (int columna=0; columna<N; columna++)
            C[fila][columna] = (A[fila][Z] * B[Z][columna]) + (A[fila][Z+1] * B[Z+1][columna]);

    matriz(C);


    return EXIT_SUCCESS;
}
