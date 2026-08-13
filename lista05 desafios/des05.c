#include<stdio.h>
#include<windows.h>
#include<time.h>

void ordenar(int array[], int tamanho) {
    int temp;

    for(int i = 0; i < tamanho - 1; i++) {
        for(int j = 0; j < tamanho - i - 1; j++) {

            if(array[j] > array[j + 1]) {
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
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

    ordenar(numeros, tamanho);

    printf("Array ordenado:\n");

    for(int i = 0; i < tamanho; i++) {
        printf("%d ", numeros[i]);
    }

    printf("\n");

    getch();
}