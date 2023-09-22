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
	
	
	printf("\n\n<<Vetores ajustados para valores pares>>");
	for (i = 0; i < TF; i++){	
		if (vetor[i] % 2 == 1){
			if(vetor[i-1] % 2 == 0){
				vetor[i] = vetor[i-1];
			}
			else
				if (vetor[i-2] % 2 == 0){
					vetor[i] = vetor[i-2];
				}
				else
					if (vetor[i-3] % 2 == 0){
						vetor[i] = vetor[i-3];
				}
					else
						if (vetor[i-4] % 2 == 0){
							vetor[i] = vetor[i-4];
					}
		}
		printf("\nVetor[%d]: %d", i, vetor[i]);	
	}
	
}

void main(){
	int vetor[TF];
	carregar_vetor(vetor);
	exibir_vetor(vetor);
}
