#include <stdio.h>
#include <stdlib.h>


int main(){
	
	int l;

	printf("numero: ");
	scanf(" %i", &l);
	printf("\n");

	    for (int f=0; f<l; f++){
	        for (int c=0; c<l; c++) {
		    printf("*");
	         if(c == l-1)
		       for (int d=0; d<l; d++) {
			printf(" ");
	 		if(d == l-1)
		       	for (int a=0; a<l; a++) 
				printf("*");	
			}	
		}	 
		printf("\n");	
	    }
	    for (int f=0; f<l; f++){
	        for (int c=0; c<l; c++) {
	             printf(" ");
	             if(c == l-1)
	             for (int d=0; d<l; d++) {
	                 printf("*");
	                 if(d == l-1)
	                 for (int a=0; a<l; a++)
	                     printf(" ");
	               }
	          }
	          printf("\n");
	      }
	      for (int f=0; f<l; f++){
		  for (int c=0; c<l; c++) {
		      printf("*");
		      if(c == l-1)
		        for (int d=0; d<l; d++) {
		             printf(" ");
		             if(d == l-1)
				for (int a=0; a<l; a++)
				     printf("*");
				}
			   }
			   printf("\n");
			 }
	                  printf("\n");


	    return EXIT_SUCCESS;
}
