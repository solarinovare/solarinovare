#include <stdio.h>

int main() {
    // ++++++++++++++++++++++
    // Movimento da Torre
    // ++++++++++++++++++++++

    // A torre:  move 5 casas para a direita usando com FOR
    
    printf("Movimento da Torre:\n");
    int casasTorre = 5;
    for (int i = 1; i <= casasTorre; i++) {
        printf("Direita\n");
    }

    printf("\n");


    // ++++++++++++++++++++++
    // Movimento do Bispo
    // ++++++++++++++++++++++
    
    // O bispo: move 5 casas na diagonal para cima e à direita com WHILE
   
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

    // A rainha: move 8 casas para a esquerda com DO-WHILE
   
    printf("Movimento da Rainha:\n");
    int casasRainha = 8;
    int k = 1;
    do {
        printf("Esquerda\n");
        k++;
    } while (k <= casasRainha);

    printf("\n");

    // ----------------------
    // Movimento do Cavalo
    // ----------------------

    // O cavalo: move em "L": 2 casas para baixo e 1 para a esquerda
    
    // Usamos loops aninhados: FOR externo para o movimento completo
    
    // e WHILE interno para as casas individuais (2x "Baixo" e 1x "Esquerda")

    printf("Movimento do Cavalo:\n");

    int movimentosCavalo = 1; // Apenas 1 movimento completo de "L"
    for (int m = 0; m < movimentosCavalo; m++) {
        int passosBaixo = 0;

        // Primeiro, andar 2 casas para baixo com WHILE
        
        while (passosBaixo < 2) {
            printf("Baixo\n");
            passosBaixo++;
        }

        // Depois, andar 1 casa para a esquerda
        
        printf("Esquerda\n");
    }

    return 0;
}
