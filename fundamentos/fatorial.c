#include <stdio.h>
int main (){
  int numero, fatorial, contador;
  
  printf("Digite um numero: ");
  scanf("%d", &numero);
  
  for (contador -1; contador <=numero; contador++){
  fatorial = fatorial * contador;
  }
  
  printf("O fatoral de %d é %d\n", numero, fatorial);
  }
