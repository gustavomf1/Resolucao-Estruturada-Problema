#include <stdio.h>
#include <conio.h>

// 3 - Escreva um algoritmo que tenha em seu programa principal a exibi��o de um menu de op��es conforme abaixo:
//1 - Calcular Idade
//2 - M�dia de 4 Notas
//3 - Multiplica��o de 2 N�mero
//4 - Divis�o de 2 N�mero
//5 - Sair

int menu(){
	int opcao;
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
		}
		else
			if(opcao == 2){
				
			}
	}while(opcao != 5);
}


void main(){
		
}
