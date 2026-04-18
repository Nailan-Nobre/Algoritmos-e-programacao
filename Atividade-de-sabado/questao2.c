#include <stdio.h>

int main()
{
    int cavalo, ferraduraPorCavalo;

    printf("quantos cavalos? ");
    scanf("%d", &cavalo);
    ferraduraPorCavalo = 4;

    printf("Total de ferraduras: %d", cavalo * ferraduraPorCavalo);
    return 0;
}
