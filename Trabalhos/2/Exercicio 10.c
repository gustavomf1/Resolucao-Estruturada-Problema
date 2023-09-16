#include <stdio.h>
#include <conio.h>

#define TF 5

void carregar_vetor(float vetor[TF]){
	int i;
	printf("\n\n<<<Carregar Vetor>>>\n\n");
	for (i = 0; i < TF; i++){
		printf("Informe Vetor[%d]: ", i);
		scanf("%f", &vetor[i]);
	}
}

void exibir_vetor(float vetor[TF]){
	int i;
	float maior = -9999;
	
	printf("\n\n<<<Divisao de vetores>>>");
	for (i = 0; i < TF; i++){	
		if (vetor[i] > maior){
			maior = vetor[i];
		}
	}
	
	for (i = 0; i < TF; i++){	
		vetor[i] /= maior;
		printf("\nVetor[%d]: %0.2f", i, vetor[i]);
	}
}

void main(){
	float vetor[TF];
	carregar_vetor(vetor);
	exibir_vetor(vetor);
}
