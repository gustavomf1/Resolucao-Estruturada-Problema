#include <stdio.h>
#include <conio.h>

#define TC 3 //TC vai definir o tamanho das colunas
#define TL 3 

void carregar_matriz(int mat[TL][TC]){
	int l, c, soma = 0;
	for(l=0;l<TL;l++){ 
		for(c=0;c<TC;c++){ 
			soma += 10;
			mat[l][c] = soma; 
		}	
	}	
}


void media_um(int mat[TL][TC], int mat2[TL][TC], int mat3[TL][TC]){
	int l, c, acum = 0;
	float media = 0;
	printf("\n");
	for(l=0;l<TL;l++){ 
		for(c=0;c<TC;c++){ 		
				mat3[l][c] = (mat[l][c]	+ mat2[l][c]) / 2;	
			}
		}
		
	
}

void exibir_matriz(int mat3[TL][TC]){
		int l, c;
		for(l=0;l<TL;l++){ 
			for(c=0;c<TC;c++){ 
			printf("%d |", mat3[l][c]); 
			}
			printf("\n");	
		}		
}

void main(){
	int mat[TL][TC];
	int mat2[TL][TC];
	int mat3[TL][TC];
	carregar_matriz(mat);
	carregar_matriz(mat2);
	
	media_um(mat,mat2, mat3);
	
	exibir_matriz(mat);
}
