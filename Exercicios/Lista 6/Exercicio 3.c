#include <stdio.h>
#include <conio.h>

float calcular_media(float n1, float n2){
	float div, media;
	media = (n1 + n2) / 2;
	return media;
}

void main(){
	float media, n1, n2;
	printf("<<Media do aluno>>\n\n");
	
	printf("Informe a nota 1: ");
	scanf("%f", &n1);
	
	printf("Informe a nota2: ");
	scanf("%f", &n2);
	
	media = calcular_media(n1, n2);
	printf("Idade: %f", media);
}
