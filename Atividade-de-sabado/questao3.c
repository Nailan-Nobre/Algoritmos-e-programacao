#include <stdio.h>

int main()
{
    float paozinho = 0.12, broa = 1.50, total, pooupanca;
    int quantPaozinho, quantBroa;

    printf("Quantos paozinhos? ");
    scanf("%d", &quantPaozinho);
    printf("Quantas broas? ");
    scanf("%d", &quantBroa);

    total = (quantPaozinho * paozinho) + (quantBroa * broa);
    pooupanca = total * 0.1;

    printf("Total arrecadado: %.2f\n", total);
    printf("Valor para poupança: %.2f\n", pooupanca);

    return 0;
}
