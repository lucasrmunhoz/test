#include <stdio.h>
#include <math.h>

int main() {
  char operacao;
  float num1, num2, resultado;

  printf("Digite a operação (+, -, *, /, ^, r): ");
  scanf("%c", &operacao);

  printf("Digite o primeiro número: ");
  scanf("%f", &num1);
  printf("Digite o segundo número: ");
  scanf("%f", &num2);

  switch (operacao) {
  case '+':
    resultado = num1 + num2;
    break;
  case '-':
    resultado = num1 - num2;
    break;
  case '*':
    resultado = num1 * num2;
    break;
  case '/':
    if (num2 == 0) {
      printf("Erro: Divisão por zero!\n");
      return 1;
    } else {
      resultado = num1 / num2;
    }
    break;
  case '^':
    resultado = pow(num1, num2);
    break;
  case 'r':
    if (num1 < 0) {
      printf("Erro: Raiz quadrada de número negativo!\n");
      return 1;
    } else {
      resultado = sqrt(num1);
    }
    break;
  default:
    printf("Operação inválida!\n");
    return 1;
  }

  printf("Resultado: %.2f\n", resultado);

  return 0;
}