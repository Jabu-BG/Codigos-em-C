#include <stdio.h>

// Aqui meus amigos, serve para simplesmente declarar algumas variáveis além de começarmos a ideia de ordenação dos elementos.
void ordenar(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// o Heapify serve para ordenar o Heap em max-heap, ou seja, crescente. Trocando o filho maior pelo menor, mantendo a propriedade max-heap
void heapify(int arr[], int n, int i) {
    int maior = i;
    int esquerda = 2 * i + 1;
    int direita = 2 * i + 2;
    
// Basicamente aqui é o processo explicado acima, ele verifica se o filho já é maior, se for, ele não modifica.
    if (esquerda < n && arr[esquerda] > arr[maior])
        maior = esquerda;
        
    if (direita < n && arr[direita] > arr[maior])
        maior = direita;
        
    if (maior != i) {
        ordenar(&arr[i], &arr[maior]);
        heapify(arr, n, maior);
    }
}

// Basicamente a função principal, ela serve para fazer o ciclo usando o for para ordenar todos os numeros.
void heapSort(int arr[], int n) {
    for (int i = n / 2 - 1; i >= 0; i--)
        heapify(arr, n, i);
    
    for (int i = n - 1; i >= 0; i--) {
        ordenar(&arr[0], &arr[i]);
        heapify(arr, i, 0);
    }
}

// Como o nome diz, serve para printar todos os numeros, usand também o ciclo para todos os numeros.
void printArray(int arr[], int n) {
    for (int i = 0; i < n; ++i)
        printf("%d ", arr[i]);
    printf("\n");
}

// Aqui na main têm basicamente o simples, pede para o usuário escrever os elementos para depois mostrar a lista ordenada.
int main() {
    int n;
    printf("\nDigite o número de elementos: ");
    scanf("%d", &n);

    int arr[n];

    printf("Digite os elementos da matriz: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    heapSort(arr, n);

    printf("\nA matriz classificada é: ");
    printArray(arr, n);

    return 0;
}
