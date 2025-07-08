/* Calcula o n-ésimo número da sequência de Fibonacci. */

#include <stdio.h>

int fibonacci(int n) {
    if (n <= 1) return n;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int n;
    printf("Digite um numero: ");
    scanf("%d", &n);
    printf("Fibonacci: %d\n", fibonacci(n));
    return 0;
}
