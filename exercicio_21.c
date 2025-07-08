/* Verifica se o resto da divisão entre dois números é ímpar. */

#include <stdio.h>

int main() {
    int n1, n2;
    printf("Digite dois numeros: ");
    scanf("%d %d", &n1, &n2);
    if (n2 != 0) {
        int resto = n1 % n2;
        if (resto % 2 != 0)
            printf("Resto impar: %d\n", resto);
        else
            printf("Resto par\n");
    } else {
        printf("Erro: divisor zero\n");
    }
    return 0;
}
