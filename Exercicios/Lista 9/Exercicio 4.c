#include <stdio.h>
#include <conio.h>

#define TF 5

void carregar_vetor(int vetor[TF]){
	int i;
	printf("\n\n<<<Carregar Vetor>>>\n\n");
	for (i = 0; i < TF; i++){
		printf("Informe Vetor[%d]", i);
		scanf("%d", &vetor[i]);
		
		if (vetor[i] < 0){
			vetor[i] = 0;
		}
	}
}

void exibir_vetor(int vetor[TF]){
	int i;
	printf("\n\n<<<Exibir vetor>>>\n\n");
	for (i = 0; i < TF; i++){
		printf("\nVetor[%d] = %d", i, vetor[i]);
	}	
}

void main(){
	int vetor[TF];
	carregar_vetor(vetor);
	exibir_vetor(vetor);
}
