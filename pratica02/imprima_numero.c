#include <stdio.h>

int main() {

  //Numero inteiro
  printf("%i\n", 1234);
  printf("%i\n", 123);
  printf("%i\n", 56789);
  printf("%5i\n", 123);
  printf("%5i\n", 56789);
  printf("%05i\n", 1);

  //Numero plano cartesiano
  printf("(%i, %i)\n", -1, 1);

  //Data
  printf("%02i/%02i/%4i\n", 5, 8, 2024);
  
return 0;
}