/* O programa lê a altura da pessoa e compara com a media de 1.70m.
   Depois mostra se ela é mais alta, mais baixa ou igual à média. */

#include <stdio.h>

int main() {
    float alturaPessoa;
    float mediaAltura = 1.70;

    printf("Digite sua altura (ex: 1.75): ");
    scanf("%f", &alturaPessoa);

    if (alturaPessoa > mediaAltura) {
        printf("Voce é mais alto que a media.\n");
    } else if (alturaPessoa < mediaAltura) {
        printf("Voce é mais baixo que a media.\n");
    } else {
        printf("Voce tem a altura media exata.\n");
    }

    return 0;
}
