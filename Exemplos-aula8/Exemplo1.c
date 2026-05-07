#include <stdio.h>

void main()
{
    int g, vet[10];
    for (g = 0; g < 10; g++)
    {
        vet[g] = 5 * g;
        printf("%d ", vet[g]);
    }
}