#include <stdio.h>
#include <conio.h>

float calcular_area(float l, float c){
	float area;
	area = l * c;
	return area;
}

void main(){
	float area, l, c;
	printf("<<Area do retangulo>>\n\n");
	
	printf("Informe a largura: ");
	scanf("%f", &l);
	
	printf("Informe o comprimento: ");
	scanf("%f", &c);
	
	area = calcular_area(l, c);
	printf("Area: %0.2f", area);
}
