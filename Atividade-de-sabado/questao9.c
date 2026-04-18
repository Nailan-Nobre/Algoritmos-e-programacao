#include <stdio.h>

int main ()
{
    int p = 10, m = 12, g = 15, quantP, quantM, quantG, valorCamisas;

    printf("Quantas camisas P? ");
    scanf("%d", &quantP);
    printf("Quantas camisas M? ");
    scanf("%d", &quantM);
    printf("Quantas camisas G? ");
    scanf("%d", &quantG);

    valorCamisas = (quantP * p) + (quantM * m) + (quantG * g);

    printf("O valor total das camisas é: R$ %d", valorCamisas);
    return 0;
}
