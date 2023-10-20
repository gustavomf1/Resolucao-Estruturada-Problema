#include <stdio.h>
#include <conio.h>

#define TF 2

struct dados_aluno {  
		float media; 
		int idade; 
	};

void carregar_registro(struct dados_aluno reg_aluno[TF]){
	int i;
	//leitura
	printf("\n<<<Leitura>>>");
	for(i=0; i<TF; i++){
		printf("\n\nRegistro[%d]", i);
		
		printf("\nInforme a Media: : ");
		scanf("%f", &reg_aluno[i].media);
		
		printf("Informe a Idade: : ");
		scanf("%d", &reg_aluno[i].idade);
	}	
}

void exibir_registro(struct dados_aluno reg_aluno[TF]){
	int i;
	//exibição
	printf("\n\n<<<Exibicao>>>");
	for(i=0; i<TF; i++){
		printf("\n\nRegistro[%d]", i);
		
		printf("\nMedia: %0.2f", reg_aluno[i].media);
		
		printf("\nIdade: %d", reg_aluno[i].idade);
	}
}

main() 
{
	struct dados_aluno reg_aluno[TF]; 
	carregar_registro(reg_aluno);	
	exibir_registro(reg_aluno);	
} 
