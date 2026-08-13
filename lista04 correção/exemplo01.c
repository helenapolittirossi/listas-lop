#include<stdio.h>
#include<windows.h>
#include<time.h>

//procedimento / procedure
void well(){
	printf("Wellington\n");
}


// procedimento com parâmetro
void escreva(char texto[30]){
	printf("Texto: %s\n", texto);
}

//função
int elevado(int x, int y){
	int total = 1;
	for(int i = 0; i < y; i++){
		total = total * x;
	}
	return total;
}

void main(){
	SetConsoleOutputCP(CP_UTF8);
	well();
	escreva("Palmeiras é o melhor");
	printf("10 elevado a 10 é %d", elevado(10,10));
	getch();
}