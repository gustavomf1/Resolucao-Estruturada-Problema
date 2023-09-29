#include <stdio.h>
#include <conio.h>

#define TC 2 //TC vai definir o tamanho das colunas
#define TL 4 //TL vai definir o tamanho das linhas

void carregar_matriz(int mat[TL][TC]){
	int l, c, soma = 0;
	for(l=0;l<TL;l++){ //este for, percorre as linhas
		for(c=0;c<TC;c++){ //este for, percorre as colunas
			soma += 10;
			mat[l][c] = soma; 
		}	
	}	
}

void exibir_matriz(int mat[TL][TC]){
		int l, c;
	for(l=0;l<TL;l++){ //este for, percorre as linhas
		for(c=0;c<TC;c++){ //este for, percorre as colunas
			printf("\nMat[%d][%d] = %d", l, c, mat[l][c]); //para acessar a matriz, utilizar MATRIZ[LINHA][COLUNA]
		}	
	}		
}

void somar_matriz(int mat[TL][TC]){
	int l, c, soma = 0, l3 = 0, l1 = 0;
	float media;
	for(l=0;l<TL;l++){ //este for, percorre as linhas
		for(c=0;c<TC;c++){ //este for, percorre as colunas
			if (l == 3){
				l3 += mat[3][c];
			}
			if (l == 1){
				l1 += mat[1][c];
			}		
		}	
	}
		
	soma = l3 + l1;
	media = soma / 2;
	printf("\nSoma das linhas 3 e 1: %f", media);
	
}

void main(){
	int mat[TL][TC];
	carregar_matriz(mat);
	exibir_matriz(mat);
	somar_matriz(mat);
}
