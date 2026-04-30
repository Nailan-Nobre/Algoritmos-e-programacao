#include <stdio.h>

void main()
{

    float n;

    printf("Digite a nota do aluno: ");
    scanf("%f", &n);

    if (n >= 7)
    {
        printf("Aluno aprovado\n");
    }
    else if (n >= 5 && n < 7)
    {
        printf("Aluno em prova final\n");
        printf("Digite a nota da prova final: ");
        scanf("%f", &n);
        if (n >= 5)
        {
            printf("Aluno aprovado\n");
        }
        else
        {
            printf("Aluno reprovado\n");
        }
    }
    else if (n < 5)
    {
        printf("Aluno reprovado\n");
    }
}
