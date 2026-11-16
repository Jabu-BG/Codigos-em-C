
#include <stdio.h>
#include <stdlib.h>

#define TAM 32

typedef struct {
    int topo;
    int vet[TAM];
} pilhavet;

void empilha(int valor, pilhavet *p) {
    if (p->topo == TAM -1) {
        printf("\nPilha Cheia!");
        exit(0);
    }

    p->topo++;
    p->vet[p->topo] = valor;
}

int desempilha(pilhavet *p) {
    int aux;

    if (p->topo < 0) {
        printf("\nPilha Vazia!");
        exit(1);
    }

    aux = p->vet[p->topo];
    p->topo--;
    return aux;
}

int main(void) {
    pilhavet pilha;
    int numero;
    
    pilha.topo =-1;
    
    printf("Digite um número decimal: ");
    scanf("%d", &numero);

    if (numero == 0) {
    printf("Binário: 0\n");
    return 0;
    }
    while (numero > 0) {
    empilha(numero % 2, &pilha);
    numero /=2;
    }
    printf("Binário: ");
    while (pilha.topo >=0) {
        printf("%d", desempilha(&pilha));
    }
    printf("\n");
    return 0;
}
