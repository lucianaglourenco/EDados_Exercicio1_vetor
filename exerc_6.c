//Escreva um programa que preenche um vetor de 10 posi��es com valores digitados
//pelo usu�rio. Declare um outro vetor que dever� conter esses mesmos valores, s� que
//sem repeti��es.

#include<stdio.h>
#include<stdlib.h>

int main (){
	
	int v[10], vet[10], i ;
			
	    for(i = 0; i < 10; i++){
		   printf("Digite um  numero:\n");
		   scanf("%d", &v[i]);
		   printf("\n");
	}
		 for(i = 0; i < 10; i++){
		    if( v[i] != v[i+1]){
		      vet[i] = v[i];	
		      printf("%d \n", vet[i]);
	}
}

	system ("pause");
	return 0;
	
}
