#include <stdio.h>
#include <conio.h>


void proc_area(float largura, float comprimento, float *area){
	
	*area = largura * comprimento;
	printf("Area: %0.2f", *area);	
}

void main(){
	float largura, comprimento, area;
	
	printf("Escreva a largura: ");
	scanf("%f", &largura);
	
	printf("Escreva o comprimento: ");
	scanf("%f", &comprimento);
	
	proc_area(largura, comprimento, &area);
}
