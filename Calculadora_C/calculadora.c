#include <stdio.h>
int main() {
    int opcao;
    float num1, num2, resultado;

    printf("=== Calculadora Simples ===\n");
    printf("Digite uma opcao de 1 a 4:\n");
    printf("1 - Adicao\n");
    printf("2 - Subtracao\n");
    printf("3 - Multiplicacao\n");
    printf("4 - Divisao\n");
    printf("Opcao: ");
    scanf("%d", &opcao);

    printf("Digite o primeiro numero: ");
    scanf("%f", &num1);

    printf("Digite o segundo numero: ");
    scanf("%f", &num2);

    switch (opcao) {
        case 1:
            resultado = num1 + num2;
            printf("Resultado da adicao: %.2f\n", resultado);
            break;

        case 2:
            resultado = num1 - num2;
            printf("Resultado da subtracao: %.2f\n", resultado);
            break;

        case 3:
            resultado = num1 * num2;
            printf("Resultado da multiplicacao: %.2f\n", resultado);
            break;

        case 4:
            if (num2 != 0) {
                resultado = num1 / num2;
                printf("Resultado da divisao: %.2f\n", resultado);
            } else {
                printf("Erro: divisao por zero nao permitida!\n");
            }
            break;

        default:
            printf("Opcao invalida! Escolha de 1 a 4.\n");
    }

    return 0;
}
