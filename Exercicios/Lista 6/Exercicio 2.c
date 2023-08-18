#include <stdio.h>
#include <conio.h>

int calcular_idade(int aa, int an){
	int idade;
	idade = aa - an;
	return idade;
}

void main(){
	int idade, aa, an;
	printf("<<idade>>\n\n");
	
	printf("Informe o ano atual: ");
	scanf("%d", &aa);
	
	printf("Informe o ano de nascimento: ");
	scanf("%d", &an);
	
	idade = calcular_idade(aa, an);
	printf("Idade: %d", idade);
}

