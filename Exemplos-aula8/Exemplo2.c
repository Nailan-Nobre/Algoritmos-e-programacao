#include <stdio.h>

void main()
{
    int i, j, n;
    printf("Digite o numero de alunos: ");
    scanf("%d", &n);
    double notas [n];
    printf("Digite as notas dos %d alunos: \n", n);
    for (i = 0; i < n; i++)
    {
        printf("nota %d: ", i + 1);
        scanf("%lf", &notas[i]);
    }
    printf("Notas dos alunos ateh %d:\n", i);
    for (j = 0; j < i; j++)
    {
        printf("nota %d: %.2lf\n", j + 1, notas[j]);
    }   
}