#include <stdio.h>
#include <stdlib.h>

// Funções matemáticas
float somar(float a, float b) {
    return a + b;
}

float subtrair(float a, float b) {
    return a - b;
}

float multiplicar(float a, float b) {
    return a * b;
}

float dividir(float a, float b) {
    if (b != 0)
        return a / b;
    else {
        printf("Erro: divisão por zero!\n");
        return 0;
    }
}

int main() {
    int opcao;
    float num1, num2, resultado;

    do {
        printf("\n=== CALCULADORA AVANÇADA DOG!!!! ===\n");
        printf("1. Somar\n");
        printf("2. Subtrair\n");
        printf("3. Multiplicar\n");
        printf("4. Dividir\n");
        printf("0. Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        if (opcao == 0) {
            printf("Encerrando o programa...\n");
            break;
        }

        printf("Digite dois números: ");
        scanf("%f %f", &num1, &num2);

        switch (opcao) {
            case 1:
                resultado = somar(num1, num2);
                printf("Resultado da soma: %.2f\n", resultado);
                break;
            case 2:
                resultado = subtrair(num1, num2);
                printf("Resultado da subtração: %.2f\n", resultado);
                break;
            case 3:
                resultado = multiplicar(num1, num2);
                printf("Resultado da multiplicação: %.2f\n", resultado);
                break;
            case 4:
                resultado = dividir(num1, num2);
                if (num2 != 0)
                    printf("Resultado da divisão: %.2f\n", resultado);
                break;
            default:
                printf("Opção inválida! Tente novamente.\n");
        }

    } while (1);

    return 0;
}
