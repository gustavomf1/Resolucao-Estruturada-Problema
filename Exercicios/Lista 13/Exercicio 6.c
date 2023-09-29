#include <stdio.h>
#include <conio.h>

#define TC 3 //TC vai definir o tamanho das colunas
#define TL 3 //TL vai definir o tamanho das linhas

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
	
	printf("\n\n<<Matriz>>");	
	for(l=0;l<TL;l++){ //este for, percorre as linhas
		for(c=0;c<TC;c++){ //este for, percorre as colunas
			printf("\nMat[%d][%d] = %d", l, c, mat[l][c]); //para acessar a matriz, utilizar MATRIZ[LINHA][COLUNA]
		}	
	}	
}

void carregar3_matriz(int mat[TL][TC], int mat2[TL][TC], int mat3[TL][TC]){
	int l, c;
	for(l=0;l<TL;l++){ //este for, percorre as linhas
		for(c=0;c<TC;c++){ //este for, percorre as colunas
			mat3[l][c] = mat[l][c] + mat2[l][c];
		}	
	}
}


void main(){
	int mat[TL][TC]; 
	int mat2[TL][TC];
	int mat3[TL][TC];
	
	carregar_matriz(mat);
	carregar_matriz(mat2);
	exibir_matriz(mat);
	exibir_matriz(mat2);
	carregar3_matriz(mat, mat2, mat3);
	
	printf("\nMatriz 3 soma:");
	exibir_matriz(mat3);		
}
