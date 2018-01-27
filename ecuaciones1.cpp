
#include <stdio.h>
#include <stdlib.h>

#define N 3
#define Z 0

void tabla(double a[N-1][N]){
	printf("\n");
	for (int f=0; f<N-1; f++){
		for (int c=0; c<N; c++)
			printf("%2.2lf ", a[f][c]);
		printf("\n");
	}
	printf("\n");
}

void datos(double sistema[N-1][N]){

	printf("***************************\n");
	printf("a1x + a2y = a3 \n");
	printf("b1x + b2y = b3 \n");
	printf("***************************\n");

	for(int c=Z; c<N-1; c++){	
		for (int a=Z; a<N; a++){
			printf("a%i: ", a+1);
			scanf(" %lf", &sistema[c][a]);
		}
		if(c = 1) {
			for (int a=Z; a<N; a++){
				printf("b%i: ", a+1);
				scanf(" %lf", &sistema[c][a]);
			}
		}
	}

	printf("***************************\n");
	printf("%2.lfx + %2.lfy = %2.lf\n", sistema[0][0], sistema[0][1], sistema[0][2]);
	printf("%2.lfx + %2.lfy = %2.lf\n", sistema[1][0], sistema[1][1], sistema[1][2]);
	printf("***************************\n");
}

int main(){
	double sistema [N-1][N], t, t1, fila[N-1][N];



	datos(sistema);
	printf("***************************\n");
	tabla(sistema);
	printf("***************************\n");

	t = sistema[Z][Z];
	for(int col=Z; col<N; col++)
		sistema[Z][col] = sistema[Z][col] / t;
	t = sistema[Z+1][Z];
	for(int col=Z; col<N; col++){
		if(t < Z)
			t = t * -1;
		sistema[Z+1][col] = sistema[Z+1][col] / t;
	}
	tabla(sistema);

	for(int col=0; col<N; col++){
		sistema[Z+1][col] = sistema[Z+1][col] + sistema[Z][col];
	}
	tabla(sistema);

	double div = sistema[Z+1][Z+1];
	for(int d=0; d<N; d++)
		sistema[Z+1][d] /= div;

	tabla(sistema);
	
	double ult = -sistema[Z][Z+1];
	for(int mul=1; mul<N; mul++){
		t = sistema[1][mul] * ult;
		sistema[Z][mul] = sistema[Z][mul] + t;
	}

		tabla(sistema);

	printf("x=%2.2lf\n", sistema[0][2]);
	printf("y=%2.2lf\n", sistema[1][2]);
	return EXIT_SUCCESS;
}
