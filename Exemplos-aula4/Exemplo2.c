#include <stdio.h>

void main()
{
    double reta1, reta2, reta3;

    printf("Digite o comprimento da primeira reta: ");
    scanf("%lf", &reta1);
    printf("Digite o comprimento da segunda reta: ");
    scanf("%lf", &reta2);
    printf("Digite o comprimento da terceira reta: ");
    scanf("%lf", &reta3);

    // teste para saber o tipo de triângulo
    if (reta1 < reta2 + reta3 && reta2 < reta1 + reta3 && reta3 < reta1 + reta2)
    {
        if (reta1 == reta2 && reta2 == reta3)
        {
            printf("Triângulo Equilátero\n");
        }
        else if (reta1 == reta2 || reta1 == reta3 || reta2 == reta3)
        {
            printf("Triângulo Isósceles\n");
        }
        else
        {
            printf("Triângulo Escaleno\n");
        }
    }
    else
    {
        printf("As retas não formam um triângulo.\n");
    }
}