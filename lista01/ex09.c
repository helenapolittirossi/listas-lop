#include <stdio.h>
void main(){
	float p, a;
	char n[100];
	//entrada
	printf("Qual o nome da mercadoria?\n");
	scanf("%[^\n]s", &n);
	printf("Qual o preço da mercadoria?\n");
	scanf("%f", &p);
	//processamento
	a = p / 100 * 5 + p;
	//saida
	printf("A mercadoria %s custa R$%.2f", n, a);
	getch();
}