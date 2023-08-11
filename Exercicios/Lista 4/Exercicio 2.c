#include <stdio.h>
#include <conio.h>

//2 - Escreva uma função que leia 4 números, após a leitura multiplique todos e retorne o resultado. Está função deverá ser 
//chamada através do programa principal. Exibir conteúdo retornado.

int mult_quatro_numeros(){
	int n1, n2, n3, n4, mult;
	printf("Informe numero1: ");
	scanf("%d", &n1);
	printf("Informe numero2: ");
	scanf("%d", &n2);
	printf("Informe numero3: ");
	scanf("%d", &n3);
	printf("Informe numero4: ");
	scanf("%d", &n4);
	mult = n1 * n2 * n3 * n4;
	return mult;	
}

void main(){
	int mult;
	mult = mult_quatro_numeros();
	printf("Soma: %d", mult);
}
