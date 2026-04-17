#include <stdio.h>
// Exemplo de uso do operador & para ler diferentes tipos de dados

int main() {
    char c;
    float b;
    int a;

    printf("Digite um caractere: ");
    scanf("%c", &c);
    printf("Digite um número com um ponto flutuante: ");
    scanf("%f", &b);
    printf("Digite um número inteiro: ");
    scanf("%d", &a);

    printf("Os dados lidos foram: %c, %f e %d\n", c, b, a);
}