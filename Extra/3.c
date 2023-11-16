#include <stdio.h>
#include <conio.h>

#define TL 3
#define TC 3


void carregar_matriz(int mat[TL][TC]) {
	int l, c, soma = 0;
	
	for (l = 0; l < TL; l++){
		for(c = 0; c < TC; c++){
			soma += 10;
			mat[l][c] = soma;
		}
	}
}


void exibir_matriz(int mat[TL][TC]){
	int l, c;
	
	for(l = 0; l < TL; l++){
		for(c = 0; c < TL; c++){
			printf("%d |", mat[l][c]);
		}
		printf("\n");
			
	}
}

void soma_total(int mat[TL][TC]){
	int l, c, soma = 0;
	
	for (l = 0; l < TL; l++){
		for(c = 0; c < TC; c++){
			soma += mat[l][c];
		}
	}
	printf("\n\nSoma total da matriz: %d", soma);
}

void maior_menor(int mat[TL][TC]){
	int l, c, maior = 0, menor = 0;
	
	printf("\n\n<<Maior e menor elemento da matriz>>");
	
	for (l = 0; l < TL; l++){
		for(c = 0; c < TC; c++){
			if (l == 0 && c == 0){
				maior = mat[l][c];	
			}
			
			if(mat[l][c] > maior){
				maior = mat[l][c];
			}
		}
	}
	
	for (l = 0; l < TL; l++){
		for(c = 0; c < TC; c++){
			if (l == 0 && c == 0){
				menor = mat[l][c];	
			}
			
			if(mat[l][c] < menor){
				menor = mat[l][c];
			}
		}
	}
	
	printf("\nMaior: %d", maior);
	printf("\nMenor: %d", menor);
}

void media_elementos(int mat[TL][TC]){
	int i, l, c, soma = 0;
	float media;
	
	for (l = 0; l < TL; l++){
		for(c = 0; c < TC; c++){
			soma += mat[l][c];	
		}
	}
	
	i = TL * TC;
	
	media = soma / i;
	
	printf("\n\nMedia da matriz: %0.2f", media);
}

void main(){
	int mat[TL][TC];
	
	carregar_matriz(mat);
	exibir_matriz(mat);
	soma_total(mat);
	maior_menor(mat);
	media_elementos(mat);
}

