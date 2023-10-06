#include <stdio.h>
#include <conio.h>
#include <time.h>
#include<unistd.h>

#define TC 5
#define TL 5

void random(int mat[TL][TC]){
	int l, c;
	srand((unsigned)time(NULL));
	for(l=0;l<TL;l++){ 
		for(c=0;c<TC;c++){ 
			mat[l][c] = (rand() % 99); 
			usleep(9000);
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

void main(){
	
	int mat[TL][TC];
	
	random(mat);
	exibir_matriz(mat);
}
