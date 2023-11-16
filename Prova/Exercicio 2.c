#include <stdio.h>
#include <conio.h>

#define TF 3

struct barcos{
	int porte;
	int casco;
	float pot;
	float horas;
};

void carregar_vetor(struct barcos reg_bc[TF]){
	int i;
	
	printf("\n\n<<<Carregar vetor>>>");
	
	for (i = 0; i < TF; i++){
		printf("\n\n<<Registro[%d]>>", i);
		
		do{
			printf("\nInforme o porte(1 = Grande, 2 = Medio e 3 = Pequeno): ");
			scanf("%d", &reg_bc[i].porte);	
		}while(reg_bc[i].porte != 1 && reg_bc[i].porte != 2 && reg_bc[i].porte != 3);
		
		do{
			printf("\nInforme o Casco(1 = Fibra e 2 = Aluminio): ");
			scanf("%d", &reg_bc[i].casco);	
		}while(reg_bc[i].casco != 1 && reg_bc[i].casco != 2);
			
		printf("\nInforme a potencia: ");
		scanf("%f", &reg_bc[i].pot);
		
		printf("\nInforme a horas de uso do motor: ");
		scanf("%f", &reg_bc[i].horas);
	}
}

void exibir_vetor(struct barcos reg_bc[TF]){
	int i;
	
	printf("\n\n<<<Exibir vetor>>>");
	
	for (i = 0; i < TF; i++){
		printf("\n\n<<Registro[%d]>>", i);
		
		printf("\nPorte: %d", reg_bc[i].porte);
		
		printf("\nCasco: %d", reg_bc[i].casco);
		
		printf("\nPotencia: %0.2f", reg_bc[i].pot);
		
		printf("\nHoras de uso: %0.2f", reg_bc[i].horas);
	}
}

void maior_pot(struct barcos reg_bc[TF]){
	int i, b = 0;
	float poten = 0;
	
	printf("\n\n<<Barco com maior potencia>>");
	
	for (i = 0; i < TF; i++){
		if(i == 0 || reg_bc[i].pot > poten){
			poten = reg_bc[i].pot;
			b++;	
		}			
	}
	
			printf("\nPorte: %d", reg_bc[b].porte);
		
			printf("\nCasco: %d", reg_bc[b].casco);
			
			printf("\nPotencia: %0.2f", reg_bc[b].pot);
			
			printf("\nHoras de uso: %0.2f", reg_bc[b].horas);	
}

void barcos_grandes(struct barcos reg_bc[TF]){
	int i;
	
	printf("\n\n<<Barcos de grande porte e com casco de fibra>>");
	
	for (i = 0; i < TF; i++){
		if(reg_bc[i].porte == 1 && reg_bc[i].casco == 1){
		printf("\n\n<<Registro[%d]>>", i);	
			
		printf("\nPorte: %d", reg_bc[i].porte);
		
		printf("\nCasco: %d", reg_bc[i].casco);
		
		printf("\nPotencia: %0.2f", reg_bc[i].pot);
		
		printf("\nHoras de uso: %0.2f", reg_bc[i].horas);
		}
	}
	
}

void media_horas(struct barcos reg_bc[TF]){
	int i, a = 0;
	float media = 0;
	
	printf("\n\n<<Medias horas>>");
	
	for (i = 0; i < TF; i++){
		if(reg_bc[i].porte == 1){
			media += reg_bc[i].horas;	
			a++;
		}
	}
	
	media = media / a;
	
	printf("Media: %f", media);
}

void main(){
	struct barcos reg_bc[TF];
	
	carregar_vetor(reg_bc);
	exibir_vetor(reg_bc);
	maior_pot(reg_bc);
	barcos_grandes(reg_bc);
	media_horas(reg_bc);
	
}
