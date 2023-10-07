#include <stdio.h>
#include <conio.h>

#define TC 6 //TC vai definir o tamanho das colunas
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
		for(l=0;l<TL;l++){ //este for, percorre as linhas
			for(c=0;c<TC;c++){ //este for, percorre as colunas
			printf("%d |", mat[l][c]); //para acessar a matriz, utilizar MATRIZ[LINHA][COLUNA]
			}
			printf("\n");	
		}		
}

void somas_media(int mat[TL][TC]){
	int l, c, cont = 0, acum = 0, j = 0, colum = 0;
	float media = 0;
	for(l=0;l<TL;l++){ //este for, percorre as linhas
		for(c=0;c<TC;c++){ //este for, percorre as colunas
			if(c % 2 != 0){
				cont += mat[l][c];
			}
			
			if(c == 2 || c == 4){
				acum += mat[l][c];
				j++;
			}
			
			if (c == 1 || c == 2){
				colum += mat[l][c];
			}		
		}
	
	}
	
	media = acum / j;
	
	for(l=0;l<TL;l++){
		for(c=0;c<TC;c++){
			mat[l][5] = colum;			
		}
	}
	
	
	
	printf("\nSoma de todos os elementos das colunas impares: %d", cont);
	printf("\nMedia dos elementos da segunda e sexta coluna: %0.2f", media);
}

void main(){
	int mat[TL][TC];
	carregar_matriz(mat);
	exibir_matriz(mat);
	somas_media(mat);
	printf("\n\n");
	exibir_matriz(mat);
}
