#include <stdio.h>

void main(){
	float s, r10, r15;
	printf("Digite o salario do funcionario : ");
	scanf("%f", &s);
	if(s <= 1800) {
		r15 = s / 100 * 15 + s;
		printf("Novo salario : %.2f", r15);
	}else {
		r10 = s / 100 * 10 + s;
		printf("Novo salario : %.2f", r10);
	}
	
	getch();
}