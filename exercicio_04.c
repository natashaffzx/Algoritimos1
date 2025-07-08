/* O programa pede dois anos e mostra todos os anos bissextos entre eles. */

#include <stdio.h>

int main() {
    int inicio, fim;

    printf("Digite o primeiro ano: ");
    scanf("%d", &inicio);

    printf("Digite o ultimo ano: ");
    scanf("%d", &fim);

    printf("Anos bissextos no intervalo:\n");
    for (int ano = inicio; ano <= fim; ano++) {
        if ((ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0)) {
            printf("%d ", ano);
        }
    }

    printf("\n");

    return 0;
}
