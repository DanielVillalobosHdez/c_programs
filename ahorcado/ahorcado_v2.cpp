#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <time.h>

#define N 0x100
#define P 10

void palabra ();
void pinta(int ltr);
void pedir();
bool comprobar (char letra);
void pintar_muneco ();
void ganador();

char *p_palabra = NULL;
bool esta;
char letra;
int contador = 0;
int correctas = 0;
int ltr;

int main(){
	
	system("clear");	

	palabra();
	pedir();

	return EXIT_SUCCESS;
}

void palabra() {

	char palabra[N];

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

	printf("\t  ___ \n");
	printf("\t |   | \n");
	printf("\t |   \n");
	printf("\t | \n");
	printf("\t | \n");
	printf("\t_|_ \n");

}

void pedir () {

	printf("letra: ");
	scanf(" %[^\n]", &letra);

	comprobar(letra);	

}

bool comprobar (char letra) {

	char *encontrada;

	encontrada = strchr(p_palabra, letra);


	if (encontrada != NULL) {
		esta = true;
	} else {
		esta = false;
	}

	pintar_muneco();
}

void pintar_muneco () {

	if( esta == true){
		printf("La letra %s esta en la palabra\n", &letra);
		correctas++;
		if(correctas == ltr){
			printf("La palabra era %s\n", p_palabra);
			sleep(3);			
			ganador();
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
		contador++;
		sleep(3);
		system("clear");
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
}
