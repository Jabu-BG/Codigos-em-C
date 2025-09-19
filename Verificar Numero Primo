#include <stdio.h>

int main() {
    int num1, i, divisores = 0;

    printf("Digite um numero positivo: ");
    scanf("%d", &num1);
    
    if (num1 <= 1) {
        printf("%d não é primo.\n", num1);
    } else {

        for (i = 1; i <= num1; i++) {
            if (num1 % i == 0) {
                divisores++;
            }
        }
        
        if (divisores == 2) {
            printf("%d é um numero primo.\n", num1);
        } else {
            printf("%d não é um numero primo.\n", num1);
        }
    }

    return 0;
}
