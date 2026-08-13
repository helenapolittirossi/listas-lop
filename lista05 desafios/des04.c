#include<stdio.h>
#include<windows.h>
#include<time.h>

float calculo(int array[], int tamanho) {
    int soma = 0;

    for(int i = 0; i < tamanho; i++) {
        soma += array[i];
    }

    return (float)soma / tamanho;
}

int main() {
	SetConsoleOutputCP(CP_UTF8);
    int tamanho;

    printf("Digite o tamanho do array: ");
    scanf("%d", &tamanho);

    int numeros[tamanho];

    for(int i = 0; i < tamanho; i++) {
        printf("Digite o elemento %d: ", i + 1);
        scanf("%d", &numeros[i]);
    }

    float media = calculo(numeros, tamanho);

    printf("Média = %.2f\n", media);

    getch();
}