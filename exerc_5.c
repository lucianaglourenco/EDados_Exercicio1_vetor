 //5) Escreva um programa em C que calcula a m�dia de elementos armazenados em um
//vetor de 30 posi��es.

#include<stdio.h>
#include<stdlib.h>
   
   
int main(){
	
	int v[30], i=0, soma = 0 ;
    
	for(i = 0; i < 30; i ++){
		v[i] = rand() % 20;
	}
	float media = 0.0;
	for(i= 0; i < 30; i ++){
	   soma = v[i] + v[i+1];
	   media = soma  / 30;
	}
	printf(" \n soma % d :  \n\n", soma);
	printf(" \n Media %f :  \n\n", media); 
    system ("pause");
	return 0;
}
