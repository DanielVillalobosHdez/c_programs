#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define N 0X100

int main(){
    char **puntero;
    char palabra[N];
    int tamano;
    int palabras;

    printf("Cuantas palabras: ");
    scanf(" %i", &palabras);


    for(int i = 0; i = palabras; i++){
        printf("palabra: ");
        scanf(" %[^\n]", palabra);
        tamano = strlen(palabra);

        if(i = 0){

            puntero = (char **) malloc(sizeof(char *));

            *(puntero+i) = (char *) malloc ((tamano+1) * sizeof(char));
            strncpy(*puntero, palabra, tamano+1);
            *puntero[tamano+1] = '\0';
            printf(" %s\n", *puntero);

        } else {

            puntero = (char **) realloc (puntero, (i+1)*sizeof(char *));
            *(puntero+i) = (char *) malloc (tamano+1);
            strncpy(*(puntero+i), palabra, tamano+1);
            *puntero[tamano+1] = '\0';
        }

    }

    for(int i = 0; i < palabras; i++)
        printf(" %s\n", *(puntero+i));

    free(*puntero);
    for(int i = 0; i < palabras; i++)
        free(puntero+i);
    return EXIT_SUCCESS;
}


