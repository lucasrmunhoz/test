#include <stdio.h>
int main(){

  int matricula = 0;
  float nota1 = 0.0f;
  float nota2 = 0.0f;
  float media = 0.0f;

  printf("Entre com a matricula: ");
  scanf("%i", &matricula);
  getchar();
  printf("Entre com a nota 1: ");
  scanf("%f", &nota1);
  getchar();
  printf("Entre com a nota 2: ");
  scanf("%f", &nota2);
  getchar();
  media = (nota1 + nota2) / 2;

  printf("O aluno %i com as notas %.1f e %.1f teve a media %.1f\n", matricula, nota1, nota2, media);

  return 0;
}