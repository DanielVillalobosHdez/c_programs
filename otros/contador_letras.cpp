#include <stdio.h>
#include <stdlib.h>
#include <string.h>


#define N 0x100

int main ()
{

    char frase[N];
    char *palabra = NULL;
    int tamano;
    char abecedario[27] = "abcdefghijklmnopqrstuvwxyz";
    int contador = 0;
    char letra;

    printf("su frase: ");
    scanf(" %s", frase);

    palabra = (char *) malloc ((tamano+1) * sizeof(char));
tamano = strlen(frase);

    for (int p = 0; p < 27; p++)
        for(int c = 0; c < tamano-1; c++)
            if(frase[c] == abecedario[p]){
              contador+=1;
              letra = abecedario[p];
            }
    if(contador !=0)
        printf("%c %d\n", letra, contador);

}

