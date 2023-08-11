#include <stdio.h>
#include <conio.h>

//Escreva um algoritmo que tenha em seu programa principal a exibição de um menu de opções conforme abaixo:
//1 - Calcular Idade
//2 - Média de 3 Notas
//3 - Maior Número
//4 - Menor Número
//5 - Sair

void calcular_idade(){
	system("cls");
	int aa, an, idade;
	aa = 2023;
	an = 1950;
	printf("\n<<Calculo da idade>>");
	idade = aa - an;
	printf("\nIdade do usuario: %d", idade);	
}

void menu(){
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
	menu();
}
