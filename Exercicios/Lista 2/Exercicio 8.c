#include <stdio.h>
#include <conio.h>

void calcular_idade(){
	int aa, an, idade;
	system("cls");
	printf("<<Calcular a Idade>>");
	printf("\n\nInforme o Ano Atual: ");
	scanf("%d", &aa);
	printf("Informe o Ano de Nascimento: ");
	scanf("%d", &an);
	idade = aa - an;
	printf("Idade: %d\n\n", idade);
	system("pause");
}

void menu(){
	int opcao;
	do{
		system("cls");
		printf("Informe a Opcao: ");
		printf("\n1 - Calcular Idade");
		printf("\n2 - Média de 3 Notas");
		printf("\n3 - Maior Numero");
		printf("\n4 - Menor Numero");
		printf("\n5 - Sair");
		printf("\nInforme a Opcao: ");
		scanf("%d", &opcao);	
		if(opcao == 1){
			calcular_idade();
		}
		else if(opcao == 2){
				//media_tres_notas();
			}	
	}while(opcao != 5);
}

void main(){
	menu();
}
