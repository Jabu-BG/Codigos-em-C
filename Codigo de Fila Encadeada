// Online C compiler to run C program online
#include <stdio.h>
#include <stdlib.h>

typedef struct lista{
    int dado;
    struct lista *link;
}no;

no *crialista(int n){
    no *ini, *p, *ult;
    int valor;
    ini=ult=NULL;
    for(int i=1;i<=n;i++){
        printf("\nDigite o Valor %d da lista ", i);
        scanf("%d", &valor);
        p=(no*) malloc (sizeof(no));
        p -> dado=valor;
        p -> link=NULL;
        if(ult!=NULL)
                ult -> link=p;
        else
                ini=p;
            ult=p;
    }
    return ini;
}

void escreverlista(no *p){
    while(p!=NULL){
        printf("%d\t", p -> dado);
        p=p -> link;
    }
}

int main() {
    no *primeira;
    int n;
    printf("Criando uma lista encadeada");
    do{
        printf("\n Entre com o numero de nois: ");
        scanf("%d", &n);
    }while(n<0);
    primeira = crialista(n);
    if(primeira !=NULL){
        printf("\n Lista Criada!");
        printf("\n");
        escreverlista(primeira);
        
    }
    else
            printf("\nLista Vazia");

    return 0;
}
