#include <stdio.h>

void main (){
	int pontos;
	printf("Qual foi a pontuacao final nesse tempo? ");
	scanf("%d", &pontos);
	
	if(pontos >= 20) {
		printf("Classificado");
	
	}else if(pontos >= 10 && pontos < 20) {
		printf("Em disputa");
	
	}else {
		printf("Eliminado");
	}
	
	
	getch();
}