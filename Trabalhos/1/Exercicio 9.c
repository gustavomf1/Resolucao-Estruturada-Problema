#include <stdio.h>
#include <conio.h>


void proc_idade(int idade, char *categoria){
	
	if(idade >= 5 && idade <= 7){
		*categoria = 'A';
		printf("Categoria: %s", categoria);
	}
	
	else
		if(idade >= 8 && idade <= 10){
			*categoria = 'B';
			printf("Categoria: %s", categoria);
	}
		else
			if(idade >= 11 && idade <= 13){
				*categoria = 'C';
				printf("Categoria: %s", categoria);
		}
			else
				if(idade >= 14 && idade <= 17){
					*categoria = 'D';
					printf("Categoria: %s", categoria);
			}
				else
					if(idade >= 18){
						*categoria = 'E';
						printf("Categoria: %s", categoria);
				}	
}

void main(){
	int idade;
	char categoria;
	
	printf("Digite sua idade: ");
	scanf("%d", &idade);
	
	proc_idade(idade, &categoria);
}
