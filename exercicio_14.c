/* Lê dois valores reais e cinco caracteres, depois mostra tudo na tela. */

#include <stdio.h>

int main() {
    float a, b;
    char c1, c2, c3, c4, c5;
    printf("Digite dois numeros reais: ");
    scanf("%f %f", &a, &b);
    printf("Digite cinco letras: ");
    scanf(" %c %c %c %c %c", &c1, &c2, &c3, &c4, &c5);
    printf("Numeros: %.2f e %.2f\n", a, b);
    printf("Letras: %c %c %c %c %c\n", c1, c2, c3, c4, c5);
    return 0;
}
