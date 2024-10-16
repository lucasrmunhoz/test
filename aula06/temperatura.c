#include <stdio.h>

int main() {
  float temperatura = 0.0f;
  printf("Entre com a temperatura: ");
  int deu_certo = scanf("%f", &temperatura);

  if (temperatura >= 40.0f) {
    printf("Está muito quente!\n");
  } else if (temperatura >= 30.0f) {
    printf("Está quente!\n");
  } else if (temperatura >= 20.0f) {
    printf("Está agradável!\n");
  } else if (temperatura < 20.0f) {
    printf("Está frio!\n");
  } else {
    printf("Temperatura inválida!\n");
  }

  return 0;
}
    