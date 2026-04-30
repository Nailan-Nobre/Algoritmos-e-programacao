#include <stdio.h>

void main()
{
    int variavel;

    printf("Menu \n1 - Lasanha \n2 - Strogonoff \n3 - Macarronada \n4 - Salada \n5 - Sopa \n");
    printf("Digite o número do prato que deseja conhecer: \n");
    scanf("%d", &variavel);

    switch (variavel)
    {
    case 1:
        printf("Lasanha é um prato de massa italiana. \n");
        break;
    case 2:
        printf("Strogonoff é um prato de carne com cebola e cogumelos. \n");
        break;
    case 3:
        printf("Macarronada é um prato de massa com molho de tomate e carne. \n");
        break;
    case 4:
        printf("Salada é um prato de legumes e vegetais. \n");
        break;
    case 5:
        printf("Sopa é um prato líquido, geralmente feito com ingredientes cozidos em água ou caldo. \n");
        break;
    default:
        printf("Opção inválida. \n");
        break;
    }
}
