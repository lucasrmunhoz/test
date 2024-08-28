#include <stdio.h>

int main() {

  int Matricula = 00000000;
  int Idade = 00;
  float Altura = 0.00;
  float Peso = 000.00;
  char Sexo = 'M';
  printf("Matricula: %08i\n", Matricula);
  printf("Idade: %02i\n", Idade);
  printf("Altura: %.2f\n", Altura);
  printf("Peso: %.2f\n", Peso);
  printf("Sexo: %c\n", Sexo);

  return 0;
}