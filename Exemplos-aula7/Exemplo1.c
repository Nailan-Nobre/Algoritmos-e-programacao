#include <stdio.h>

void main()
{
    int n;
    int i = 1;
    printf("Esse programa imprime os n primeiros números impares.\n");
    printf("Digite a quantidade de números impares a serem impressos: ");
    scanf("%d", &n);

    while (i <= n)
    {
        printf("%d \n", i);
        i += 2;
    }

}
