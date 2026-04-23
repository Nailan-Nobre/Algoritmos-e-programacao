#include <stdio.h>
#include <math.h>

int main ()
{
    double n1, n2;
    double soma, produto_por_quadrado, quadrado_n1, raiz_soma_quadrados, seno_n1_menos_n2, modulo_n1;

    printf("Escolha dois números: \n");
    printf("Número 1:");
    scanf("%lf", &n1);
    printf("Número 2:");
    scanf("%lf", &n2);

    soma = n1 + n2;
    produto_por_quadrado = n1 * (n2*n2);
    quadrado_n1 = n1*n1;
    raiz_soma_quadrados = sqrt((n1 * n1) + (n2 * n2));
    seno_n1_menos_n2 = sin(n1 - n2);
    modulo_n1 = fabs(n1);

    printf("%.2lf + %.2lf = %.2lf\n", n1, n2, soma);
    printf("Produto de %.2lf pelo quadrado de %.2lf: %.2lf\n", n1, n2, produto_por_quadrado);
    printf("Quadrado de %.2lf: %.2lf\n", n1, quadrado_n1);
    printf("Raiz da soma dos quadrados: %.2lf\n", raiz_soma_quadrados);
    printf("Seno da diferença entre %.2lf e %.2lf: %.2lf\n", n1, n2, seno_n1_menos_n2);
    printf("Módulo de %.2lf: %.2lf\n", n1, modulo_n1);
}