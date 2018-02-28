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

    printf("Cual es tu nombre: ");
    scanf(" %[^\n]", array);

    l = (char **) realloc (l, 2*sizeof(char *));
    *(l+1) = (char *) malloc (longitud+1);

    strncpy(*(l+1), array, longitud+1);

    printf("hola %s\n", *l);
    printf("hola %s\n", *(l+1));


    free(*l);
    free(l);
    free(l+1);
    return EXIT_SUCCESS;
}
