#include <stdio.h>
#include <stdbool.h>

int main() {
    int idade;
    bool possuiCarteira;

    // Entrada de dados
    printf("Digite a idade: ");
    scanf("%d", &idade);

    printf("Possui carteira de motorista? (1 para verdadeiro, 0 para falso): ");
    scanf("%d", &possuiCarteira);  // em C, usamos 1 (true) ou 0 (false)

    // Verificação se pode dirigir
    if (idade >= 18 && possuiCarteira == true) {
        printf("Pode dirigir.\n");
    } else {
        printf("Não pode dirigir.\n");
    }

    // Verificação se pode entrar na festa
    if (idade >= 18 || possuiCarteira == true) {
        printf("Pode entrar na festa.\n");
    } else {
        printf("Não pode entrar na festa.\n");
    }

    // Verificação se possui carteira
    if (!possuiCarteira) {
        printf("Não possui carteira.\n");
    } else {
        printf("Possui carteira.\n");
    }

    return 0;
}
