#include <stdio.h>
#include <conio.h>

// 2.	Escreva um programa para ler as dimensões de uma cozinha retangular (comprimento, largura e altura), calcular
// e escrever a quantidade de caixas de azulejos para se colocar em 
//todas as suas paredes (considere que não será descontada a área ocupada por portas e janelas). Cada caixa de azulejos possui 1,5 m2.

void main(){
	float comp, larg, alt, area, azulejo, calculo, calculo2;
	
	printf("\nEscreva o comprimento da cozinha: ");
	scanf("%f", &comp);
	printf("\nEscreva o largura da cozinha: ");
	scanf("%f", &larg);
	printf("\nEscreva o altura da cozinha: ");
	scanf("%f", &alt);
	
	area = (alt * comp * 2) + (alt * comp * 2);
	
	calculo = alt * (comp * 2);
	calculo2 = alt * (larg * 2);
	
	azulejo = (calculo + calculo2) / 1.5;
	
	printf("Area: %0.2f", area);
	printf("\nTotal de azulejos: %0.2f", azulejo);
}
