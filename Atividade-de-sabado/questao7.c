#include <stdio.h>

int main ()
{
    int contagemDias, mes, dia, quantMeses, quantDias;
    dia = 1;
    mes = dia * 30;

    printf("Digite um mes: ");
    scanf("%d", &quantMeses);
    printf("Digite um dia: ");
    scanf("%d", &quantDias);
    contagemDias = quantMeses * mes + quantDias;

    printf("A contagem de dias é: %d", contagemDias);
    return 0;
}
