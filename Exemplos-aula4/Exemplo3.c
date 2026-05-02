#include <stdio.h>
#include <math.h>

void main()
{

    double a, b, c, delta, raiz1, raiz2;

    printf("Digite os coeficientes a, b e c da equacao do segundo grau:\n");
    scanf("%lf %lf %lf", &a, &b, &c);
    delta = b * b - 4 * a * c;

    if (delta > 0)
    {
        raiz1 = (-b + sqrt(delta)) / (2 * a);
        raiz2 = (-b - sqrt(delta)) / (2 * a);
        printf("A equacao tem duas raizes reais distintas: %.2lf e %.2lf\n", raiz1, raiz2);
    }
    else if (delta == 0)
    {
        raiz1 = -b / (2 * a);
        printf("A equacao tem uma raiz real (raiz dupla): %.2lf\n", raiz1);
    }
    else
    {
        printf("A equacao nao tem raizes reais.\n");
    }
}