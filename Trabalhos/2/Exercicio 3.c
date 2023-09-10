#include <stdio.h>
#include <conio.h>

void carregar_vetor(float vetor[int vl]){
	int i;
	printf("\n\n<<<Carregar Vetor>>>\n\n");
	
	for (i = 0; i <= 5; i++){
		printf("\n\n<<Digite valores>>\n\n");
		printf("Informe Vetor[%d]", i);
		scanf("%f", &vetor[i]);
	}
}

void exibir_vetor(float vetor[]){
	}


void main(){
	int vl;
	printf("Quantos valores deseja digitar: ");
	scanf("%d", &vl);
	
	
	float vetor[vl];
	
	carregar_vetor(vetor);
	exibir_vetor(vetor);
}
