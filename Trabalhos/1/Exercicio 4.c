#include <stdio.h>
#include <conio.h>

float pagamentos(){
	float pag;
	
	printf("Escreva seu salario bruto: ");
	scanf("%f", &pag);
	return pag;
}

int hora_extra(){
	int hora;
	
	printf("\nEscreva quantidade de hora extra: ");
	scanf("%d", &hora);
	return hora;	
}

float imposto(ajuste){
	float imp;
	
	printf("\n<<Calculando descontos>>");
	imp = ajuste - 150;
	return imp;
	
	
}

void main(){
	
	float pag, imp, ajuste;
	int hora;
	
	printf("<<Folha de pagamentos>>\n\n");
	
	pag = pagamentos();
	printf("\nPagamento bruto: %0.2f", pag);
	
	
	hora = hora_extra();
	printf("\nHoras extras: %d", hora);
	
	imp = imposto(ajuste);
	printf("\nPagamento descontado: %0.2f", imp);
}
