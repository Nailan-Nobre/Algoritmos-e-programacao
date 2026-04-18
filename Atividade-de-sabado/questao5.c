#include <stdio.h>

int main()
{
    float precogasolina = 6.8, dinheiro;
    printf("Quantos reais de gasolina quer colocar no tanque? ");
    scanf("%f", &dinheiro);

    printf("Voce pode consegue colocar %.2f litros de gasolina", dinheiro / precogasolina);
    return 0;
}
