#include <stdio.h>

void main()
{
    int i;
    double vet1[5], vet2[5], resultado = 0;

    printf("Digite os 5 elementos do vetor 1: \n");
    for (i = 0; i < 5; i++)
    {
        printf("vet1[%d]: ", i);
        scanf("%lf", &vet1[i]);
    }
    printf("Digite os 5 elementos do vetor 2: \n");
    for (i = 0; i < 5; i++)
    {
        printf("vet2[%d]: ", i);
        scanf("%lf", &vet2[i]);
    }

    printf("Produto interno dos vetores: \n");
    for (i = 0; i < 5; i++)
    {
        resultado += vet1[i] * vet2[i];
        printf("%lf x %lf = %lf\n", vet1[i], vet2[i], vet1[i] * vet2[i]);
    }
    printf("Resultado final: %lf\n", resultado);
}