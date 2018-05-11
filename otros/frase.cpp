
#include <stdio.h>
#include <stdlib.h>

int main(){

	char frase[] = "Tu moto alpina derrapante";
	char *algo = frase;
	char *salto = frase;
	char vocal;

	while ( *salto != '\0'){
		printf("%c", *salto);
		salto++;
	}
	printf("\n");

	printf("Escribe una vocal: ");
	scanf(" %c", &vocal);

	while (*algo != '\0'){
		if(*algo == 'a' || *algo == 'e'|| *algo == 'i' || *algo == 'o' || *algo == 'u'){
			*algo = vocal;
			printf("%c", *algo);
			*algo++;
		} else {
			printf("%c", *algo);
			*algo++;
		}
	}
	printf("\n");

	return EXIT_SUCCESS;
}
