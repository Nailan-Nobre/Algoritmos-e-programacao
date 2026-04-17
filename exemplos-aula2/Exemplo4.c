#include <stdio.h>
// Exemplo de leitura de dados do teclado e escrita na tela

int main() {
    int n1, n2, soma;

    printf("Numero 1:");
    scanf("%d", &n1);
    printf("Numero 2:");
    scanf("%d", &n2);
    soma = n1 + n2;

    printf("%d + %d = %d\n", n1, n2, soma);
    return 0;
}
