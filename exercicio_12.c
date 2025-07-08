/* Conta quantas letras foram digitadas até o caractere '0'. */

#include <stdio.h>

int main() {
    char letra;
    int contador = 0;
    printf("Digite letras (digite '0' para parar):\n");
    while (1) {
        letra = getchar();
        if (letra == '0') break;
        contador++;
    }
    printf("Total de letras digitadas: %d\n", contador);
    return 0;
}
