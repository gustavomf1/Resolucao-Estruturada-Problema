#include <stdio.h>
#include <conio.h>
#include <string.h>

#define TF 2

struct candidatas{
	int nr_inscricao;
	char nome[100];
	float altura;
	float peso;
	char naturalidade[100];
	char estado[20];
	int sexo; //1-Masculino; 2-Feminimo
};

void carregar_registro(struct candidatas reg_cand[TF]){
	int i;
	printf("<<Informe dados do Cadastro das Candidatas>>");
	for(i=0; i<TF; i++){
		printf("\n\nRegistro[%d]", i);
		printf("\nInforme o Numero da Inscricao: ");
		scanf("%d", &reg_cand[i].nr_inscricao);
		fflush(stdin);
		printf("Informe o Nome da Candidata: ");
		gets(reg_cand[i].nome);
		printf("Informe a Altura: ");
		scanf("%f", &reg_cand[i].altura);
		printf("Informe a Peso: ");
		scanf("%f", &reg_cand[i].peso);
		printf("Informe a Naturalidade: ");
		fflush(stdin);
		gets(reg_cand[i].naturalidade);
		printf("Informe a Estado: ");
		fflush(stdin);
		gets(reg_cand[i].estado);
		do{
			printf("Informe o Sexo (1-M; 2-F): ");
			scanf("%d", &reg_cand[i].sexo);
		}while(reg_cand[i].sexo != 1 && reg_cand[i].sexo != 2);
	}
}

void exibir_registro(struct candidatas reg_cand[TF]){
	int i;
	printf("\n\n<<Dados Cadastrados>>");
	for(i=0; i<TF; i++){
		printf("\n\nRegistro[%d]", i);
		printf("\nNumero da Inscricao: %d", reg_cand[i].nr_inscricao);
		printf("\nNome: %s", reg_cand[i].nome);
		printf("\nAltura: %0.2f", reg_cand[i].altura);
		printf("\nPeso: %0.2f", reg_cand[i].peso);
		printf("\nNaturalidade: %s", reg_cand[i].naturalidade);
		printf("\nEstado: %s", reg_cand[i].estado);
		if(reg_cand[i].sexo == 1){
			printf("\nSexo: Masculino");
		}
		else{
			printf("\nSexo: Feminino");
		}
	}
}

void mais_alta(struct candidatas reg_cand[TF]){
	int i;
	float maior;
	char nome_maior[100];
	printf("\n\n<<Moca Mais Alta>>");
	for(i=0; i<TF; i++){
		if(i == 0){
			maior = reg_cand[i].altura;
			strcpy(nome_maior, reg_cand[i].nome);
		}
		else{
			if (reg_cand[i].altura > maior){
				maior = reg_cand[i].altura;
				strcpy(nome_maior, reg_cand[i].nome);
			}
		}
	}
	printf("\n\nA moca mais alta eh a %s e tem %0.2f de altura", nome_maior, maior);
}

void mais_leve(struct candidatas reg_cand[TF]){
	int i;
	float leve;
	char nome_leve[100];
	printf("\n\n<<Moca Mais Leve>>");
	for(i=0; i<TF; i++){
		if(i == 0){
			leve = reg_cand[i].peso;
			strcpy(nome_leve, reg_cand[i].nome);
		}
		else{
			if (reg_cand[i].peso < leve){
				leve = reg_cand[i].peso;
				strcpy(nome_leve, reg_cand[i].nome);
			}
		}
	}
	printf("\n\nA moca mais leve eh a %s e tem %0.2f de peso", nome_leve, leve);
}

void qtde_mocas(struct candidatas reg_cand[TF]){
	int i, qtde = 0;
	printf("\n\n<<Qtde de Mocas>>");
	for(i=0; i<TF; i++){
		if(reg_cand[i].sexo == 2){
			qtde++;
		}
	}
	printf("\n\nQtde de Mocas %d", qtde);
}

void main(){
	struct candidatas reg_cand[TF];
	carregar_registro(reg_cand);
	exibir_registro(reg_cand);
	mais_alta(reg_cand);
	mais_leve(reg_cand);
	qtde_mocas(reg_cand);
}
