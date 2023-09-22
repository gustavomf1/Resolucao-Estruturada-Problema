#include <stdio.h>
#include <conio.h>
#include <string.h>

char *retorna_categoria(int idade){
	if (idade >= 5 && idade <= 7){
		return "Infantil A";
	}
	else
		if(idade >= 8 && idade <= 10){
			return "Infantil B";
		}
		else
			if(idade >= 11 && idade <= 13){
				return "Juvenil A";
			}
			else
				if(idade >= 14 && idade <= 17){
					return "Juvenil B";
				}
				else
					if(idade >= 18){
						return "Adulto";
					}
}


void main(){
	int idade;
	
	printf("<<Categoria>>");
	printf("\nInforme a idade: ");
	scanf("%d", &idade);
	retorna_categoria(idade);
	printf("\nCategoria >> %s", retorna_categoria(idade));
}
