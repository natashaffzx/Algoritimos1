/* Lê um número real e converte para inteiro. */

#include <stdio.h>

int main() {
    float valor;
    printf("Digite um valor: ");
    scanf("%f", &valor);
    int convertido = (int)valor;
    printf("Valor inteiro: %d\n", convertido);
    return 0;
}
