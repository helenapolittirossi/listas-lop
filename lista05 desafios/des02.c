#include<stdio.h>
#include<windows.h>
#include<time.h>

long long fatorial(int n) {
    long long fat = 1;

    for(int i = 1; i <= n; i++) {
        fat *= i;
    }

    return fat;
}

int main() {
	SetConsoleOutputCP(CP_UTF8);
    int numero;

    printf("Digite um número inteiro: ");
    scanf("%d", &numero);

    if(numero < 0) {
        printf("Não existe fatorial de número negativo.\n");
    } else {
        printf("Fatorial de %d = %lld\n", numero, fatorial(numero));
    }

    getch();
}