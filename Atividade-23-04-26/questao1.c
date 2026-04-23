#include <stdio.h>

int main ()
{
    double m, dc, c, mm;

    printf("Digite a medida em metros:");
    scanf("%lf", &m);

    dc = m * 10;
    c = m * 100;
    mm = m * 1000;

    printf("%.2lfm em decímetros é: %.2lf\n", m, dc);
    printf("%.2lfm em centímetros é: %.2lf\n", m, c);
    printf("%.2lfm em milímetros é: %.2lf\n", m, mm);
}
