/* O programa pede três números e mostra eles de volta na tela, na mesma ordem. */

#include <stdio.h>

int main() {
    int primeiro, segundo, terceiro;

    printf("Digite tres numeros inteiros:\n");
    scanf("%d %d %d", &primeiro, &segundo, &terceiro);

    printf("Voce digitou: %d, %d, %d\n", primeiro, segundo, terceiro);

    return 0;
}
