/* Lê um valor com casas decimais e mostra ele formatado com 2 casas. */

#include <stdio.h>

int main() {
    float numero;
    printf("Digite um numero real: ");
    scanf("%f", &numero);
    printf("Valor com duas casas: %.2f\n", numero);
    return 0;
}
