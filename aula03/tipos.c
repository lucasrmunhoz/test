#include <stdio.h>
#include <limits.h>
#include <float.h>

int main() {

  printf("tamanho do char na memoria = %i\n", sizeof(char));
  printf("tamanho do int na memoria = %i\n", sizeof(int));
  printf("tamanho do float na memoria = %i\n", sizeof(float));
  printf("tamanho do double na memoria = %i\n", sizeof(double));
  printf("tamanho do void na memoria = %i\n", sizeof(void));
  printf("\n");
  printf("a faixa de valores do char = %i a %i\n", CHAR_MIN, CHAR_MAX);
  printf("a faixa de valores do int = %i a %i\n", INT_MIN, INT_MAX);
  printf("a faixa de valores do float = %i a %i\n", FLT_MIN, FLT_MAX);
  printf("a faixa de valores do double = %i a %i\n", DBL_MIN, DBL_MAX);
  printf("\n");
  char tecla = 'A';
  printf("valor de tecla = %c\n", tecla);
  int idade = 25;
  printf("valor de idade = %i\n", idade);
  float nota = 9.5f; // 6 casas decimais
  printf("valor de nota = %.2f\n", nota);
  double pi = 3.1415692347; // 12 casas decimais
  printf("valor de pi = %.10f\n", pi);
  idade = 50;
  printf("valor de idade = %i\n", idade);
  printf("\n");
  const float pi2 = 3.1415692347f;
  printf("valor de pi2 = %.10f\n", pi2);
  printf("\n");
  printf("tamanho do short int na memoria = %lu byte(s)\n", sizeof(short int));
  printf("tamanho do long int na memoria = %lu byte(s)\n", sizeof(long int));
  printf("tamanho do long double na memoria = %lu byte(s)\n", sizeof(long double));
  printf("\n");
  printf("a faixa de valores do short int = de %i a %i\n", SHRT_MIN, SHRT_MAX);
  printf("a faixa de valores do long int = de %i a %i\n", LONG_MIN, LONG_MAX);
  printf("a faixa de valores do long double = de %i a %i\n", LDBL_MIN, LONG_MAX);
  
  
  return 0;
}