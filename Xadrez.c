#include <stdio.h>

int main() {

    // ++++++++++++++++++++++
    // Movimento da Torre
    // ++++++++++++++++++++++
    // A torre se move 5 casas para a direita - Laço for

    printf("Movimento da Torre:\n");
    int casasTorre = 5;
    for (int i = 1; i <= casasTorre; i++) {
        printf("Direita\n");
    }

    printf("\n");

    // ++++++++++++++++++++++
    // Movimento do Bispo
    // ++++++++++++++++++++++

    // O bispo se move 5 casas na diagonal para cima e à direita usando WHILE
    
    printf("Movimento do Bispo:\n");
    int casasBispo = 5;
    int j = 1;
    while (j <= casasBispo) {
        printf("Cima Direita\n");
        j++;
    }

    printf("\n");

    // ++++++++++++++++++++++
    // Movimento da Rainha
    // ++++++++++++++++++++++

    // A rainha se move 8 casas para a esquerda usando DO-WHILE
    
    printf("Movimento da Rainha:\n");
    int casasRainha = 8;
    int k = 1;
    do {
        printf("Esquerda\n");
        k++;
    } while (k <= casasRainha);

    return 0;
}
