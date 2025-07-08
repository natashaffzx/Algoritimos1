/* Esse programa mostra um pequeno cardápio com 3 opções: Café, Chá e Água.
   O usuário escolhe uma delas digitando o número correspondente.
   O `switch` é usado para mostrar qual foi a escolha ou dizer se é inválida. */

#include <stdio.h>

int main() {
    int escolha;
    printf("1 - Café\n2 - Chá\n3 - Água\nDigite uma opção: ");
    scanf("%d", &escolha);
    switch (escolha) {
        case 1: printf("Voce escolheu Café\n"); break;
        case 2: printf("Voce escolheu Chá\n"); break;
        case 3: printf("Voce escolheu Água\n"); break;
        default: printf("Opcao invalida\n"); break;
    }
    return 0;
}
