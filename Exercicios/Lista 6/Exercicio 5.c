#include <stdio.h>
#include <conio.h>

int calcular_categoria(int idade){
	
	int categoria;
	if(idade >= 5 && idade <= 7){
		categoria = 1;
		return categoria;
	}
	else
		if(idade >= 8 && idade <= 10){
			categoria = 2;
			return categoria;
		}
	
}

void main(){
	int idade;
	printf("<<Defina categoria do nadador>>\n\n");
	
	printf("Informe sua idade: ");
	scanf("%d", &idade);
	
	idade = calcular_categoria(idade);
	printf("Categoria: %d", idade);
}
