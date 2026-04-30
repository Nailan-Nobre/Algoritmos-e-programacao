#include <stdio.h>

void main()
{

    int variavel;

    printf("Menu \n1 - Lasanha \nR$ 25,00 \n2 - Strogonoff \nR$ 20,00 \n3 - Macarronada \nR$ 15,00 \n4 - Salada \nR$ 10,00 \n5 - Sopa \nR$ 8,00 \n");
    printf("Digite o número do prato que deseja pedir: \n");
    scanf("%d", &variavel);

    switch (variavel)
    {
    case 1:
        printf("Sua Lasanha chegará em breve. \n");
        break;
    case 2:
        printf("Seu Strogonoff chegará em breve. \n");
        break;
    case 3:
        printf("Sua Macarronada chegará em breve. \n");
        break;
    case 4:
        printf("Sua Salada chegará em breve. \n");
        break;
    case 5:
        printf("Sua Sopa chegará em breve. \n");
        break;
    default:
        printf("Opção inválida. \n");
        break;
    }

}