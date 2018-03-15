#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>

#define N 0x100
#define P 50

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

char *seleccionar_palabra(char *puntero = NULL){

	FILE *archivo;
	char elegida[N];
	int letras;
	int ltr;

	archivo = fopen(".facil.txt", "rt");

	while (fgets(elegida, N, archivo) !=NULL){
			letras = strlen(elegida);
			puntero = (char *) malloc (letras * sizeof(char));
			strncpy(puntero, elegida, (letras+1));
	}
	fclose(archivo);
	ltr= strlen(elegida);
	pintar(ltr);
	return puntero;
	free(puntero);
}
int main(){
	char palabra[P];


	seleccionar_palabra(palabra);

	return EXIT_SUCCESS;
}
