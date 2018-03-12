
#include <stdio.h>
#include <stdlib.h>

#define N 100

int main(){

	int matriz[N];
	int primos;

	for(int i = 0; i < N; i++){
		primos = i;
		if((primos%i) == 0)
			primos++;
	if(primos==2)
		matriz[i] = primos;
	}

	for(int m = 0; m < N; m++)
		printf(" %i", matriz[m]);

  return EXIT_SUCCESS;
}
