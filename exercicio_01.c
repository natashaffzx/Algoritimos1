/* Programa simples para verificar se três valores podem formar um triângulo.
   Também identifica o tipo de triângulo: equilátero, isósceles ou escaleno. */

#include <stdio.h>

int main() 
{
   float a, b, c;

    printf("Informe os três lados do triângulo:\n");
    scanf("%f %f %f", &a, &b, &c);

    // Verifica se é possível formar um triângulo com esses lados
    if ((a < b + c) && (b < a + c) && (c < a + b)) {

        if (a == b && b == c) {
            printf("Triângulo Equilátero\n");
        }
        else if (a == b || a == c || b == c) {
            printf("Triângulo Isósceles\n");
        }
        else {
            printf("Triângulo Escaleno\n");
        }

    } else {
        printf("Os valores não formam um triângulo\n");
    }

    return 0;
}
