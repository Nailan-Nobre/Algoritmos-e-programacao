#include <stdio.h>

int main()
{
    int quilo = 12;
    float quantQuilo, valorPagar;

    printf("Quantos quilos teve o seu prato no total?");
    scanf("%f", &quantQuilo);
    valorPagar = quantQuilo * quilo;

    printf("O valor total a pagar é de R$ %.2f", valorPagar);
    return 0;
}
