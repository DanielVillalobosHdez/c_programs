#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include <time.h>

#define N 0x100
#define P 50

void pintar (int letras);
void escribir();
char *seleccionar_palabra(char **puntero);
char comprobar(char letra, char puntero);
void pintarletra(char letra, int letras);

int vidas = 3;
char *puntero;
int letras;
int contador = 0;

void pintarletra(char letra){

    int letras1;
    letras1 =  strlen(puntero);
    char letradicha[letras];

    if(strchr(puntero, letra) != NULL){
        printf(" %s", &letradicha[contador]);
        letradicha[contador] = letra;
        contador++;
        escribir();
    } else {
        vidas--;
        pintar(letras);
    }
}


void pintar (int letras){

    int contadorantes = 0;
    int contadordespues = 0;
    char dicha[letras];

    printf("\t\t\tAHORCADO\n");

    for(int cor=0; cor<vidas; cor++)
        printf("\t vida %i \t", cor);
    printf("\n");

    printf("\t\t");
    for(int rep=0; rep<letras-1; rep++)
        printf("_ ");
    printf("\n");

    escribir();
}

void escribir() {
    char letra[N];

    printf("letra: ");
    scanf(" %s", &letra[contador]);

    pintarletra(letra[contador]);
}


//a=sel_pa(".facil.txt");

char *sel_pa(const char *fichero)
{
    char *p_retorno;
    FILE *archivo;
    char elegida[N];
    char definitiva;
    int random = 0;

    archivo = fopen(fichero,"rt");
    while (fgets(elegida, N , archivo) !=NULL){
        letras = strlen(elegida);
        if(contador == 0){
            //
            p_
        }
        if(contador >= 1) {
            //
        }
    }
    fclose(archivo);
    random = rand() %50;
    letras = strlen(*puntero);
    printf(" %s\n", *puntero);
    pintar(letras);

    return p_retorno;


}

char *seleccionar_palabra(char **puntero = NULL){

    FILE *archivo;
    char elegida[N];
    char definitiva;
    int random = 0;

    archivo = fopen(".facil.txt", "rt");

    while (fgets(elegida, N , archivo) !=NULL){
        letras = strlen(elegida);
        if(contador == 0){
            puntero = (char **) malloc (sizeof(char));
            *puntero = (char *) malloc ((letras+1) * sizeof(char));
            strncpy(*puntero, elegida, (letras+1));
            contador++;
        }
        if(contador >= 1) {
            puntero = (char **) realloc (puntero, (contador+1) * sizeof (char *));
            *(puntero + contador) = (char *) malloc (letras + (contador + 1));
            strncpy (*(puntero+contador), elegida + contador, letras + (contador + 1)); 
            contador++;
        }
    }
    fclose(archivo);
    random = rand() %50;
    letras = strlen(*puntero);
    printf(" %s\n", *puntero);
    pintar(letras);
    free(puntero);
    return *(puntero + random);
}

int main(){

    //char **puntero;

    srand(time(NULL));
    seleccionar_palabra(*puntero);

    return EXIT_SUCCESS;
}


