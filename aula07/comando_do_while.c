#include <stdio.h>
int main(){
  int numero = 0;

  do{
    printf("Digite um número de 1 a 10: ");
    scanf("%i", &numero);
  } while (numero < 1 || numero > 10);

  return 0;
}