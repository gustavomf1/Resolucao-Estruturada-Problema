#include <stdio.h>
#include <conio.h>


int calcular_soma(int a, int b){
	int soma;
	soma = n1 + n2;
	return soma;
}

int calcular_sub(int a, int b){
	int sub;
	sub = n1 - n2;
	return sub;
}

float calcular_div(float a, float b){
	float div;
	div = n1 / n2;
	return div;
}

int calcular_mult(int a, int b){
	int mult;
	mult = n1 * n2;
	return mult;
}

void main(){
	int opcao, a, b, resultado, soma, sub, mult;
	float div;
	do{
			printf("Digite o n1: ");
			scanf("%d", &n1);
			
			printf("Digite o n2: ");
			scanf("%d", &n2);
		
		if(opcao == 1){
			system("cls");
			
			soma = calcular_soma(n1, n2);
			printf("\nSoma: %d", soma);
		}
		else
			if(opcao == 2){
				system("cls");
				
				printf("Digite o n1: ");
				scanf("%d", &n1);
			
				printf("Digite o n2: ");
				scanf("%d", &n2);
				
				sub = calcular_sub(n1, n2);
				printf("Subtracao: %d", sub);	
			}
			else
				if(opcao == 3){
					system("cls");
					
					printf("Digite o n1: ");
					scanf("%d", &n1);
			
					printf("Digite o operador: ");
					scanf("%d", &n2);
					
					div = calcular_div(n1, n2);
					printf("Divisao: %0.2f", div);	
				}
				else
					if(opcao == 4){
						system("cls");
						
						printf("Digite o n1: ");
						scanf("%d", &n1);
					
						printf("Digite o n2: ");
						scanf("%d", &n2);
						
						mult = calcular_mult(n1, n2);
						printf("Multiplicacao: %d", mult);	
				}
				
				
				system("\npause");
	}while(opcao != 5);
}
