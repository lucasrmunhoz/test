#include <stdio.h>

int main() {
  int numero = 0;
  printf("Digite um número de 1 a 10: ");
  int deu_certo = scanf("%i", &numero);

  if (numero > 0 && numero < 11) {
    printf("Tabuada do %i:\n", numero);
  } for (int i = 0; i <= 10; i++) {
      printf("%i x %i = %i\n", i+1, numero, (i+1)*numero);
    } for (int i = 10; i > 0; i--) {
      printf("%i x %i = %i\n", i-1, numero, (i-1)*numero);
    }

  for(int i=o; i<10; i++) {
  }for(int j=0; j<10; j++){
      prinf("("%i, %i")", i, j);
    }

  for(;;){
    printf("Ao infinito e alem!\n");
  }

  return 0;
}