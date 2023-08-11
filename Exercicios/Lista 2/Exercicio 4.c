#include <stdio.h>
#include <conio.h>

//4)Escreva um procedimento que leia 2 números, após 
//a leitura somar e exibir o resultado. Este procedimento deverá 
//ser chamado através do programa principal.

void soma(){
	int n1, n2, adicao;
	printf("Escreva seu numero1: ");
	scanf("%d", &n1);
	
	printf("Escreva seu numero2: ");
	scanf("%d", &n2);
	
	adicao = n1 + n2;
	
	printf("Soma dos numeros: %d", adicao);		
}

void main(){
	soma();
}
