
#include <stdio.h>
#include <stdlib.h>

int main(){

    FILE *archivo;
    char letra;
    int contador;

    archivo = fopen("file.txt", "r");

    letra = fgetc(archivo);

    if(archivo == NULL)
        printf("Error\n");

    if(letra == 'i')
        contador++;


    fclose(archivo);

    printf("i = %d\n", contador);

    return EXIT_SUCCESS;
}
