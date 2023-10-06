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
		for(l=0;l<TL;l++){ //este for, percorre as linhas
			for(c=0;c<TC;c++){ //este for, percorre as colunas
			printf("%d |", mat[l][c]); //para acessar a matriz, utilizar MATRIZ[LINHA][COLUNA]
			}
			printf("\n");	
		}		
}

void media_um(int mat[TL][TC]){
	int l, c, acum = 0, calculo = 0;
	float media = 0;
	printf("\n");
	for(l=0;l<TL;l++){ //este for, percorre as linhas
		for(c=0;c<TC;c++){ //este for, percorre as colunas
			if (mat[l][c] == mat[0][0]){
				acum += mat[l][c];	
			}
				else
					if (mat[l][c] == mat[1][1]){
						acum += mat[l][c];
					}
					else
						if (mat[l][c] == mat[2][2]){
							acum += mat[l][c];
						}					
			}
		}
		media = acum / TL;
		
		for(l=0;l<TL;l++){ //este for, percorre as linhas
			for(c=0;c<TC;c++){ //este for, percorre as colunas
				if (mat[l][c] > media){
					calculo += mat[l][c];	
				}					
			}
		}
		
		printf("Valor da media: %0.2f", media);
		printf("\nValor do calculo: %d", calculo);
}

void main(){
	int mat[TL][TC];
	carregar_matriz(mat);
	exibir_matriz(mat);
	media_um(mat);
}
