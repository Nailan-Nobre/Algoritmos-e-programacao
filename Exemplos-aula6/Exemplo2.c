#include <stdio.h>

void main()
{

    char a;

    printf("Digite uma letra: ");
    scanf(" %c", &a);

    if (a >= 'a' && a <= 'z')
    {
        printf("É uma letra minúscula.\n");
    } else if (a >= 'A' && a <= 'Z')
    {
        printf("É uma letra maiúscula.\n");
    }
    else
    {
        printf("Não é uma letra.\n");
    }


}