#include <stdio.h>
#include <math.h>

int main ()
{
    int x1, y1, x2, y2, distancia;

    printf("digite o x do ponto 1: ");
    scanf("%d", &x1);
    printf("digite o y do ponto 1: ");
    scanf("%d", &y1);
    printf("digite o x do ponto 2: ");
    scanf("%d", &x2);
    printf("digite o y do ponto 2: ");
    scanf("%d", &y2);

    distancia = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    printf("A distancia entre os pontos é: %d", distancia);
    return 0;
}
