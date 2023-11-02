#include <stdio.h>
#include <conio.h>
#include <string.h>

#define TF 3

struct concurso{
	char nome[100];
	float altura;
	int cor_preferida;
	int cor_olhos;
};

void carregar_registro(struct concurso reg_cand[TF]){
	int i;
	printf("\n\n<<Informe os dados dos candidatos>>");
	
	for(i=0; i<TF; i++){
		printf("\n\n<<Registro[%d]>>", i);
		
		fflush(stdin);
		printf("\nInforme o nome do candidato: ");
		gets(reg_cand[i].nome);
		
		printf("\nInforme a altura do candidato: ");
		scanf("%f", &reg_cand[i].altura);
		
		do{
			printf("\nInforme cor preferida(1 = Branco, 2 = Vermelho, 3 = Amarelo, 4 = Verde): ");
			scanf("%d", &reg_cand[i].cor_preferida);
		}while(reg_cand[i].cor_preferida != 1 && reg_cand[i].cor_preferida != 2 && reg_cand[i].cor_preferida != 3 && reg_cand[i].cor_preferida != 4);
		
		do{
			printf("\nInforme cor dos olhos(1 = Castanho, 2 = Preto, 3 = Azul, 4 = Verde): ");
			scanf("%d", &reg_cand[i].cor_olhos);
		}while(reg_cand[i].cor_olhos != 1 && reg_cand[i].cor_olhos != 2 && reg_cand[i].cor_olhos != 3 && reg_cand[i].cor_olhos != 4);
	}
}

void exibir_registro(struct concurso reg_cand[TF]){
	int i;
	printf("\n\n<<Exibindo Cadastros Realizados>>", i);
	
	for(i=0; i<TF; i++){
		printf("\n\n<<Registro[%d]>>", i);
		
		printf("\nNome: %s", reg_cand[i].nome);
		
		printf("\nAltura: %0.2f", reg_cand[i].altura);
		
		printf("\nCor preferida: %d", reg_cand[i].cor_preferida);
		
		printf("\nCor dos olhos: %d", reg_cand[i].cor_olhos);
	}
}

void exibir_maior(struct concurso reg_cand[TF]){
	int i;
	char nome[100];
	float alt;
	for(i=0; i<TF; i++){
		if (i == 0){
			alt = reg_cand[i].altura;
			strcpy(nome, reg_cand[i].nome);
		}
		else
			if(reg_cand[i].altura > alt){
				alt = reg_cand[i].altura;
				strcpy(nome, reg_cand[i].nome);	
			}
	}
	
	printf("\n\nCandidato %s eh dono da altura mais alta, sendo ela %0.2f de altura!", nome, alt);
}

void exibir_menor(struct concurso reg_cand[TF]){
	int i;
	char nome[100];
	float alt;
	for(i=0; i<TF; i++){
		if (i == 0){
			alt = reg_cand[i].altura;
			strcpy(nome, reg_cand[i].nome);
		}
		else
			if(reg_cand[i].altura < alt){
				alt = reg_cand[i].altura;
				strcpy(nome, reg_cand[i].nome);	
			}
	}
	
	printf("\n\nCandidato %s eh dono da menor altura, sendo ela %0.2f de altura!", nome, alt);
}

void media_alt(struct concurso reg_cand[TF]){
	int i, acima_media = 0;
	float media = 0;
	for(i=0; i<TF; i++){
		media += reg_cand[i].altura;
	}
	
	media = media / TF;
	
		
	for(i=0; i<TF; i++){
		if(reg_cand[i].altura > media){
			acima_media++;
		}	
	}
	
	printf("\n\nMedia de altura dos candidatos: %0.2f", media);	
	printf("\n\nQuantidade de alturas acima da media: %d", acima_media);
}

void olhos_azuis(struct concurso reg_cand[TF]){
	int i, ii = 0;
	for (i=0; i<TF; i++){
		if (reg_cand[i].cor_olhos == 3) {
			ii++;	
		}
	}
	
	printf("\n\nQuantidade de candidatos com olhos azuis: %d", ii);
}

void media_cor(struct concurso reg_cand[TF]){
	int i, j = 0;
	float media = 0;
	
	for (i=0; i<TF; i++){
		if (reg_cand[i].cor_preferida == 4){
			media += reg_cand[i].altura;
			j++;
		}
	}
	
	media = media / j;
	
	printf("\n\nMedia da altura de quem prefere como cor preferida verde: %0.2f", media);
}

void main(){
	struct concurso reg_cand[TF];
	
	carregar_registro(reg_cand);
	exibir_registro(reg_cand);
	exibir_maior(reg_cand);
	exibir_menor(reg_cand);
	media_alt(reg_cand);
	olhos_azuis(reg_cand);
	media_cor(reg_cand);
}
