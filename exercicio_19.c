/* Multiplica dois números reais e mostra o resultado convertido para inteiro. */

#include <stdio.h>

int main() {
    float x, y;
    printf("Digite dois reais: ");
    scanf("%f %f", &x, &y);
    int mult = (int)(x * y);
    printf("Multiplicacao convertida para inteiro: %d\n", mult);
    return 0;
}
