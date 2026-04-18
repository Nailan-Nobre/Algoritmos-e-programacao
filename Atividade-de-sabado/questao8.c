#include <stdio.h>

int main ()
{
    float n1, n2, n3, mediaPonderada;
    int p1 = 1, p2 = 2, p3 = 3, somaPesos;

    printf("Digite a primeira nota: ");
    scanf("%f", &n1);   
    printf("Digite a segunda nota: ");
    scanf("%f", &n2);
    printf("Digite a terceira nota: ");
    scanf("%f", &n3);
    somaPesos = p1 + p2 + p3;
    mediaPonderada = (n1 * p1 + n2 * p2 + n3 * p3) / somaPesos;

    printf("A media ponderada é: %.2f", mediaPonderada);    
    return 0;
}
