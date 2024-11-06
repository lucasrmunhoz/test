#include <stdio.h>
int main(){
  int numero = 0;

  printf("Digite um número de 1 a 10: ");
  scanf("%i", &numero);

  while (numero < 1 || numero > 10){
    while (getchar() != '\n');
    printf("Número inválido. \n ");
    printf("Digite um número de 1 a 10: ");
    scanf("%i", &numero);
  }

  int i = 0;
  while (i < numero){
    printf("%i\n", i);
    i++;
  }
    
  
  return 0;
}