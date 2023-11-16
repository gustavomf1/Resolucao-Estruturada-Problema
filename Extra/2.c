#include <stdio.h>
#include <conio.h>
#include <string.h>

#define TF 2

struct motos{
	int porte;
	int cor;
	float peso;
	float pot;
};


void carregar_vetor(struct motos reg_mt[TF]){
	int i;
	
	printf("\n\n<<<Carregar vetor>>>");
	
	for (i = 0; i < TF; i++){
		printf("\n\n<<Registro[%d]>>", i);
		
		do{
			printf("\nInforme o porte(1 = Grande, 2 = Medio e 3 = Pequeno): ");
			scanf("%d", &reg_mt[i].porte);	
		}while(reg_mt[i].porte != 1 && reg_mt[i].porte != 2 && reg_mt[i].porte != 3);
		
		do{
			printf("\nInforme a cor(1 = Branca, 2 = Marrom e 3 = Preto): ");
			scanf("%d", &reg_mt[i].cor);	
		}while(reg_mt[i].cor != 1 && reg_mt[i].cor != 2 && reg_mt[i].cor != 3);
		
		
		printf("\nInforme o peso: ");
		scanf("%f", &reg_mt[i].peso);
		
		printf("\nInforme a potencia: ");
		scanf("%f", &reg_mt[i].pot);
	}
}

void exibir_vetor(struct motos reg_mt[TF]){
	int i;
	
	printf("\n\n<<<Exibir vetor>>>");
	
	for (i = 0; i < TF; i++){
		printf("\n\n<<Registro[%d]>>", i);
		
		printf("\nPorte: %d", reg_mt[i].porte);
		
		printf("\nCor: %d", reg_mt[i].cor);
		
		printf("\nPeso: %0.2f", reg_mt[i].peso);
		
		printf("\nPotencia: %0.2f", reg_mt[i].pot);
	}
}

int maior_potencia(struct motos reg_mt[TF]){
	int i, b = 0;
	float poten = 0;
	
	for (i = 0; i < TF; i++){
		if(i == 0 || reg_mt[i].pot > poten){
			poten = reg_mt[i].pot;
			b = i;	
		}
	}
	
	return b;
}


void main(){
	struct motos reg_mt[TF];
	
	carregar_vetor(reg_mt);
	exibir_vetor(reg_mt);
	printf("\nA moto com numero de Registro[%d] tem a maior potencia!", maior_potencia(reg_mt));
}
