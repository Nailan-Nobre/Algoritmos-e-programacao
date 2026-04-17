#include <stdio.h>
// Exemplo de uso do operador & para ler um número inteiro

int main() {

    int n;
    printf("Pense num número inteiro, e eu vou adivinhar qual é: ");
    scanf("%d" , &n);
    printf("O número que você pensou é: %d\n", n);
    return 0;
}