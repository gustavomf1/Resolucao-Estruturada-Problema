#include <stdio.h>
#include <conio.h>

#define TF 5

void carregar_vetor(float vetor[TF]){
	int i;
	printf("\n\n<<<Carregar Vetor>>>\n\n");
	for (i = 0; i < TF; i++){
		printf("Informe Vetor[%d]", i);
		scanf("%f", &vetor[i]);
	}
}

void exibir_vetor(float vetor[TF]){
	int i;
	printf("\n\n<<<Exibir vetores>>>\n\n");
	for (i = 0; i < TF; i++){
		printf("\n<<Valores dos vetores>>\n");
		printf("Vetor[%d]: %0.2f", i, vetor[i]);
	}
}

void main(){
	float vetor[TF];
	carregar_vetor(vetor);
	exibir_vetor(vetor);
}
