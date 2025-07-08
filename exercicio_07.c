/* Soma dois pares de números e divide os resultados. */

#include <stdio.h>

int main() {
    int a1, a2, b1, b2;
    float resultado;

    printf("Digite dois numeros: ");
    scanf("%d %d", &a1, &a2);

    printf("Digite mais dois numeros: ");
    scanf("%d %d", &b1, &b2);

    resultado = (a1 + a2) / (float)(b1 + b2);

    printf("Resultado: %.2f\n", resultado);

    return 0;
}
