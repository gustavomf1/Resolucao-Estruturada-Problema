#include <stdio.h>
#include <conio.h>

#define TF 2

struct habitantes {  
		int idade;;
		int sexo;
		float salario;
		int filho;
	};

void carregar_registro(struct habitantes reg_habitantes[TF]){
	int i;
	//leitura
	printf("\n<<<Leitura>>>");
	for(i=0; i<TF; i++){
		printf("\n\nRegistro[%d]", i);
		
		printf("\nInforme a idade: ");
		scanf("%d", &reg_habitantes[i].idade);
		
		do{
			printf("\nInforme a sexo: ");
			scanf("%d", &reg_habitantes[i].sexo);
		}while(reg_habitantes[i].sexo != 1 && reg_habitantes[i].sexo != 2);
		
		printf("\nInforme seu salario: ");
		scanf("%f", &reg_habitantes[i].salario);
		
		printf("\nInforme quantos filhos: ");
		scanf("%d", &reg_habitantes[i].filho);

	}	
}

void exibir_registro(struct habitantes reg_habitantes[TF]){
	int i;
	//exibição
	printf("\n\n<<<Exibicao>>>");
	for(i=0; i<TF; i++){
		printf("\n\nRegistro[%d]", i);
		
		printf("\nIdade: %d", reg_habitantes[i].idade);
		
		printf("\nSexo: %d", reg_habitantes[i].sexo);
		
		printf("\nSalario: %f", reg_habitantes[i].salario);
		
		printf("\nFilho: %d", reg_habitantes[i].filho);
	}
}

void calcular_media(struct habitantes reg_habitantes[TF]){
	int i, cont = 0;
	float media;
	
	printf("\n\n<<Calcular media Paginas>>");
	for(i=0; i<TF; i++){
		cont += reg_habitantes[i].salario;
	}	
	
	media = cont / TF;
	printf("\nMedia dos salarios : %0.2f", media);
}

main(){
	{
		struct habitantes reg_habitantes[TF]; 
		carregar_registro(reg_habitantes);	
		exibir_registro(reg_habitantes);
		calcular_media(reg_habitantes);	
	} 
}
