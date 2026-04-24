#include <stdio.h>

int main(void)
{
    int dia_a, mes_a, ano_a;
    int dia_b, mes_b, ano_b;

    printf("Digite a data A (dd/mm/aaaa): ");
    scanf("%d/%d/%d", &dia_a, &mes_a, &ano_a);

    printf("Digite a data B (dd/mm/aaaa): ");
    scanf("%d/%d/%d", &dia_b, &mes_b, &ano_b);

    if (ano_a < ano_b || (ano_a == ano_b && mes_a < mes_b) || (ano_a == ano_b && mes_a == mes_b && dia_a < dia_b)) {
        printf("A data A é anterior à data B.\n");
    } else if (ano_a > ano_b || (ano_a == ano_b && mes_a > mes_b) || (ano_a == ano_b && mes_a == mes_b && dia_a > dia_b)) {
        printf("A data A é posterior à data B.\n");
    } else {
        printf("As datas A e B são iguais.\n");
    }

    return 0;
}