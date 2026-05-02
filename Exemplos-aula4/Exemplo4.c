#include <stdio.h>

void main()
{

    double n1, n2, n3, ordemCrescente;
    printf("Digite tres numeros aleatorios: ");
    scanf("%lf %lf %lf", &n1, &n2, &n3);

    if (n1 <= n2 && n1 <= n3)
    {
        ordemCrescente = n1;
        if (n2 <= n3)
        {
            printf("Ordem crescente: %.2lf, %.2lf, %.2lf\n", ordemCrescente, n2, n3);
        }
        else
        {
            printf("Ordem crescente: %.2lf, %.2lf, %.2lf\n", ordemCrescente, n3, n2);
        }
    }
    else if (n2 <= n1 && n2 <= n3)
    {
        ordemCrescente = n2;
        if (n1 <= n3)
        {
            printf("Ordem crescente: %.2lf, %.2lf, %.2lf\n", ordemCrescente, n1, n3);
        }
        else
        {
            printf("Ordem crescente: %.2lf, %.2lf, %.2lf\n", ordemCrescente, n3, n1);
        }
    }
    else
    {
        ordemCrescente = n3;
        if (n1 <= n2)
        {
            printf("Ordem crescente: %.2lf, %.2lf, %.2lf\n", ordemCrescente, n1, n2);
        }
        else
        {
            printf("Ordem crescente: %.2lf, %.2lf, %.2lf\n", ordemCrescente, n2, n1);
        }
    }

}