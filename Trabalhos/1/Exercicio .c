#include <stdio.h>
#include <conio.h>


int calcular_soma(int n1, int n2){
	int soma;
	soma = n1 + n2;
	return soma;
}

int calcular_sub(int n1, int n2){
	int sub;
	sub = n1 - n2;
	return sub;
}

float calcular_div(float n1, float n2){
	float div;
	div = n1 / n2;
	return div;
}

int calcular_mult(int n1, int n2){
	int mult;
	mult = n1 * n2;
	return mult;
}

void main(){
	int opcao, n1, n2, resultado, soma, sub, mult;
	float div;
	do{
		printf("\nInforme a Opcao: ");
		printf("\n1 - Calcular Soma: ");
		printf("\n2 - Calcular subtracao: ");
		printf("\n3 - Calcular divisao: ");
		printf("\n4 - Calcular multiplicacao: ");
		printf("\n5 - Sair: ");
		scanf("%d", &opcao);
		
		if(opcao == 1){
			system("cls");
			soma = calcular_soma(10, 10);
			printf("\nSoma: %d", soma);
		}
		else
			if(opcao == 2){
				system("cls");
				sub = calcular_sub(5, 2);
				printf("Subtracao: %d", sub);	
			}
			else
				if(opcao == 3){
					system("cls");
					div = calcular_div(10, 2);
					printf("Divisao: %0.2f", div);	
				}
				else
					if(opcao == 4){
						system("cls");
						mult = calcular_mult(10, 10);
						printf("Multiplicacao: %d", mult);	
				}
				system("\npause");
	}while(opcao != 5);
}
