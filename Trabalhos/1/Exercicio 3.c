#include <stdio.h>
#include <conio.h>

int calcular_soma(int n1, int n2, int n3) {
    int soma;
    soma = n1 + n2 + n3;
    return soma;
}

int calcular_media(int n1, int n2, int n3) {
    int media;
    media = (n1 + n2 + n3) / 3;
    return media;
}

int calcular_maior(int n1, int n2, int n3) {
    int maior;
    
    if(n1 > n2 && n1 > n3){
    	maior = n1;
	}
	
	if(n2 > n1 && n2 > n3){
    	maior = n2;
	}
	if(n3 > n1 && n3 > n2){
		maior = n3;
	}
    
    return maior;
}

int calcular_menor(int n1, int n2, int n3) {
    int menor;
    
    if(n1 < n2 && n1 < n3){
    	menor = n1;
	}
	
	if(n2 < n1 && n2 < n3){
    	menor = n2;
	}
	if(n3 < n1 && n3 < n2){
		menor = n3;
	}
    
    return menor;
}

int main() {
    int n1, n2, n3, soma, media, maior, menor;

    printf("Escreva o valor 1: ");
    scanf("%d", &n1);

    printf("Escreva o valor 2: ");
    scanf("%d", &n2);

    printf("Escreva o valor 3: ");
    scanf("%d", &n3);

    soma = calcular_soma(n1, n2, n3);
    printf("Soma: %d\n", soma);

    media = calcular_media(n1, n2, n3);
    printf("Media: %d\n", media);
    
    maior = calcular_maior(n1, n2, n3);
    printf("Maior: %d\n", maior);
    
    menor = calcular_menor(n1, n2, n3);
    printf("Menor: %d\n", menor);
    

}
