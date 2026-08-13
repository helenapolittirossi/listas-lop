#include <stdio.h>

void main(){
	float valor, d10, d15;
	printf("Digite o valor da compra: ");
	scanf("%f", &valor);
	if(valor > 500) {
		d10 = valor / 10 * 9;
		printf("o valor final da compra e: %.2f", d10);
		
	}else if(valor > 200 && valor <= 500) {
		d15 = valor / 100 * 95;
		printf("O valor final da compra e: %.2f", d15);
		
	}else {
		printf("O valor final da compra e: %.2f", valor);
	}
	getch();
}