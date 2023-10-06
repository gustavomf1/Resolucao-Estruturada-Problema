#include <stdio.h>
#include <conio.h>

#define TC 4 //TC vai definir o tamanho das colunas
#define TL 4 //TL vai definir o tamanho das linhas

void carregar_matriz(int mat[TL][TC]){
	int l, c, soma = 0;
	for(l=0;l<TL;l++){ //este for, percorre as linhas
		for(c=0;c<TC;c++){ //este for, percorre as colunas
			soma += 10;
			mat[l][c] = soma; //para acessar a matriz, utilizar MATRIZ[LINHA][COLUNA]
		}	
	}	
}

void exibir_matriz(int mat[TL][TC]){
		int l, c;
		for(l=0;l<TL;l++){ //este for, percorre as linhas
			for(c=0;c<TC;c++){ //este for, percorre as colunas
			printf("%d |", mat[l][c]); //para acessar a matriz, utilizar MATRIZ[LINHA][COLUNA]
			}
			printf("\n");	
		}		
}

void contar_maior(int mat[TL][TC]){
	int l, c, x, y, maior = 0;
	for(l=0;l<TL;l++){ //este for, percorre as linhas
		for(c=0;c<TC;c++){ //este for, percorre as colunas
			
			if (l == 0 && c == 0) {
				x = l;
				y = c;
				maior = mat[l][c];
			}
			else
				if (mat[l][c] > maior){
					x = l;
					y = c;
				}
		}	
	}
	
	printf("O maior numero esta na localizacao Matriz[%d][%d]", x, y);
}

void main(){
	int mat[TL][TC];
	carregar_matriz(mat);
	exibir_matriz(mat);
	contar_maior(mat);
}

