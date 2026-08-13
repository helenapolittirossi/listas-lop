#include <stdio.h>
void main(){
	float r, h, a, v;
	printf("Digite qual o raio (cm) do cilindro? \n");
	scanf(" %f", &r);
	printf("E agora digite qual a altura (cm) do cilindro? \n");
	scanf(" %f", &h);
	a = 2 * 3,14 * r * ( h + r );
	v = 3,14 * r * r * h;
	printf("Altura (h) do seu cilindro =%.2f \nVolume do cilindro =%.2f", h, v);
	
	getch();
}
