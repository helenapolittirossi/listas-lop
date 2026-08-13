#include <stdio.h>
void main(){
	float s, p, ns;
	char n[50];
	
	printf("Digite seu nome e seu salário \n");
	scanf(" %s %f", &n, &s);
	printf("Digite o indice percentual do reajuste de salario \n");
	scanf(" %f", &p);
	
	ns = s * (p / 100) + s;
	
	printf(" Seu novo salario será \n R$ %.2f \n nome da pessoa \n %s", ns, n);
	getch();
}