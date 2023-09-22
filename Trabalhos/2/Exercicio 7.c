#include <stdio.h>
#include <conio.h>

#define TF 5

void carregar_vetor(int vetor1[TF], int vetor2[TF]){
	int i;
	printf("\n\n<<<Carregar Primeiro vetor>>>\n\n");
	for (i = 0; i < TF; i++){
		printf("Informe Vetor1[%d]: ", i);
		scanf("%d", &vetor1[i]);
	}
	
	
	printf("\n\n<<<Carregar Segundo vetor>>>\n\n");
	for (i = 0; i < TF; i++){
		printf("Informe Vetor2[%d]: ", i);
		scanf("%d", &vetor2[i]);
	}
}


void exibir_vetor(int vetor1[TF], int vetor2[TF], int vetor3[TF]){
	int i;
	
	printf("\n\n<<Resultado da multiplicacao>>");
	for (i = 0; i < TF; i++){
		vetor3[i] = vetor1[i] * vetor2[i];
		printf("\nVetor[%d]: %d", i, vetor3[i]);
	}
}


void main(){
	int vetor1[TF], vetor2[TF], vetor3[TF];
	carregar_vetor(vetor1, vetor2);
	exibir_vetor(vetor1, vetor2, vetor3);
	
}
