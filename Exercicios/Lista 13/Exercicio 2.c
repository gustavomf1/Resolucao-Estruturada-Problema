#include <stdio.h>
#include <conio.h>

#define TC 3 //TC vai definir o tamanho das colunas
#define TL 3 //TL vai definir o tamanho das linhas

void carregar_matriz(int mat[TL][TC]){
	int l, c, soma = 0;
	for(l=0;l<TL;l++){ //este for, percorre as linhas
		for(c=0;c<TC;c++){ //este for, percorre as colunas
			printf("Informe Matriz[%d][%d]: ", l, c);
			scanf("%d", &mat[l][c]);
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

void numero_matriz(int mat[TL][TC]){
	int l, c, numero = 0, cont = 0;
	
	printf("\nEscreva um numero: ");
	scanf("%d", &numero);
	
	for(l=0;l<TL;l++){ //este for, percorre as linhas
		for(c=0;c<TC;c++){ //este for, percorre as colunas
			if (numero == mat[l][c]) {
				printf("\nO numero %d encontrado na posicao da Matriz[%d][%d]!", numero, l, c);
				cont++;
			}
		}	
	}
	if (cont == 0){
		printf("\nNada Econtrado!");
	}
}

void main(){
	int mat[TL][TC];
	carregar_matriz(mat);
	exibir_matriz(mat);
	numero_matriz(mat);
}
