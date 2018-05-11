#include <stdio.h>
#include <stdlib.h>

//1 2 3 4
//5 6
//7 8 9 10

//leer matriz
//leer cada fila de la matriz
// pasar a la fila sig. con un intro
// acabar con dos intros
// leer cada col
// if fila 1 contar columna
// else rellenar con 0
// fila ++

int main(){
    int fila = 0, columnas = 0;
    int columna = 0;
    char last_char = '\0', miradita;
    bool fin = false;
    double nuevo_num;
    double *matriz = NULL;

    do {
        scanf(" %lf", &nuevo_num);
        columna++;
        columnas++;
        matriz = (double *) realloc(matriz,
                (fila * columnas + columna) * sizeof(double));
        *(matriz+fila*columnas+columna-1)=nuevo_num;
        miradita = getc(stdin);
        if (miradita == '\n'){
            last_char = '\n';
            miradita = getc(stdin);
            if (miradita == '\n')
                fin = true;
            else {
                columna = 0;
                fila++;
            }
        }
        ungetc(miradita, stdin);
    } while(!fin);


    for(int f=0; f<fila; f++){
        for(int c=0; c<columnas; c++)
            printf("%4.2lf", *(matriz));
    }
    printf("\n");

    return EXIT_SUCCESS;
}
