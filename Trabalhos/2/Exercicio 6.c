#include <stdio.h>
#include <conio.h>

#define TF 5

void carregar_vetor(int vetor[TF]){
	int i;
	printf("\n\n<<<Carregar Vetor>>>\n\n");
	for (i = 0; i < TF; i++){
		printf("Informe Vetor[%d]", i);
		scanf("%d", &vetor[i]);
	}
}

void exibir_menor(int vetor[TF]){
	int i, menor, ii;
	printf("\n\n<<<Exibir vetor>>>\n\n");
	for (i = 0; i < TF; i++){
		if(i==0){
			menor = vetor[i];
		}
		
		if(vetor[i] < menor){
			menor = vetor[i];
			ii = i;
		}
	}
	
	printf("\nO menor elemento do vetor eh %d na posicao %d!", menor, ii);
}

void main(){
	int vetor[TF];
	carregar_vetor(vetor);
	exibir_menor(vetor);
}
