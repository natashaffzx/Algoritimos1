/* Lê 6 números e exibe todos como se fossem de um sorteio. */

#include <stdio.h>

int main() {
    int numeros[6];
    printf("Digite 6 numeros: ");
    for (int i = 0; i < 6; i++) scanf("%d", &numeros[i]);
    printf("Sorteio: ");
    for (int i = 0; i < 6; i++) printf("%d ", numeros[i]);
    printf("\n");
    return 0;
}
