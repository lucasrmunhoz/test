#include <stdio.h>

int main() {
  int ano;
  printf("Entre com o ano: ");
  scanf("%i", &ano);
  if (ano % 4 == 0 && ano % 100 != 0 || ano % 400 == 0) {
    printf("O ano %i é bissexto\n", ano);
  } else {
    printf("O ano %i não é bissexto\n", ano);
  }
  

  return 0;
}
  