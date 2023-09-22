#include <stdio.h>
#include <conio.h>
#include <string.h>

void inverter_texto(char texto[2000]){
	int i, j, fim; 
	char aux;
	fim = strlen(texto);
	for (i = 0, j = fim - 1; i < j; i++, j--){
		aux = texto[i];
		texto[i] = texto[j];
		texto[j] = aux;
	}
	
	
}


void main(){
	char texto[2000];
	
	printf("\n\n<<Nome>>");
	printf("\nInforme o nome: ");
	gets(texto);
	inverter_texto(texto);
	
	printf("Nome do aluno: %s", texto);
}
