#include <string.h>
#include <stdio.h>
#include <stdlib.h>

#define N 20
#define CAR_LLENO "▒"
#define CAR_VACIO "▊"
#define VALIDO ((x) >=0 && (x)<N) && (y >=0 && y<N)

void pintar(int matriz[N][N]) {
    for(int fila = 0; fila < N; fila++){
        for(int col = 0; col < N; col++)
            printf("%c", matriz[fila][col]? CAR_LLENO : CAR_VACIO);
        printf("\n");
    }
}

void poblacion_inicial(int matriz[N][N]){
    int x, y;

    do{
        system("clear");

        printf("Usa coordenadas invalidas para acabar \n");
        pintar(matriz);
        printf("\n\t Nuevo x, y: ");
        scanf(" %i %i", &x, &y);
        x--, y--;

        if(VALIDO(x,y))
            matriz[x][y] = 1;

    } while(VALIDO(x,y));
}

int main(){

    int actual[N][N],
    futuro[N][N];

    bzero(actual, sizeof(actual));
    poblacion_inicial(actual);

    while(1){
        calcular(futuro, actual);
        pintar(actual);
    }

    return EXIT_SUCCESS;
}
