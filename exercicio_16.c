/* Lê três medidas e mostra as dimensões com duas casas decimais. */

#include <stdio.h>

int main() {
    float comp, larg, alt;
    printf("Digite o comprimento, largura e altura: ");
    scanf("%f %f %f", &comp, &larg, &alt);
    printf("Dimensoes: %.2f x %.2f x %.2f\n", comp, larg, alt);
    return 0;
}
