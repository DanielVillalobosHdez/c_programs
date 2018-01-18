#include <stdio.h>
#include <stdlib.h>


int impar(int n){
    return n % 2 != 0;
}

int main(){

	int l;


	printf("numero: ");
	scanf(" %i", &l);
	printf("\n");

        for (int b=0; b<l; b++){
	for (int z=0; z<l; z++){
	    for (int f=0; f<l; f++){
                f++;
	        for (int c=0; c<l; c++) {
		    printf("*");
	         if(c == l-1)
		       for (int d=0; d<l; d++) {
			printf(" ");
		}
		}
		}
		printf("\n");
	    }
                for (int y=0; y<l; y++){
	    	for (int f=0; f<l-1; f++){
                f++;
                for (int c=0; c<l; c++) {
	             printf(" ");
	             if(c == l-1)
	             for (int d=0; d<l; d++) {
	                 printf("*");
	          }
	          }

                }
	          printf("\n");
	      }

                b++;
                b++;
                }
 if (impar(l)) 
    for (int z=0; z<l; z++){
      for (int f=0; f<l; f++){
           f++;
           for (int c=0; c<l; c++) {
                printf("*");
                if(c == l-1)
                for (int d=0; d<l; d++) {
                    printf(" ");
                }
           }
        }
        printf("\n");
    }
    return EXIT_SUCCESS;
}
