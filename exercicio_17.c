/* Ordena 5 números inteiros do menor para o maior. */

#include <stdio.h>

int main() {
    int v[5], i, j, temp;
    printf("Digite 5 numeros: ");
    for (i = 0; i < 5; i++) scanf("%d", &v[i]);
    for (i = 0; i < 4; i++) {
        for (j = i + 1; j < 5; j++) {
            if (v[i] > v[j]) {
                temp = v[i];
                v[i] = v[j];
                v[j] = temp;
            }
        }
    }
    printf("Ordem crescente: ");
    for (i = 0; i < 5; i++) printf("%d ", v[i]);
    printf("\n");
    return 0;
}
