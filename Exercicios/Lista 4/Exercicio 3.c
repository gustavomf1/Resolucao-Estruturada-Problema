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
	printf("\n<<Calcule sua idade>>");
	printf("\nDigite o ano que nasceu: ");
	scanf("%d", &an);
	
	aa = 2023;
	idade = aa - an;
	return idade;
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
	return media;
}

int mult_numeros(){
	int n1, n2, mult;
	system("cls");
	printf("Digite o n1: ");
	scanf("%d", &n1);
	
	printf("Digite o n2: ");
	scanf("%d", &n2);
	
	mult = n1 * n2;
	return mult;
}

float div_numeros(){
	
	float div, n1, n2;
	printf("Digite o n1: ");
	scanf("%f", &n1);
	
	printf("Digite o n2: ");
	scanf("%f", &n2);
	
	div = n1 / n2;
	return div;
}
void menu(){
	int opcao, idade, media, mult;
	float div;
	do{
		system("cls");
		printf("\nMenu de Opcao: ");
		printf("\n1 - Calcular Idade: ");
		printf("\n2 - Media de 4 Notas: ");
		printf("\n3 - Multiplicação de 2 Número: ");
		printf("\n4 - Divisão de 2 Número: ");
		printf("\n5 - Sair: ");
		printf("\nInforme a Opcao: ");
		scanf("%d", &opcao);
		
		switch(opcao){
			case 1:
				//idade = calcular_idade();
				//printf("\nidade: %d", idade);
				
				printf("\nidade: %d", calcular_idade());
				break;
			case 2:
				media = calcular_media();
				printf("Media: %d", media);
				break;
			case 3:
				mult = mult_numeros();
				printf("Multiplicacao: %d", mult);
				break;
			case 4:
				div = div_numeros();
				printf("Divsao de 2 numeros: %0.2f", div);
				break;
			case 5:
				printf("\nPrograma finalizado!");
				break;
			default:
				system("cls");
				printf("\n\nOpcao invalida!");
		}
		printf("\n\n");
		system("\npause");
	}while(opcao != 5);
}

void main(){
	int retorno;
	menu();	
}
