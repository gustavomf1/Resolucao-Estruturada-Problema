#include <stdio.h>
#include <conio.h>

#define TF 5

void carregar_vetor(int vetor_notas[TF]){
	int i;
	printf("\n\n<<<Carregar Vetor>>>\n\n");
	for (i = 0; i < TF; i++){
		printf("Informe sua nota[%d]: ", i);
		scanf("%d", &vetor_notas[i]);
	}
}

void exibir_media(int vetor_notas[TF]){
	float media;
	media = (vetor_notas[0] + vetor_notas[1] + vetor_notas[2] + vetor_notas[3] + vetor_notas[4]) / 5;
	
	printf("Media: %f", media);
}

void main(){
	int vetor_notas[TF];
	carregar_vetor(vetor_notas);
	exibir_media(vetor_notas);
}
