#include <stdio.h>

int main ()
{
    int ceucius, fahrenheit;
    printf("Digite a temperatura em Fahrenheit:");
    scanf("%d", &fahrenheit);

    ceucius = (fahrenheit - 32) * 5/9;

    printf("%d°F em Celsius é: %d°C\n", fahrenheit, ceucius);

}
