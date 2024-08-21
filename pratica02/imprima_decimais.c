#include <stdio.h>

int main() {

  //Numeros decimais
  printf("%f\n", 3.141592);
  printf("%.2f\n", 3.141592);
  printf("%.7f\n", 3.1415926f);

  //Imprimir notas
  printf("%4.1f\n", 10.0);
  printf("%4.1f\n", 8.4);

  //Imprimir moedas
  printf("R$ %6.2f\n", 297.85);

  
  return 0;
}