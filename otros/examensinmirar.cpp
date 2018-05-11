#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define N 0x100

int main(){

    char array[N];
    char *puntero = NULL;
    int longitud;

    printf("¿Cual es tu nombre?: ");
    scanf(" %s", array);

    longitud = strlen(array);
    puntero = (char*) malloc ((longitud+1) * sizeof(char));

    strncpy(puntero, array, longitud+1);
    printf("Tu nombre: %s\n", puntero);


    free(puntero);
    return EXIT_SUCCESS;
}
