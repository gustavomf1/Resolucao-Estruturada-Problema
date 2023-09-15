#include <stdio.h>
#include <conio.h>

#define TF 10

void carregar_vetor(int vetor[TF]){
	int i;
	printf("\n\n<<<Carregar Vetor>>>\n\n");
	for (i = 0; i < TF; i++){
		printf("Informe Vetor[%d]: ", i);
		scanf("%d", &vetor[i]);
	}
}

void exibir_vetor(int vetor[TF],int vetor_par[5],int vetor_imp[5]){
	int i, ii = 0, iii = 0;
	float media = 0;
	printf("\n\n<<<Vetor par>>>\n\n");
	for (i = 0; i < TF; i++){	
		if (vetor[i] % 2 == 0){
			vetor_par[ii] = vetor[i];
			printf("\nVetor_par[%d]: %d", ii, vetor_par[ii]);		
			ii++;
			if (ii > 4){
				printf("\n\nVetor cheio");
				break;
			}
		}
		
		
	}
	
	printf("\n\n<<<Vetor Impar>>>");
	for (i = 0; i < TF; i++){	
		if (vetor[i] % 2 == 1){
			vetor_imp[iii] = vetor[i];
			printf("\nVetor_imp[%d]: %d", iii, vetor_imp[iii]);		
			iii++;
			if (iii > 4){
				printf("\n\nVetor cheio");
				break;
			}
		}
	}
}

void main(){
	int vetor[TF], vetor_par[5], vetor_imp[5];
	carregar_vetor(vetor);
	exibir_vetor(vetor, vetor_par, vetor_imp);
}
