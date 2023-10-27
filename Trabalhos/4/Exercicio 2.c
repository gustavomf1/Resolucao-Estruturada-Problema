#include <stdio.h>
#include <conio.h>
#include <string.h>

#define TF 2

struct alunos{
	char nome[100];
	int nr_faltas;
	float nota1;
	float nota2;
	float media;
};

void carregar_registro(struct alunos reg_cand[TF]){
	int i;
	printf("\n<<Informe dados do Cadastro das Candidatas>>");
	for(i=0; i<TF; i++){
		printf("\n\n<<Registro[%d]", i);
		
		fflush(stdin);
		printf("\n\nInforme o nome: ");
		gets(reg_cand[i].nome);
		
		printf("\nInforme numero de faltas: ");
		scanf("%d", &reg_cand[i].nr_faltas);
		
		printf("\nInforme o Nota 1: ");
		scanf("%f", &reg_cand[i].nota1);
		
		printf("\nInforme o Nota 2: ");
		scanf("%f", &reg_cand[i].nota2);	
		
		reg_cand[i].media = (reg_cand[i].nota1 + reg_cand[i].nota2) / 2;
	}
}

void exibir_registro(struct alunos reg_cand[TF]){
	int i;
	printf("\n\n<<Exibindo Cadastros Realizados>>", i);
	
	for(i=0; i<TF; i++){
		printf("\n\n<<Registro[%d]>>", i);
		
		printf("\nNome: %s", reg_cand[i].nome);
		
		printf("\nNumero de faltas: %d", reg_cand[i].nr_faltas);
		
		printf("\nNota 1: %0.f", reg_cand[i].nota1);
		
		printf("\nNota 2: %0.f", reg_cand[i].nota2);
		
		printf("\nMedia: %0.2f", reg_cand[i].media);
	}
}

void maior_media(struct alunos reg_cand[TF]){
	int i;
	float maior_media;
	char maior_nome[50];
	
	for(i=0; i<TF; i++){
		if(i == 0){
			maior_media = reg_cand[i].media;
			strcpy(maior_nome, reg_cand[i].nome);
		}
		else
			if(reg_cand[i].media > maior_media){
				maior_media = reg_cand[i].media;
				strcpy(maior_nome, reg_cand[i].nome);
			}
	}	
	
	printf("\n\nO aluno %s teve a maior nota da sala: %0.2f", maior_nome, maior_media);
}

void menor_media(struct alunos reg_cand[TF]){
	int i;
	float menor_media;
	char menor_nome[50];
	
	for(i=0; i<TF; i++){
		if(i == 0){
			menor_media = reg_cand[i].media;
			strcpy(menor_nome, reg_cand[i].nome);
		}
		else
			if(reg_cand[i].media < menor_media){
				menor_media = reg_cand[i].media;
				strcpy(menor_nome, reg_cand[i].nome);
			}
	}	
	
	printf("\n\nO aluno %s teve a maior nota da sala: %0.2f", menor_nome, menor_media);
}


void main(){
	struct alunos reg_cand[TF];
	
	carregar_registro(reg_cand);	
	exibir_registro(reg_cand);
	maior_media(reg_cand);
	menor_media(reg_cand);
	
}
