#include <stdio.h>

// Exemplo de uso do operador & para obter o endereço de uma variável
int main(void) {
    
    int n = 8;
    printf("O valor de n eh: %d.\nO endereco eh: 0x%x.\n", n, &n);
}