#include<stdio.h>
#include<windows.h>
#include<time.h>

void main(){
	SetConsoleOutputCP(CP_UTF8);
	int v[25];
	int maior = 0, p[25];
	
	srand(time(NULL));
	
	printf("Indice\tValor\n");
	for(int i = 0; i < 21; i++){
		v[i] = rand() % 101;
		printf("%d\t[%3d]\n", i, v[i]);	
		if(v[i] > maior){
			maior = v[i];

		}
	}
	
	printf("O maior número gerado foi [%d]", maior);
	for(int i = 0; i < 25; i++){
		if(v[i] == maior){
			printf("%d, ",i);
		}
	}
	getch();
}