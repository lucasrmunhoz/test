#include <stdio.h>
#include <string.h>

int main() {
    char nome1[50], nome2[50];

    printf("Digite o primeiro nome: ");
    fgets(nome1, 50, stdin);
    nome1[strcspn(nome1, "\n")] = 0;

    printf("Digite o segundo nome: ");
    fgets(nome2, 50, stdin);
    nome2[strcspn(nome2, "\n")] = 0;

    while (getchar() != '\n'); // Limpa o buffer do teclado

    printf("Digite o nome a ser concatenado: ");
    char nome3[50];
    fgets(nome3, 50, stdin);
    nome3[strcspn(nome3, "\n")] = 0;

    strcat(nome1, " "); 
    strcat(nome1, nome3); 

    printf("Os nomes digitados foram: %s e %s\n", nome1, nome2);

    return 0;
}