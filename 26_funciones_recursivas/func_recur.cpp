#include <stdio.h>
#include <stdlib.h>


char imprimir(char frase[], int entero){
    char letra = frase[entero];

    printf("%c", letra);
    entero++;
    if(letra != '\0')
        imprimir(frase, entero);
}



int main(){

    char frase[] = "dabale arroz a la zorra el abad";
    int letra = 0;

    imprimir(frase, letra);


    return EXIT_SUCCESS;
}
