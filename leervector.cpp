#include <stdio.h>
#include <stdlib.h>

int main(){

    int fila_vector = 0;
    bool acabar = false;
    double numero;
    int salto;
    double *vector = NULL;

    printf("El vector: \n");
    do {
        scanf(" %lf", &numero);
        vector = (double *) realloc(vector, fila_vector * sizeof(double));
        *(vector+fila_vector) = numero;
        salto = getc(stdin);
        fila_vector++;
        if (salto == '\n'){
            acabar = true;
        }
        ungetc(acabar, stdin);
    } while (!acabar);

    for(int f=0; f<fila_vector; f++)
        printf("%4.2lf ", *(vector+f));
    printf("\n");

    return EXIT_SUCCESS;
}
