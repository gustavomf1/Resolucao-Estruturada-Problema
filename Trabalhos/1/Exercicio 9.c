#include <stdio.h>
#include <conio.h>


void proc_idade(int idade, char *categoria){
	
	if(idade >= 5 || idade <= 7){
		*categoria = 'A';
		printf("Categoria: %s", *categoria);
	}
	else
		if(idade >= 8 || idade <= 10){
			*categoria = 'B';
			printf("Categoria: %s", *categoria);
		}
}

void main(){
	float idade;
	char categoria;
	
	printf("Digite sua idade: ");
	scanf("%d", &idade);
	
	proc_idade(idade, &categoria);
}
