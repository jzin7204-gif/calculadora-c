#include <stdio.h>

int main() {

    int opcao;
    float num1, num2, resultado;

    printf("==== CALCULADORA ====\n");
    printf("1 - Soma\n");
    printf("2 - Subtracao\n");
    printf("3 - Multiplicacao\n");
    printf("4 - Divisao\n");
    printf("0 - Sair\n");

    printf("\nEscolha uma opcao: ");
    scanf("%d", &opcao);

    printf("Qual e o primeiro numero?\n");
    scanf("%f", &num1);

    printf("Qual e o segundo numero?\n");
    scanf("%f", &num2);

    switch(opcao) {

        case 1:
            resultado = num1 + num2;
            printf("Resultado: %.2f\n", resultado);
            break;

        case 2:
            resultado = num1 - num2;
            printf("Resultado: %.2f\n", resultado);
            break;

        case 3:
            resultado = num1 * num2;
            printf("Resultado: %.2f\n", resultado);
            break;

        case 4:
            resultado = num1 / num2;
            printf("Resultado: %.2f\n", resultado);
            break;

        case 0:
            printf("Saindo...\n");
            break;

        default:
            printf("Operacao invalida!\n");
    }

    return 0;
}