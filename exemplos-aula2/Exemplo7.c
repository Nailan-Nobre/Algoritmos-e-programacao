#include <stdio.h>

int main() {
    double n1, n2, soma, subtracao, multiplicacao, divisao;

    printf("numero 1: ");
    scanf("%lf", &n1);
    printf("numero 2: ");
    scanf("%lf", &n2);

    soma = n1 + n2;
    subtracao = n1 - n2;
    multiplicacao = n1 *n2;
    divisao = n1 / n2;
    
    printf("soma: %.2f\nsubtracao: %.2f\nmultiplicacao: %.2f\ndivisao: %.2f", soma, subtracao, multiplicacao, divisao);
    return 0;
}
