#include <stdio.h>

#include <string.h>                                                                                                                                                                                                             

#include <math.h>                                                                                                                                                                                                         

void main(){                                                                                                                                                                                                            

	        int A,B,C,f,x1,x2;                                                                     
A = 2;

printf("digite o valor do primeiro coeficiente:");

        scanf("%d",&A);                                                                                                                                                                                                  

	        B =5 ;

		        printf("digite o valor do segundo coeficiente:");

			scanf("%d",&B);                                                                                                                                                                                                  

			        C = 2;

				        printf("digite o valor do terceiro coeficiente:");

					scanf("%d",&C);

f = pow(B,2) - 4*A*C;                                                                                                                                                                                                  

         x1 = (-B + sqrt(f))/2*A ;

	          x2 = (-B - sqrt(f))/2*A;

		  if (f>-1){

			  printf("Raizes: %d, %d",x1,x2);

		  }else{

			  printf("Não há raizes");

		  }}
