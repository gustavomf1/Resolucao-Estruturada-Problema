#include <stdio.h>
#include <conio.h>

#define TF 2

struct livros {  
		char nome[50];
		int ano;
		int num_pag;
		float preco;
	};

void carregar_registro(struct livros reg_livros[TF]){
	int i;
	//leitura
	printf("\n<<<Leitura>>>");
	for(i=0; i<TF; i++){
		printf("\n\nRegistro[%d]", i);
		
		printf("\nInforme o titulo do livro: ");
		fflush(stdin);
		gets(reg_livros[i].nome);
		
		printf("\nInforme o ano: : ");
		scanf("%d", &reg_livros[i].ano);
		
		printf("Informe a Pagina: : ");
		scanf("%d", &reg_livros[i].num_pag);
		
	
		
		printf("Informe o Preco do livro: ");
		scanf("%f", &reg_livros[i].preco);
	}	
}

void exibir_registro(struct livros reg_livros[TF]){
	int i;
	//exibição
	printf("\n\n<<<Exibicao>>>");
	for(i=0; i<TF; i++){
		printf("\n\nRegistro[%d]", i);
		
		printf("\nTitulo: %s", reg_livros[i].nome);
		
		printf("\nAno: %d", reg_livros[i].ano);
		
		printf("\nIdade: %d", reg_livros[i].num_pag);
		
		printf("\nPreco: %0.2f", reg_livros[i].preco);
	}
}

void calcular_media(struct livros reg_livros[TF]){
	int i, paginas = 0;
	float media;
	
	printf("\n\n<<Calcular media Paginas>>");
	for(i=0; i<TF; i++){
		paginas += reg_livros[i].num_pag;
	}	
	
	media = paginas / TF;
	printf("\nMedia de Paginas: %0.2f", media);
}

main() 


{
	struct livros reg_livros[TF]; 
	carregar_registro(reg_livros);	
	exibir_registro(reg_livros);
	calcular_media(reg_livros);	
} 
