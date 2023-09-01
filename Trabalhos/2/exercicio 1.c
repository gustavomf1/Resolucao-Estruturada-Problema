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

void exibir_menor_maior(int vetor[TF]){
	int i, menor, maior;
	printf("\n\n<<<Exibir vetor>>>\n\n");
	for (i = 0; i < TF; i++){
		if(i==0){
			maior = vetor[i];
			menor = vetor[i];
		}
		
		if(vetor[i] > maior){
			maior = vetor[i];
		}
		
		if(vetor[i] < menor){
			menor = vetor[i];
		}
	}
	
	
	printf("\nMaior: %d", maior);
	printf("\nMenor: %d", menor);	
}

void main(){
	int vetor[TF];
	carregar_vetor(vetor);
	exibir_menor_maior(vetor);
}
