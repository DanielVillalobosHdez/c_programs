#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include <time.h>

#define N 0x100
#define P 50

void pintar (int letras);
char escribir(char letra);
char seleccionar_palabra(char **puntero = NULL);
char comprobar(char letra, char puntero);

void pintar (int letras){

	printf("\t\t\tAHORCADO\n");

	for(int cor=0; cor<3; cor++)
		printf("\t vida %i \t", cor);
	printf("\n");

	printf("\t\t");
	for(int rep=0; rep<letras-1; rep++)
		printf("_ ");
	printf("\n");
}

char escribir(char letra) {
	printf("letra: ");
	scanf(" %s", &letra);	
}

char seleccionar_palabra(char **puntero){

	FILE *archivo;
	char elegida[N];
	int letras;
	int ltr;
	int contador = 0;
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
	ltr= strlen(*(puntero + random));
	pintar(ltr, *(puntero + random));
	free(puntero);
	return *(puntero + random);
}

char comprobar (char letra, char puntero) {
	char *buscar;
	int vidas = 3;

	buscar = strchr(puntero, letra);
	
	if(buscar == NULL)
		pintar(vidas--);
	pintar(buscar - puntero);	

}

int main(){
	
	char puntero;
	char letra;

	seleccionar_palabra(puntero);
	escribir(letra);
	comprobar(letra, puntero);

	return EXIT_SUCCESS;
}
