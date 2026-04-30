#include <stdio.h>

void main()
{
    char operacao;
    double a, b;
    double soma, subtracao, multiplicacao, divisao; 

    printf("Digite o valor de a:");
    scanf("%lf", &a);
    printf("Digite o valor de b: ");
    scanf("%lf", &b);
    printf("Digite a operação (+, -, *, /): ");
    scanf(" %c", &operacao);

    soma = a + b;
    subtracao = a - b;
    multiplicacao = a * b;
    divisao = a / b;

    switch (operacao)
    {
    case '+':
        printf("%2.2lf + %2.2lf = %2.2lf\n", a, b, soma);
        break;
    case '-':
        printf("%2.2lf - %2.2lf = %2.2lf\n", a, b, subtracao);
        break;
    case '*':
        printf("%2.2lf * %2.2lf = %2.2lf\n", a, b, multiplicacao);
        break;
    case '/':
        printf("%2.2lf / %2.2lf = %2.2lf\n", a, b, divisao);
        break;
    default:
        printf("Operação inválida.\n");
        break;
    }

}