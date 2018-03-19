#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <time.h>

#define N 0x100
#define P 10

void f_palabra ();
void pinta(int ltr);
void pedir();
bool comprobar (char letra);
void pintar_muneco ();
void ganador();
void perdedor();
void repeticiones();

char *p_palabra = NULL;
bool esta;
char letra;
int contador = 0;
int correctas = 0;
int ltr, ltr1;
char palabra[N];

int main(){

    system("clear");

    f_palabra();
    pedir();

    return EXIT_SUCCESS;
}

void f_palabra() {


    printf("palabra: ");
    scanf(" %[^\n]", palabra);

    ltr = strlen(palabra);
    p_palabra = (char *) malloc ((ltr + 1) * sizeof (char));
    strncpy(p_palabra, palabra, ltr);


    pinta(ltr);

}

void pinta (int ltr) {
    system("clear");

    printf("\t\t\t");
    system("toilet --gay -fpagga AHORCADO");
    printf("\n\n\n");

    printf("La palabra tiene %i letras\n", ltr);
    printf("*Las letras repetidas las tendras que poner tantas veces como se indique*\n");

    printf("\t  ___ \n");
    printf("\t |   | \n");
    printf("\t |   \n");
    printf("\t | \n");
    printf("\t | \n");
    printf("\t_|_ \n");

}

void pedir () {
/*
	int random;

    FILE *archivo;

    archivo = fopen(".facil.txt", "rt");
    srand(time(NULL));

    random = rand() %50;
    
    while(fgets(letra, random, archivo) != NULL) {
       printf("%s\n", letra);
    }
*/
    printf("Palabra: ");
    scanf(" %[^\n]", &letra);

    comprobar(letra);

}

bool comprobar (char letra) {

    char *encontrada;

    encontrada = strchr(p_palabra, letra);


    if (encontrada != NULL) {
        esta = true;
        repeticiones();
    } else {
        esta = false;
    }

    pintar_muneco();
}

void pintar_muneco () {

    char com_pal[N];

    if( esta == true){
        if(correctas == ltr){
            printf("Ya has dicho todas las letras cual es la palabra: ");
            scanf(" %[^\n]", com_pal);
            for(int array1 = 0; array1 < ltr; array1++)
                for(int array2 = 0; array2 < ltr; array2++)
                    if(com_pal[array1] == palabra[array2])
                        ganador();
                    else{
                        printf("ERROR: La palabra era: %s\n", p_palabra);
                        perdedor();
                    }
        } else
            pedir();
    } else {
        contador++;
    }
    if (contador == 1) {
        system("clear");

        printf("\t\t\t");
        system("toilet --gay -fpagga AHORCADO");
        printf("\n\n\n");


        printf("La palabra tiene %i letras\n", ltr);
        printf("\t  ___ \n");
        printf("\t |   | \n");
        printf("\t |   o\n");
        printf("\t | \n");
        printf("\t | \n");
        printf("\t_|_ \n");
        pedir();
    }
    if (contador == 2) {
        system("clear");


        printf("\t\t\t");
        system("toilet --gay -fpagga AHORCADO");
        printf("\n\n\n");

        printf("La palabra tiene %i letras\n", ltr);
        printf("\t  ___ \n");
        printf("\t |   | \n");
        printf("\t |   o\n");
        printf("\t |   |\n");
        printf("\t | \n");
        printf("\t_|_ \n");
        pedir();
    }
    if (contador == 3) {
        system("clear");

        printf("\t\t\t");
        system("toilet --gay -fpagga AHORCADO");
        printf("\n\n\n");

        printf("La palabra tiene %i letras\n", ltr);
        printf("\t  ___ \n");
        printf("\t |   | \n");
        printf("\t |   o \n");
        printf("\t |  -|- \n ");
        printf("\t |  _|_  \n");
        printf("\t_|_ \n");
        printf("\n\n\n\t\t\tLa palabra era %s\n", p_palabra);
        perdedor();
    }



}

void ganador() {
    system("clear");
    printf("\n\n\n");
    printf("\t\t\t");
    system("toilet --gay -fpagga YOU WIN");
    printf("\n\n\n");
    sleep(3);
    system("clear");
    exit(1);
}

void repeticiones () {

    int contador1 = 0;

    for(int c = 0; c < ltr; c++)
        if(letra == palabra[c]){
            contador1++;
        }
    if(contador1 !=0){
        printf("%c x%d\n", letra, contador1);
        if(ltr1 == 0)
            ltr1 = ltr - contador1;
        else
            ltr1 = ltr1 - contador1;
        printf("Te quedan %i letras\n", ltr1);
    }

    if(ltr1 == 0)
        correctas = ltr;

    pintar_muneco();

}

void perdedor() {
    system("clear");
    printf("\n\n\n");
    printf("\t\t\t");
    system("toilet --gay -fpagga YOU LOSE");
    printf("\n\n\n");
    sleep(3);
    system("clear");
    exit(1);
}

