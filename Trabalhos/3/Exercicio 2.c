#include <stdio.h>
#include <conio.h>

#define TC 5 //TC vai definir o tamanho das colunas
#define TL 5 //TL vai definir o tamanho das linhas

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

void zero_um(int mat[TL][TC]){
	int l, c;
	printf("\n");
	for(l=0;l<TL;l++){ //este for, percorre as linhas
		for(c=0;c<TC;c++){ //este for, percorre as colunas
			if (mat[l][c] == mat[0][0]){
			
				mat[0][0] = 1;
			}
				else
					if (mat[l][c] == mat[1][1]){
						mat[1][1] = 1;
					}
					else
						if (mat[l][c] == mat[2][2]){
							mat[2][2] = 1;
						}
						else
							if (mat[l][c] == mat[3][3]){
								mat[3][3] = 1;
							}
							else
								if (mat[l][c] == mat[4][4]){
									mat[4][4] = 1;
								}
								else{
									mat[l][c] = 0; 
								}
										
			}
		}
}

void main(){
	int mat[TL][TC];
	carregar_matriz(mat);
	exibir_matriz(mat);
	zero_um(mat);
	printf("\n");
	exibir_matriz(mat);
}
