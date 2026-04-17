#include <stdio.h>
// Exemplo de operador de incremento pós-fixado

int main() {
    int a = 5, b;
    b = a++;

    printf("b: %d\na: %d", b, a);
    return 0;
}