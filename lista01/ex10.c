#include <stdio.h>
void main(){
	char c[100];
	float participantes, va, p;
	printf("Qual o nome da cidade? ");
	scanf("%[^\n]s", &c);
	printf("Informe o numero de participantes ");
	scanf("%f", &participantes);
	printf("Informe o numero de votos apurados ");
	scanf("%f", &va);
	p = va / participantes * 100;
	printf("Na cidade %s a porcentagem de participacao foi: %.2f", c, p);
	
	getch();
}