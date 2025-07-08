/* Verifica se a letra digitada é 'o' e responde com 'e'. */

#include <stdio.h>

int main() {
    char letra;
    printf("Digite uma letra: ");
    scanf(" %c", &letra);
    if (letra == 'o' || letra == 'O') {
        printf("Voce digitou 'o'. Resposta: 'e'\n");
    } else {
        printf("Letra diferente de 'o'\n");
    }
    return 0;
}
