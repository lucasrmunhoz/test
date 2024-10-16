#include <stdio.h>

int main() {
int numero = 0;

  printf("Entre com um numero: ");
  int deu_certo = scanf("%i", &numero);

  printf("O numero digitado foi %i\n", numero);
  printf("Deu certo? %i\n", deu_certo);

  int coordenada_x = 0;
  int coordenada_y = 0;

  printf("Entre com as coordenadas x e y: ");
  deu_certo = scanf("%i %i", &coordenada_x, &coordenada_y);

  printf("Você digitou as coordenadas %i %i\n", coordenada_x, coordenada_y);
  printf("Deu certo? %i\n", deu_certo);


  return 0;
}