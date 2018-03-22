#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <time.h>

#define N 0x100
#define P 50

#ifndef NDEBUG
#define DBG(msg)
#else
#define DBG(...) fprintf(stderr, __VA_ARGS__);
#endif

void f_palabra ();
void pinta(int ltr);
void pedir();
bool comprobar (char letra);
void pintar_muneco ();
void ganador();
void perdedor();
void repeticiones();
void decir();
void menu();

char **p_palabra = NULL;
char *p_elegida = NULL;
bool esta;
char letra;
int contador = 0;
int contador1 = 0;
int correctas = 0;
int ltr;
unsigned int ltr1;
char palabra[N];
bool letradichas = false;
char elegida[N];

int main(){

    system("clear");
    printf("\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t");
    system("toilet --gay -fpagga --filter border -w 600 'Ahorcado'");
    printf("CREADO POR:\n\t\t\t\t\t\t\t\tDANIEL VILLALOBOS");
    printf("\n\t\t\t\t\t\t\t\t21/03/2018");
    printf("\n");
    sleep(5);
    system("clear");

    f_palabra();
    pedir();

    return EXIT_SUCCESS;
}

void f_palabra() {

    int random;

    FILE *archivo;
    archivo = fopen(".facil.txt", "rt");

    srand(time(NULL));
    random = rand() %(P-1);
    while(fgets(palabra, N, archivo) != NULL) {

        ltr = strlen(palabra);

        p_palabra = (char **) realloc (p_palabra, (contador+1)*sizeof(char *));
        *(p_palabra+contador) = (char *) malloc (ltr * sizeof(char));
        strncpy(*(p_palabra+contador), palabra, ltr-1);
        contador++;

    }

    ltr = strlen(*(p_palabra+random));
    p_elegida = (char *) malloc (ltr  * sizeof (char));
    strncpy(p_elegida, *(p_palabra+random), ltr);


    fclose(archivo);
    pinta(ltr);

}

void pinta (int ltr) {

    system("clear");

    time_t tiempo = time(0);
    struct tm *tlocal = localtime(&tiempo);
    char output[128];
    strftime(output,128,"%d/%m/%y %H:%M:%S",tlocal);
    printf("\t\t\t\t\t\t%s\n",output);

    printf("\t\t\t");
    system("toilet --gay -fpagga AHORCADO");
    printf("\n\n\n");

    printf("La palabra tiene %i letras\n", ltr);
    /*printf("%s\n", p_elegida);*/

    printf("\t  ___ \n");
    printf("\t |   | \n");
    printf("\t |   \n");
    printf("\t | \n");
    printf("\t | \n");
    printf("\t_|_ \n");

}

void pedir () {
    /*
       char letra1;
       int con_letra = 0;
       char letra_dicha[N];
       */

    printf("letra: ");
    scanf(" %[^\n]", &letra);
    /*
       letra_dicha[con_letra] = letra;
       con_letra++;
       for(int i = 0; i < ltr; i++)
       if(letra_dicha[i] != letra) {
       letradichas == true;
       comprobar(letra);
       } else
       printf("La letra %c ya esta dicha\n", letra1);
       */
    comprobar(letra);


}

bool comprobar (char letra) {

    char *encontrada;

    encontrada = strchr(p_elegida, letra);


    if (encontrada != NULL) {
        esta = true;
        repeticiones();
    }else
        pintar_muneco();

}

void pintar_muneco () {

    if (contador1 == 0) {
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
        contador1++;
        pedir();
    }
    if (contador1 == 1) {
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
        contador1++;
        pedir();
    }

    if (contador1 == 2) {
        system("clear");

        printf("\t\t\t");
        system("toilet --gay -fpagga AHORCADO");
        printf("\n\n\n");

        printf("La palabra tiene %i letras\n", ltr);
        printf("\t  ___ \n");
        printf("\t |   | \n");
        printf("\t |   o \n");
        printf("\t |   | \n ");
        printf("\t |   |  \n");
        printf("\t_|_ \n");
        contador1++;
        pedir();
    }

    if (contador1 == 3) {
        system("clear");

        printf("\t\t\t");
        system("toilet --gay -fpagga AHORCADO");
        printf("\n\n\n");

        printf("La palabra tiene %i letras\n", ltr);
        printf("\t  ___ \n");
        printf("\t |   | \n");
        printf("\t |   o \n");
        printf("\t |  -| \n ");
        printf("\t |   |  \n");
        printf("\t_|_ \n");
        contador1++;
        pedir();
    }
    if (contador1 == 4) {
        system("clear");

        printf("\t\t\t");
        system("toilet --gay -fpagga AHORCADO");
        printf("\n\n\n");

        printf("La palabra tiene %i letras\n", ltr);
        printf("\t  ___ \n");
        printf("\t |   | \n");
        printf("\t |   o \n");
        printf("\t |  -|- \n ");
        printf("\t |   |  \n");
        printf("\t_|_ \n");
        contador1++;
        pedir();
    }
    if (contador1 == 5) {
        system("clear");

        printf("\t\t\t");
        system("toilet --gay -fpagga AHORCADO");
        printf("\n\n\n");

        printf("La palabra tiene %i letras\n", ltr);
        printf("\t  ___ \n");
        printf("\t |   | \n");
        printf("\t |   o \n");
        printf("\t |  -|- \n ");
        printf("\t |  _|  \n");
        printf("\t_|_ \n");
        contador1++;
        pedir();
    }


    if (contador1 == 6) {
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
        printf("\n\n\n\t\t\tLa palabra era %s\n", p_elegida);
        sleep(3);
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
    free(p_palabra);
    free(p_elegida);
    menu();
}

void repeticiones () {

    int contador1 = 0;

    for(int c = 0; c < ltr; c++)
        if(letra == *(p_elegida+c)){
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

    decir();

}

void perdedor() {
    system("clear");
    printf("\n\n\n");
    printf("\t\t\t");
    system("toilet --gay -fpagga YOU LOSE");
    printf("\n\n\n");
    sleep(3);
    system("clear");
    free(p_palabra);
    free(p_elegida);
    menu();
}

void decir() {
    char com_pal[N];

    if(esta == true){
        if(correctas == ltr){
            printf("Ya has dicho todas las letras cual es la palabra: ");
            scanf(" %[^\n]", com_pal);
            for(int array1 = 0; array1 < ltr; array1++)
                for(int array2 = 0; array2 < ltr; array2++)
                    if(com_pal[array1] == *p_elegida)
                        ganador();
                    else{
                        printf("ERROR: La palabra era: %s\n", *p_palabra);
                        sleep(3);
                        perdedor();
                    }
        }
        pedir();

    }
}

void menu(){

    int opcion;

    system("clear");

    printf("\n");
    printf("\t1) Nueva palabra\n\t2) SALIR\n\tOpcion: ");
    scanf(" %i", &opcion);

    if(opcion == 1)
        main();
    if(opcion == 2)
        system("clear");
    exit(1);
    if(opcion != 1 || opcion != 2)
        menu();

    system("clear");
}
