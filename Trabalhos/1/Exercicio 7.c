#include <stdio.h>
#include <conio.h>


void proc_media(float n1, float n2, float *media){
	
	*media = (n1 + n2) / 2;
	printf("Media: %0.2f", *media);	
}

void main(){
	float n1, n2, media, valor;
	
	printf("Escreva sua nota1: ");
	scanf("%f", &n1);
	
	printf("Escreva sua nota2: ");
	scanf("%f", &n2);
	
	proc_media(n1, n2, &media);
}
