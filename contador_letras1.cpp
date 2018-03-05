#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define N 0x100

void contar(char array[], char diccionario[],int i){
	int numero, contador;
	char letra;
	contador = 0;
	numero = strlen(array);

	for(int c = 0; c < numero; c++){
		if (array[c] == diccionario[i]){
			contador+=1;
			letra = diccionario[i];
		}
	}
	if (contador != 0)
		printf("%c se repite %d veces\n", letra, contador);


} 



int main (){
	char diccionario[27] = "abcdefghijklmnopqrstuvwxyz ";
	char array[N];
	char *puntero = NULL;
	int caracteres;


	printf("introduce frase\n");
	scanf(" %s", array);

	caracteres = strlen(array);
	puntero = (char *) malloc ((caracteres+1) * sizeof(char));

	strncpy(puntero, array, caracteres+1);

	for  (int i = 0; i < 25; i++)
		contar(array, diccionario, i);

	free(puntero);
	return 0;
}




