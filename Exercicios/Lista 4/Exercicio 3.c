#include <stdio.h>
#include <conio.h>

// 3 - Escreva um algoritmo que tenha em seu programa principal a exibi��o de um menu de op��es conforme abaixo:
//1 - Calcular Idade
//2 - M�dia de 4 Notas
//3 - Multiplica��o de 2 N�mero
//4 - Divis�o de 2 N�mero
//5 - Sair

int calcular_idade(){
	int aa, an, idade;
	system("cls");
	printf("Digite o ano que nasceu: ");
	scanf("%d", &an);
	
	aa = 2023;
	idade = aa - an;
	return idade;
}

int menu(){
	int opcao, retorno;
	do{
		system("cls");
		printf("Informe a Opcao: ");
		printf("\n1 - Calcular Idade: ");
		printf("\n2 - Media de 3 Notas: ");
		printf("\n3 - Maior Numero: ");
		printf("\n4 - Menor Numero: ");
		printf("\n5 - Sair: ");
		printf("\nInforme a Opcao: ");
		scanf("%d", &opcao);
		
		if(opcao == 1){
			calcular_idade();
			retorno = calcular_idade();
		}
		else
			if(opcao == 2){
				
			}
	}while(opcao != 5);
}

void main(){
	menu();	
	
}
