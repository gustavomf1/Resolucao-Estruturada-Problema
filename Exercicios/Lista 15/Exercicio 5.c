#include <stdio.h>
#include <conio.h>

#define TF 1

struct apicultor {  
		int codigo;;
		char regiao[50];
		char estado[50];
		int quali;
		int quant_abelha;
	};

void carregar_registro(struct apicultor reg_apicultor[TF]){
	int i;
	//leitura
	printf("\n<<<Leitura>>>");
	for(i=0; i<TF; i++){
		printf("\n\nRegistro[%d]", i);
		
		printf("\nInforme o codigo: ");
		scanf("%d", &reg_apicultor[i].codigo);
		
		printf("\nInforme a regiao: ");
		fflush(stdin);
		gets(reg_apicultor[i].regiao);
		
		printf("\nInforme a estado: ");
		fflush(stdin);
		gets(reg_apicultor[i].estado);
		
		do{
			printf("\nInforme a qualificacao(1. Forte 2. Medio 3. Fraco): ");
			scanf("%d", &reg_apicultor[i].quali);
		}while(reg_apicultor[i].quali != 1 && reg_apicultor[i].quali != 2 && reg_apicultor[i].quali != 3);
		
		printf("\nInforme a quantidade de abelha: ");
		scanf("%s", &reg_apicultor[i].quant_abelha);
		
	}	
}

void exibir_registro(struct apicultor reg_apicultor[TF]){
	int i;
	//exibição
	printf("\n\n<<<Exibicao>>>");
	for(i=0; i<TF; i++){
		printf("\n\nRegistro[%d]", i);
		
		printf("\nCodigo: %d", reg_apicultor[i].codigo);
		
		printf("\nRegiao: %s", reg_apicultor[i].regiao);
		
		printf("\nEstado: %s", reg_apicultor[i].estado);
		
		printf("\nQualificacao: %d", reg_apicultor[i].quali);
		
		printf("\nQuantidade de abelha: %d", reg_apicultor[i].quant_abelha);
	}
}

void calcular_media(struct apicultor reg_apicultor[TF]){
	int i, cont = 0;
	float media;
	
	printf("\n\n<<Calcular media Paginas>>");
	for(i=0; i<TF; i++){
		
	}	
}

main(){
	{
		struct apicultor reg_apicultor[TF]; 
		carregar_registro(reg_apicultor);	
		exibir_registro(reg_apicultor);
		calcular_media(reg_apicultor);	
	} 
}
