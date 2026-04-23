#include <stdio.h>

int main ()
{
    double n1, n2;
    double soma, subtracao, divisao, multiplicacao;

    printf("Escolha dois números: \n");
    printf("Número 1:");
    scanf("%lf", &n1);
    printf("Número 2:");
    scanf("%lf", &n2);

    soma = n1 + n2;
    subtracao = n1 - n2;
    divisao = n1 / n2;
    multiplicacao = n1 * n2;

    printf("Soma: %.2lf\n", soma);
    printf("Subtração: %.2lf\n", subtracao);
    printf("Divisão: %.2lf\n", divisao);
    printf("Multiplicação: %.2lf\n", multiplicacao);
}