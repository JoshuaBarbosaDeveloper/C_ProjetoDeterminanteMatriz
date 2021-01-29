#include <stdio.h>

int main () {int matriz[3][3]; //Declarar matriz
			 int i, j, det; //Declarar linha e coluna
			 
			 for (i=0; i<=2; i++){//Varrer linhas
			 					  for (j=0; j<=2; j++){//Varrer colunas
								   					   matriz[i][j]= i+j;}}//Declarar valor de X(i)(j)
			 
			 det= (-(matriz[0][2]*matriz[1][1]*matriz[2][0])-(matriz[0][0]*matriz[1][2]*matriz[2][1])-(matriz[0][1]*matriz[1][0]*matriz[2][2]))+((matriz[0][0]*matriz[1][1]*matriz[2][2])+(matriz[0][1]*matriz[1][2]*matriz[2][0])+(matriz[0][2]*matriz[1][0]*matriz[2][1]));
		
			 printf("%d", det);}//Printar o determinante
	
			 
			 
			 
			 
			 
			 
