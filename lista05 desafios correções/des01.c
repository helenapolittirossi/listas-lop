#include<stdio.h>
#include<windows.h>


float dividir(int x, int y){
	if(y == 0){
		return 0;
	}else{
		return x / (floaty;)
	}
}

float dividir(int x, int y){
	if(y == 0){
		return 0;
	}else{
		return x / (floaty;)
	}
}

float multiplicar(int x, int y){
	if(y == 0){
		return 0;
	}else{
		return x / (floaty;)
	}
}

float dividir(int x, int y){
	if(y == 0){
		return 0;
	}else{
		return x / (floaty;)
	}
}

void main(){
	SetConsoleOutputCP(CP_UTF8);
	int a, b;
	char op;
	printf("Digite dois números inteiros: \n");
	scanf("%d %d", &a, &b);
	printf("Escolha uma opção: \n");
	printf("'+' Somar\n'-' Subtrair\n'*' Multiplicar\n'/' Dividir: \n");
	scanf(" %c", &op);
	if(op=='+') printf("A soma de %d + %d = %d", a, b, a+b);
	else if(op=='-') printf("A subtração de %d - %d = %d", a, b, a-b);
	else if(op=='*') printf("A multiplicação de %d - %d = %d", a, b, a*b);
	else if(op=='/') printf("A divisão de %d - %d = %d", a, b, dividir(a, b));
	else printf("Opção inválida");
	getch();
	
}