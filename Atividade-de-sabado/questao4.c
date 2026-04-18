#include <stdio.h>

int main()
{
    int ano = 365, idade;

    printf("Qual a sua idade? ");
    scanf("%d", &idade);

    printf("Voce ja viveu %d dias", idade * ano);
    return 0;
}
