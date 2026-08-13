#include <stdio.h>
void main(){
	int a, b, c, d;
	printf("Digite tres numeros inteiros \n");
	scanf(" %d %d %d", &a, &b, &c);
	d = (a + b) / c;
	printf ("O resultado da expressão \n a+b/c= %d", d);
	getch();
}