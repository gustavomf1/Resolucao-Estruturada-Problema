#include <stdio.h>
#include <conio.h>

#define TC 4 //TC vai definir o tamanho das colunas
#define TL 4 //TL vai definir o tamanho das linhas

void carregar_matriz(int mat[TL][TC]){
	int l, c;
	printf("\n");
	for(l=0;l<TL;l++){ //este for, percorre as linhas
		for(c=0;c<TC;c++){ //este for, percorre as colunas
			printf("Escreva o numero da Matriz[%d][%d]: ", l, c);
			scanf("%d", &mat[l][c]);
		}	
	}	
}


void exibir_matriz(int mat[TL][TC]){
		int l, c;
		printf("\n");
		for(l=0;l<TL;l++){ //este for, percorre as linhas
			for(c=0;c<TC;c++){ //este for, percorre as colunas
			printf("%d |", mat[l][c]); //para acessar a matriz, utilizar MATRIZ[LINHA][COLUNA]
			}
			printf("\n");	
		}		
}

void contar_maior(int mat[TL][TC], int mat2[TL][TC], int mat3[TL][TC]){
	int l, c;
	for(l=0;l<TL;l++){ //este for, percorre as linhas
		for(c=0;c<TC;c++){ //este for, percorre as colunas
			if (mat[l][c] >= mat2[l][c]){
				mat3[l][c] = mat[l][c];
			}
			else
				if (mat2[l][c] >= mat[l][c]){
					mat3[l][c] = mat2[l][c];
			}
		}	
	}
}

void main(){
	int mat[TL][TC];
	int mat2[TL][TC];
	int mat3[TL][TC];
	
	printf("\n<<Matriz>>");
	carregar_matriz(mat);
	
	printf("\n<<Matriz2>>");
	carregar_matriz(mat2);
	
	printf("\n");
	exibir_matriz(mat);
	
	printf("\n");
	exibir_matriz(mat2);
	
	contar_maior(mat, mat2, mat3);
	
	exibir_matriz(mat3);
	
}
