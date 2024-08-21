#include <stdio.h>

int main() {
  //imprime um texto
printf("um texto sempre entre aspas duplas\n");

  //imprime um numero inteiro
  printf("%i\n", 10);
  printf("%i %i\n", 11, 22);
  printf("%5i\n", 110);
  printf("%05i\n", 0001);

  //imprime um numero decimal
  printf("%f\n", 3.14);
  printf("%.2f\n", 2.437);
  printf("%10.2f\n", 25486.4376);

  //imprime um caractere aspas simples
  printf("%c\n", 'A');
  printf("%c\n", 115);

  //imprime uma string
  printf("%s\n", "boa tarde");
  printf("%-30s!\n", "quero cafe");

return 0;
}