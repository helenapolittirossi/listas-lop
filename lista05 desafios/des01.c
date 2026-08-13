#include<stdio.h>
#include<windows.h>
#include<time.h>

float soma(float a, float b) {
    return a + b;
}


float subtracao(float a, float b) {
    return a - b;
}

float multiplicacao(float a, float b) {
    return a * b;
}

float divisao(float a, float b) {
    if (b != 0)
        return a / b;
    else {
        printf("Erro: divisao por zero!\n");
        return 0;
    }
}

int main() {
	SetConsoleOutputCP(CP_UTF8);
    float num1, num2, resultado;
    int opcao;

    printf("Digite o primeiro número: ");
    scanf("%f", &num1);

    printf("Digite o segundo número: ");
    scanf("%f", &num2);

    printf("\nEscolha a operação:\n");
    printf("1 - Soma\n");
    printf("2 - Subtração\n");
    printf("3 - Multiplicação\n");
    printf("4 - Divisão\n");
    printf("Opção: ");
    scanf("%d", &opcao);

    switch(opcao) {
        case 1:
            resultado = soma(num1, num2);
            break;
        case 2:
            resultado = subtracao(num1, num2);
            break;
        case 3:
            resultado = multiplicacao(num1, num2);
            break;
        case 4:
            resultado = divisao(num1, num2);
            break;
        default:
            printf("Opção inválida!\n");
            return 1;
    }

    printf("Resultado: %.1f\n", resultado);

    getch();
}