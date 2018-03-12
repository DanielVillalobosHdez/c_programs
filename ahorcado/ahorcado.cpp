#include <stdio.h>
#include <stdlib.h>
#include <string.h>


#define N 0x100


void pintar (int letras){
	printf("\t\t\tAHORCADO\n");
	
	for(int cor=0; cor<3; cor++)
		printf("\t vida %i \t", cor);
	printf("\n");

	printf("\t\t");
	for(int rep=0; rep<letras; rep++)
		printf("_ ");
	printf("\n");
}

int main(){

	char palabras[N]; 
	int letras;
	char *palabra_escogida = NULL;

	printf("Palabra: ");
	scanf(" %s", palabras);

	letras = strlen(palabras);
	palabra_escogida = (char *) malloc ((letras+1) * sizeof(char));

	system("clear");
	system("clear");
	system("clear");	

	pintar(letras);

  return EXIT_SUCCESS;
}
