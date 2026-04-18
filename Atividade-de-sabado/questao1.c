#include <stdio.h>

int main ()
{
    float largura, comprimento, area;

    printf("Digite a largura do terreno: ");
    scanf("%f", &largura);
    printf("Digite o comprimento do terreno: ");
    scanf("%f", &comprimento);
    area = largura * comprimento;
    
    printf("A area do terreno é: %.2fm²", area);
    return 0;
}