#include <stdio.h>
int main(){

  char produto[100];
  float preco, quantidade;
  
  printf("Entre com o nome do produto: ");
  scanf("%s", produto);
  getchar();
  printf("Entre com o preço do produto: ");
  scanf("%f", &preco);
  printf("Entre com a quantidade do produto: ");
  scanf("%f", &quantidade);

  float total = preco * quantidade;

  printf("O produto %s custa R$ %.2f e a quantidade é %.2f, totalizando R$ %.2f\n", produto, preco, quantidade, total);

  return 0;
}