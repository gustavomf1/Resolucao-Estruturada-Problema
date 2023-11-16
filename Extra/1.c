#include <stdio.h>
#include <conio.h>
#include <string.h>

#define TF 2

struct animais{
	char nome[100];
	char especie[100];
	float peso;
	int idade;
	int sexo;
};

void carregar_vetor(struct animais reg_ani[TF]){
	int i;
	
	printf("\n\n<<<Carregar Vetor>>>\n\n");
	
	for (i = 0; i < TF; i++){
		printf("\n\n<<Registro>>");
		
		fflush(stdin);
		printf("\nInforme o nome: ");
		gets(reg_ani[i].nome);
		
		fflush(stdin);
		printf("\nInforme a especie: ");
		gets(reg_ani[i].especie);
		
		printf("\nInforme o peso: ");
		scanf("%f", &reg_ani[i].peso);
		
		printf("\nInforme a idade: ");
		scanf("%d", &reg_ani[i].idade);	
		
		do{
			printf("Informe o sexo(1 = Macho e 2 = Femea): ");
			scanf("%d", &reg_ani[i].sexo);	
		}while(reg_ani[i].sexo != 1 && reg_ani[i].sexo != 2);
		
	}
}

void exibir_vetor(struct animais reg_ani[TF]){
	int i;
	
	printf("\n\n<<Exibir vetor>>\n\n");
	
	for(i = 0; i < TF; i++){
		printf("\n<<Registro[%d]>>\n", i);
		
		printf("\nNome: %s", reg_ani[i].nome);
		
		printf("\nEspecie: %s", reg_ani[i].especie);
		
		printf("\nPeso: %0.2f", reg_ani[i].peso);
		
		printf("\nIdade: %d", reg_ani[i].idade);
		
		if (reg_ani[i].sexo == 1) {
			printf("\nSexo: Macho");	
		}
		else
			printf("\nSexo: Femea");
	}
}

void media_peso(struct animais reg_ani[TF], float media){
	int i;
	
	printf("\n\n<<<Media de peso dos animais");
	
	for (i = 0; i < TF; i++){
		media += reg_ani[i].peso;
	}
	
	media = media / TF;
	
	printf("\nMedia: %0.2f", media);
}

void peso_macho(struct animais reg_ani[TF], float media){
	int i;
	
	printf("\n\n<<Animais machos acima da media>>");
	
	for (i = 0; i < TF; i++){
		if (reg_ani[i].sexo == 1){
			if (reg_ani[i].peso > media){
				printf("\nO animal %s esta acima da media!", reg_ani[i].nome);
			}	
		}
	}
}

void animal_velho (struct animais reg_ani[TF]){
	int i, idade = 0, idade_novo = 0;
	char nome[100], nome_novo[100];
	float peso = 0, peso_novo = 0;
	
	printf("\n\n<<Nome e peso dos animais mais velho e mais novo>>");
	
	for (i = 0; i < TF; i++){
			if (i == 0 || reg_ani[i].idade > idade){
				idade = reg_ani[i].idade;
				strcpy(nome, reg_ani[i].nome);
				peso = reg_ani[i].peso;
			}
	}
	
	for (i = 0; i < TF; i++){
			if (i == 0 || reg_ani[i].idade < idade_novo){
				idade_novo = reg_ani[i].idade;
				strcpy(nome_novo, reg_ani[i].nome);
				peso_novo = reg_ani[i].peso;
			}
	}
	
	printf("\n\n<<Animal mais velho>>");
	printf("\nNome: %s", nome);
	printf("\nPeso: %0.2f", peso);
	
	printf("\n\n<<Animal mais novo>>");
	printf("\nNome: %s", nome_novo);
	printf("\nPeso: %0.2f", peso_novo);
	
}

void main(){
	struct animais reg_ani[TF];
	float media = 0;
	
	carregar_vetor(reg_ani);
	exibir_vetor(reg_ani);
	media_peso(reg_ani, media);
	peso_macho(reg_ani, media);
	animal_velho(reg_ani);
	
}
