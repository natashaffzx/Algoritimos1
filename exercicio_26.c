/* Soma dois inteiros e verifica se o resultado é maior ou igual a 10. */

#include <stdio.h>

int main() {
    int x, y;
    printf("Digite dois numeros: ");
    scanf("%d %d", &x, &y);
    if (x + y >= 10) {
        printf("Soma >= 10\n");
    } else {
        printf("Soma < 10\n");
    }
    return 0;
}
