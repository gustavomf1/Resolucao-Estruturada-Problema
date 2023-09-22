#include <stdio.h>
#include <conio.h>

#define TF 5

void carregar_vetor(int vetor[TF]){
	int i;
	printf("\n\n<<<Carregar Vetor>>>\n\n");
	for (i = 0; i < TF; i++){
		printf("Informe Vetor[%d]: ", i);
		scanf("%d", &vetor[i]);
	}
}

void exibir_vetor(int vetor[TF]){
	int i;
	
	printf("\n\n<<<Vetores positivos>>>");
	for (i = 0; i < TF; i++){	
		if (vetor[i] > 0){
			printf("\nVetor[%d]: %d", i, vetor[i]);	
		}
	}	
}

void main(){
	int vetor[TF];
	carregar_vetor(vetor);
	exibir_vetor(vetor);
}
