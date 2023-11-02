#include <stdio.h>
#include <conio.h>
#include <string.h>

#define TF 2

struct candidatos{
	char nome[100];
	float salario;
	int CPF;
	int idade;
	int sexo; //1-Masculino; 2-Feminimo
};

void carregar_registro(struct candidatos reg_cand[TF]){
	int i;
	printf("\n<<Informe dados do Cadastro das Candidatas>>");
	for(i=0; i<TF; i++){
		printf("\n\n<<Registro[%d]", i);
		
		fflush(stdin);
		printf("\n\nInforme o nome: ");
		gets(reg_cand[i].nome);
		
		printf("\nInforme o salario: ");
		scanf("%f", &reg_cand[i].salario);
		
		printf("\nInforme o CPF: ");
		scanf("%d", &reg_cand[i].CPF);
		
		printf("\nInforme a idade: ");
		scanf("%d", &reg_cand[i].idade);
		
		do{
			printf("\nInforme o sexo(1 = Masculino e 2 = Feminino): ");
			scanf("%d", &reg_cand[i].sexo);
		}while(reg_cand[i].sexo != 1 && reg_cand[i].sexo != 2);
	}
}

void exibir_registro(struct candidatos reg_cand[TF]){
	int i;
	printf("\n\n<<Exibindo Cadastros Realizados>>", i);
	
	for(i=0; i<TF; i++){
		printf("\n\n<<Registro[%d]>>", i);
		
		printf("\nNome: %s", reg_cand[i].nome);
		
		printf("\nSalario: %f", reg_cand[i].salario);
		
		printf("\nCPF: %d", reg_cand[i].CPF);
		
		printf("\nidade: %d", reg_cand[i].idade);
		
		printf("\nSexo: %d", reg_cand[i].sexo);
	}
}

int calcular_media(struct candidatos reg_cand[TF]){
	int i;
	float soma_sal = 0, media = 0;
	
	for(i=0; i<TF; i++){
		soma_sal += reg_cand[i].salario;
	}
	
	media = soma_sal / (TF);
		
	return media; 
}

int maior_sal(struct candidatos reg_cand[TF]){
	int i;
	float maior;
	
	for(i=0; i<TF; i++){
		if (i == 0){
			maior = reg_cand[i].salario;
		}
		else
			if(reg_cand[i].salario > maior){
				maior = reg_cand[i].salario;
			}
	}
		
	return maior; 
}

int qnt_fem(struct candidatos reg_cand[TF]){
	int i;
	float fem;
	
	for(i=0; i<TF; i++){
		if (reg_cand[i].sexo == 2){
			fem++;
		}
	}
		
	return fem; 
}

void main(){
	struct candidatos reg_cand[TF];
	
	carregar_registro(reg_cand);	
	exibir_registro(reg_cand);
	
	printf("\n\nMedia dos salarios: %d", calcular_media(reg_cand));
	printf("\n\nMaior salario: %d", maior_sal(reg_cand));
	printf("\n\nQuantidade de mulher: %d", qnt_fem(reg_cand));
}
