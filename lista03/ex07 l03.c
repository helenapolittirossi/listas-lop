#include<stdio.h>
void main(){
	//Laço "enquanto", utilizado quando não sabemos quantas vezes queremos repetir 		
	int i = 0;
	while(i != 4){
		printf("Digite um numero qualquer, ou 4 para terminar\n");
		scanf("%d", &i);
	}
    printf("Fim.");
	getch();
}