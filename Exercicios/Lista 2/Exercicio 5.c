#include <stdio.h>
#include <conio.h>

//5 - Escreva um procedimento que leia 4 n�meros, ap�s a leitura multiplique todos e 
//exibir o resultado. Este procedimento 
//dever� ser chamado atrav�s do programa principal.

void mult(){
	int n1, n2, n3, n4, multi;
	printf("Escreva seu numero1: ");
	scanf("%d", &n1);
	
	printf("Escreva seu numero2: ");
	scanf("%d", &n2);
	
	printf("Escreva seu numero3: ");
	scanf("%d", &n3);
	
	printf("Escreva seu numero4: ");
	scanf("%d", &n4);
	
	multi = n1 * n2 * n3 * n4;
	
	printf("Soma dos numeros: %d", multi);		
}

void main(){
	mult();
}
