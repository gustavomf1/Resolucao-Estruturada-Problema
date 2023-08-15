#include <stdio.h>
#include <conio.h>

// 3 - Escreva um algoritmo que tenha em seu programa principal a exibição de um menu de opções conforme abaixo:
//1 - Calcular Idade
//2 - Média de 4 Notas
//3 - Multiplicação de 2 Número
//4 - Divisão de 2 Número
//5 - Sair

int calcular_idade(){
	int aa, an, idade;
	system("cls");
	printf("Digite o ano que nasceu: ");
	scanf("%d", &an);
	
	aa = 2023;
	idade = aa - an;
	printf("\nEsta eh sua idade: %d", idade);
}

int calcular_media(){
	int n1, n2, n3, n4;
	float media;
	system("cls");
	printf("Digite a nota 1: ");
	scanf("%d", &n1);
	
	printf("Digite a nota 2: ");
	scanf("%d", &n2);
	
	printf("Digite a nota 3: ");
	scanf("%d", &n3);
	
	printf("Digite a nota 4: ");
	scanf("%d", &n4);
	
	media = (n1 + n2 + n3+ n4) / 4;
	printf("Media: %f", media);
}

int mult_numeros(){
	int n1, n2, mult;
	system("cls");
	printf("Digite o n1: ");
	scanf("%d", &n1);
	
	printf("Digite o n2: ");
	scanf("%d", &n2);
	
	mult = n1 * n2;
	printf("Resultado da multiplicacao: %d", mult);
}

int div_numeros(){
	int n1, n2;
	float div;
	printf("Digite o n1: ");
	scanf("%d", n1);
	
	printf("Digite o n2: ");
	scanf("%d", n2);
	
	div = n1 / n2;
	printf("Resultado da divisao: %f", div);
}
int menu(){
	int opcao;
	do{
		printf("\nInforme a Opcao: ");
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
				calcular_media();		
			}
			else
				if(opcao == 3){
					mult_numeros();	
				}
				else
					if(opcao == 4){
						div_numeros();	
					}
	}while(opcao != 5);
}

void main(){
	int retorno;
	menu();	
}
