/* O código lê um número inteiro do usuário e verifica se ele é par ou ímpar.
   Para isso, usa o operador de resto (%) e mostra o resultado na tela. */

#include <stdio.h>

int main() {
    int valor;
    printf("Digite um numero inteiro: ");
    scanf("%d", &valor);
    if (valor % 2 == 0) {
        printf("Numero par\n");
    } else {
        printf("Numero impar\n");
    }
    return 0;
}
