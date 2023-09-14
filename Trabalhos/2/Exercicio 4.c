#include <stdio.h>
#include <conio.h>

#define TF 3

void carregar_vetor(int vetor[TF]){
	int i;
	printf("\n\n<<<Carregar Vetor>>>\n\n");
	for (i = 0; i < TF; i++){
		printf("Informe Vetor[%d]", i);
		scanf("%d", &vetor[i]);
	}
}

void exibir_vetor(int vetor[TF]){
	int i;
	float media = 0;
	printf("\n\n<<<Exibir vetores>>>\n\n");
	for (i = 0; i < TF; i++){
		printf("\nVetor[%d]: %d", i, vetor[i]);
		media += vetor[i];
	}
	
	media /= TF;
	printf("\nMedia : %0.2f", media);
	
	if (media == vetor[0]){
		printf("\nMedia eh igual a posicao 0!");
	}
	
	if (media == vetor[1]) {
		printf("\nMedia eh igual a posicao 1!");
	}
	
	if (media == vetor[2]){
		printf("\nMedia eh igual a posicao 2!");
	}
}

void exibir_media(int vetor[TF]){
	
}

void main(){
	int vetor[TF];
	carregar_vetor(vetor);
	exibir_vetor(vetor);
	exibir_media(vetor);
}
