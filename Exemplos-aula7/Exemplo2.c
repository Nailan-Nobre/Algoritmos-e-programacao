#include <stdio.h>

void main()
{
    int n;
    int fat = 1;
    int i = 1;

    printf("Esse programa calcula o fatorial de um número inteiro positivo.\n");
    printf("Digite um número inteiro positivo: ");
    scanf("%d", &n);

    while (i <= n)
    {
        fat *= i;
        i++;
    }

    printf("O fatorial de %d é: %d\n", n, fat);
}