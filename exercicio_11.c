/* O programa pede dois números inteiros e divide o primeiro pelo segundo.
   Antes da divisão, ele verifica se o segundo número é diferente de zero
   para evitar erro de divisão por zero. */

#include <stdio.h>

int main() {
    int a, b;
    printf("Digite dois numeros: ");
    scanf("%d %d", &a, &b);
    if (b != 0) {
        printf("Resultado: %d\n", a / b);
    } else {
        printf("Erro: nao pode dividir por zero\n");
    }
    return 0;
}
