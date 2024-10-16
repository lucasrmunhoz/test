#include <stdio.h>

int main() {
char tecla = '\0';
  printf("Pressione uma tecla: ");
  int deu_certo = scanf("%c", &tecla);
  getchar();
  printf("A tecla pressionada foi %c\n", tecla);

  printf("Pressione outra tecla: ");
  deu_certo = scanf(" %c", &tecla);
  getchar();
  printf("A tecla pressionada foi %c\n", tecla);

  char nome[100];
  printf("Entre com o seu nome: ");
  deu_certo = scanf("%[^\n]s", nome);
  printf("O nome digitado foi: %s\n", nome);

  return 0;
}