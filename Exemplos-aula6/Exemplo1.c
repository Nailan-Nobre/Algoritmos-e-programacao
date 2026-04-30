#include <stdio.h>

void main()
{
    char a;
    printf("Digite uma letra: ");
    scanf(" %c", &a);

    switch (a)
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
        printf("É uma vogal.\n");
        break;
    default:
        printf("É uma consoante.\n");
        break;
    }

}