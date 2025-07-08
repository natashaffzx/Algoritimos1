/* Soma 3 números inteiros e mostra a soma e a média. */

#include <stdio.h>

int main() {
    int n1, n2, n3, soma;
    float media;
    printf("Digite tres numeros: ");
    scanf("%d %d %d", &n1, &n2, &n3);
    soma = n1 + n2 + n3;
    media = soma / 3.0;
    printf("Soma: %d\n", soma);
    printf("Media: %.2f\n", media);
    return 0;
}
