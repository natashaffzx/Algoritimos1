/* Verifica se o cidadão precisa se alistar no exército. */

#include <stdio.h>
#include <string.h>

int main() {
    int idade;
    char sexo[10], def[4];
    printf("Idade: ");
    scanf("%d", &idade);
    printf("Sexo: ");
    scanf("%s", sexo);
    printf("Possui deficiencia (sim/nao): ");
    scanf("%s", def);
    if (strcmp(sexo, "masculino") == 0 && idade >= 18 && idade <= 45 && strcmp(def, "nao") == 0) {
        printf("Alistamento obrigatorio\n");
    } else {
        printf("Nao precisa se alistar\n");
    }
    return 0;
}
