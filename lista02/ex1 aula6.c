#include <stdio.h>

void main(){
	int num;
	
	printf("Informe um valor inteiro : ");
	scanf("%d", &num);
	
	if(num > 0) {
		printf("Numero positivo\n");
	} else if (num < 0) {
		printf("Numero negativo\n");
	} else {
		printf("Numero igual a zero\n");
	}
}
