#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define N 0x100

void contar(char array[], char diccionario[],int i){
    double numero, contador;
    char letra;
    char carpor = '%';
    contador = 0;
    numero = strlen(array);
    double porcentaje;

    for(int c = 0; c < numero; c++){
        if (array[c] == diccionario[i]){
            contador+=1;
            letra = diccionario[i];
        }
    }
    if (contador != 0){
        porcentaje = (contador*100)/(numero-1);
        printf("%c esta %3.2lf %c \n", letra, porcentaje, carpor);
    }

}


int main (){
    char diccionario[27] = "abcdefghijklmnopqrstuvwxyz";
    char array[N];
    char *puntero = NULL;
    int caracteres;


    printf("introduce frase\n");
    fgets(array, N, stdin);
    caracteres = strlen(array);

    puntero = (char *) malloc ((caracteres+1) * sizeof(char));

    strncpy(puntero, array, caracteres-1);
    puntero[caracteres-1] = '\0';

    for  (int i = 0; i < 25; i++)
        contar(array, diccionario, i);

    free(puntero);
    return 0;
}




