#include <stdio.h>

int main() {
    int numero;

    printf("Digite um número: ");
    scanf("%d", &numero);

    if (numero % 2 == 0) {
        printf("O número %d é divisível por 2.\n", numero);
    } else {
        printf("O número %d não é divisível por 2.\n", numero);
    }

    return 0;
}