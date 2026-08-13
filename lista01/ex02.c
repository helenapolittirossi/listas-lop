#include <stdio.h>
void main(){
	float v, d, t;
	printf("Digite a velocidade do carro em Km/h \n");
	scanf("%f", &v);
	printf("Digite a distancia a ser percorrida em Km \n");
	scanf("%f", &d);
	t = d / v;
	printf("O tempo necessário será de %.1f horas para percorrer", t);
	getch();
}