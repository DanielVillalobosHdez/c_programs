#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define N 0X100

int main(){
    char **puntero;
    char palabra[N];
    int tamano;
    int palabras;
    int contador = 0;

    printf("Cuantas palabras: ");
    scanf(" %i", &palabras);


    for(int i = 0; i < palabras; i++){
        printf("palabra: ");
        scanf(" %s", &palabra[i]);
        tamano = strlen(palabra);

        if(contador == 0){

            puntero = (char **) malloc(sizeof(char *));
            *(puntero+i) = (char *) malloc((tamano+1) * sizeof(char));
            strncpy(*puntero, palabra, tamano-1);
            contador++;
        }
        if (contador >= 1){
            puntero = (char **) realloc (puntero, (i+1)*sizeof(char *));
            *(puntero+i) = (char *) malloc (tamano+(i+1));
            strncpy(*(puntero+i), palabra+i, tamano+(i+1));
            contador++;
        }
    }

    for(int i = 0; i < palabras; i++)
        printf(" %s\n", *(puntero+i));

    for(int i = 0; i < palabras; i++)
        free(*(puntero+i));
    return EXIT_SUCCESS;
}


