#include <stdio.h>
int main(){
  
  float nota = 0.0f;
  printf("Entre com a nota entre 0 e 10: ");
int deu_certo = scanf("%f", &nota);

  printf("A nota digitada foi %.1f\n", nota);
  printf("Deu certo? %i\n", deu_certo);

  double pi = 0.0;
  printf("Entre com o valor de pi: ");
  deu_certo = scanf("%lf", &pi); 
  printf("O valor de pi digitado foi %.10lf\n", pi);
  
  return 0;
 }