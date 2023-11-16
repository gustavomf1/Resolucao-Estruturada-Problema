#include <stdio.h>
#include <conio.h>

#define TF 3

struct imoveis{
	char nome[100];
	float mt_constru;
	float mt_terreno;
	float valor;
	int tipo;
};

void carregar_vetor(struct imoveis reg_im[TF]){
	int i;
	
	printf("\n\n<<<Carregar vetor>>");
	
	for (i = 0; i < TF; i++){
		printf("\n\n<<Registro[%d]>>", i);
		
		fflush(stdin);
		printf("\nInforme o nome: ");
		gets(reg_im[i].nome);
		
		printf("\nInforme a metragem de construcao: ");
		scanf("%f", &reg_im[i].mt_constru);
		
		printf("\nInforme a metragem de terreno: ");
		scanf("%f", &reg_im[i].mt_terreno);
		
		printf("\nInforme o valor: ");
		scanf("%f", &reg_im[i].valor);
		
		do{
			printf("Informe o tipo(1 = residencial ou 2 = comercial): ");
			scanf("%d", &reg_im[i].tipo);
		}while(reg_im[i].tipo != 1 && reg_im[i].tipo != 2);
	}
	
}

void exibir_vetor(struct imoveis reg_im[TF]){
	int i, b = 0, c = 0;
	
	printf("\n\n<<Exibir vetor>>");
	
	for(i = 0; i < TF; i++){
		printf("\n\n<<Registro[%d]>>", i);
		
		printf("\nNome: %s", reg_im[i].nome);
		
		printf("\nMetragem de construcao: %0.2f", reg_im[i].mt_constru);
		
		printf("\nMetragem de terreno: %0.2f", reg_im[i].mt_terreno);
		
		printf("\nValor: %0.2f", reg_im[i].valor);
		
		printf("\nTipo: %d", reg_im[i].tipo);
		
		if(reg_im[i].tipo == 1){
			b++;
		}
		else
			if(reg_im[i].tipo == 2){
				c++;
			}
	}
	
	printf("\n\n<<Exibir quantidade de imoveis de cada tipo>>");
	
	printf("\nQuantidade de tipo 1: %d", b);
	printf("\nQuantidade de tipo 2: %d", c);
}

float media_valor(struct imoveis reg_im[TF], float media){
	int i;
	float soma = 0;
	
	for(i = 0; i < TF; i++){
		soma += reg_im[i].valor;
	}
	
	media = soma / TF;
	
	return media;
	
}

void acima_media(struct imoveis reg_im[TF], float media){
	int i;
	
	printf("<<\n\nImoveis com valores acima da media, metragem de construcao acima de 100 e sao tipo comercial>>");
	
	for (i = 0; i < TF; i++){
		if(reg_im[i].valor > media && reg_im[i].mt_constru > 100 && reg_im[i].tipo == 2){
			printf("\nImovel: %s", reg_im[i].nome);
		}
	}
}

void main(){
	struct imoveis reg_im[TF];
	float media = 0;
	
	carregar_vetor(reg_im);
	exibir_vetor(reg_im);
	printf("\n\nA media de valores dos imoveis lidos: %0.2f", media_valor(reg_im, media));
	acima_media(reg_im, media);
	
}
