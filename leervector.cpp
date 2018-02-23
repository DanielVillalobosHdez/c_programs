#include <stdio.h>
#include <stdlib.h>

int main(){

    int fila_vector = 0;
    double numero;
    int salto;
    double *vector = NULL;
    char end;

    printf("El vector: \n");
    scanf(" %*[()]");
    do {
        vector = (double *) realloc(vector, (fila_vector+1) * sizeof(double));
        scanf(" %lf", &numero);
        vector[fila_vector] = numero;
        /*salto = getc(stdin);
        fila_vector++;
        if (salto == '\n'){
            acabar = true;
        }
        ungetc(acabar, stdin);*/
    } while (!scanf(" %1[)]", &end));

    printf("\n\t( ");
    for(int f=0; f<fila_vector; f++)
        printf("\t %4.2lf ", vector[f]);
    printf("\t )\n");

    return EXIT_SUCCESS;
}
