#include <stdio.h>

int main ()
{
    double ceucius, fahrenheit;
    printf("Digite a temperatura em Fahrenheit:");
    scanf("%lf", &fahrenheit);

    ceucius = (fahrenheit - 32) * 5/9;

    printf("%.2lf°F em Celsius é: %.2lf°C\n", fahrenheit, ceucius);

}
