/* Ordena três caracteres em ordem alfabética. */

#include <stdio.h>

int main() {
    char a, b, c, t;
    printf("Digite 3 letras: ");
    scanf(" %c %c %c", &a, &b, &c);
    if (a > b) { t = a; a = b; b = t; }
    if (b > c) { t = b; b = c; c = t; }
    if (a > b) { t = a; a = b; b = t; }
    printf("Ordem: %c %c %c\n", a, b, c);
    return 0;
}
