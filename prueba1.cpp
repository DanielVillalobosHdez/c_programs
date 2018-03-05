#include <stdio.h>
#include <string.h>
void contar(char frase[], char diccionario[],int i);
int main ()
{
    char diccionario[27] = "abcdefghijklmnopqrstuvwxyz", frase[30];
    int i, caracteres;
    printf("introduce frase\n");
    fgets(frase, 30, stdin);

    caracteres = strlen(frase);

    for  (i = 0; i < 25; i++)
        contar(frase, diccionario, i);
    return 0;
}

void contar(char frase[], char diccionario[], int i)
{
    int j, num,contador;
    char letra;
    contador = 0;
    num = strlen(frase);

    for (j = 0; j < num-1; j++)
    {
        if (frase[j] == diccionario[i])
        {
            contador+=1;
            letra = diccionario[i];
        }


    }
    if (contador != 0)
        printf("el numero de letras %c es %d\n", letra, contador);
}




