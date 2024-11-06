#include <stdio.h>

int main() {
    int numeros[10];
    printf("Digite 10 números inteiros:\n");
    for(int i=0; i<10; i++) {
        scanf("%d", &numeros[i]);
    }
    int numero;
    scanf("%d", &numero);
    int achou = -1;
    for(int i=0; i<10; i++) {
        if (numeros[i] == numero) {
            achou = i;
        }
    }
    if (achou < 0) {
        printf("O numero nao foi encontrado!\n");
    } else {
        printf("O numero foi encontrado na posicao %d\n", achou);
    }
    return 0;
}