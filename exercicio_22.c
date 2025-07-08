/* Calcula a resistência equivalente de dois resistores em paralelo. */

#include <stdio.h>

int main() {
    float r1, r2, r_eq;
    printf("Digite R1 e R2: ");
    scanf("%f %f", &r1, &r2);
    r_eq = 1 / ((1 / r1) + (1 / r2));
    printf("Resistencia equivalente: %.2f ohms\n", r_eq);
    return 0;
}
