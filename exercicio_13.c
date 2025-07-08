/* Calcula a idade em meses a partir da data de nascimento e ano atual. */

#include <stdio.h>

int main() {
    int dia, mes, ano, anoAtual, idadeMeses;
    printf("Digite sua data de nascimento (dia mes ano): ");
    scanf("%d %d %d", &dia, &mes, &ano);
    printf("Digite o ano atual: ");
    scanf("%d", &anoAtual);
    idadeMeses = (anoAtual - ano) * 12 + (12 - mes);
    printf("Voce tem aproximadamente %d meses de idade.\n", idadeMeses);
    return 0;
}
