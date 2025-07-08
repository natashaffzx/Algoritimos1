/* Lê nome, idade, gênero e altura, e exibe as informações. */

#include <stdio.h>

int main() {
    char nome[50], sexo[10];
    int idade;
    float altura;

    printf("Digite seu nome: ");
    scanf("%s", nome);

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    printf("Digite seu genero: ");
    scanf("%s", sexo);

    printf("Digite sua altura: ");
    scanf("%f", &altura);

    printf("Nome: %s\nIdade: %d\nGenero: %s\nAltura: %.2f\n", nome, idade, sexo, altura);

    return 0;
}
