#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define N 0X100

int main(){
    char **l; //apunta a un malloc para crear una variable
    char array[N];
    int longitud;

    printf("Cual es tu nombre: ");
    scanf(" %[^\n]", array);

    longitud = strlen(array);

    l = (char **) malloc(sizeof(char *));
    *l = (char *) malloc ((longitud+1) * sizeof(char));

    strncpy(*l, array, longitud+1);
    printf("nombre: %s\n", *l);

    free(*l);
    free(l);
    return EXIT_SUCCESS;
}
