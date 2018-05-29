#include <stdio.h>
#include <stdlib.h>
#include <strings.h>

void imprimir(char frase[], int entero){
    char letra = frase[entero];

    printf("%c", letra);
    entero++;
    if(letra != '\0')
        imprimir(frase, entero);
}

void imprimirinversa(char frase[], int entero){
    char letra = frase[entero-1];

    printf("%c", letra);
    entero--;
    if(entero >= 0)
        imprimirinversa(frase, entero);
}

int main(){

    char frase[] = "dabale arroz a la zorra el abad";
    int letra = 0;
    int inversa = sizeof(frase);

    imprimir(frase, letra);
    printf("\n");
    imprimirinversa(frase, inversa);
    printf("\n");

    return EXIT_SUCCESS;
}
