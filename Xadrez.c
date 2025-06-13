#include <stdio.h>

// ---------------------------------------------
// Função recursiva para movimentar a Torre
// Move para a direita N casas
void moverTorre(int casas) {
    if (casas <= 0) {
        return;
    }
    printf("Direita\n");
    moverTorre(casas - 1); // Chamada recursiva
}

// ---------------------------------------------
// Função recursiva para movimentar a Rainha
// Move para a esquerda N casas
void moverRainha(int casas) {
    if (casas <= 0) {
        return;
    }
    printf("Esquerda\n");
    moverRainha(casas - 1); // Chamada recursiva
}

// ---------------------------------------------
// Função recursiva para movimentar o Bispo
// Move na diagonal (Cima Direita) N casas
void moverBispoRecursivo(int casas) {
    if (casas <= 0) {
        return;
    }
    printf("Cima Direita\n");
    moverBispoRecursivo(casas - 1); // Chamada recursiva
}

// ---------------------------------------------
// Função com loops aninhados para movimentar o Bispo
// Simula o movimento na diagonal (Cima Direita)
void moverBispoComLoops(int casas) {
    for (int i = 1; i <= casas; i++) { // Movimento vertical
        for (int j = 1; j <= 1; j++) { // Movimento horizontal (sempre 1)
            printf("Cima Direita\n");
        }
    }
}

// ---------------------------------------------
// Função com loops aninhados complexos para o Cavalo
// Move em "L": 2 casas para Cima e 1 para Direita
void moverCavalo() {
    printf("Movimento do Cavalo:\n");

    int movimentosVerticais = 2;
    int movimentosHorizontais = 1;

    for (int i = 1; i <= movimentosVerticais; i++) { // Loop vertical
        printf("Cima\n");

        if (i == movimentosVerticais) {
            for (int j = 1; j <= movimentosHorizontais; j++) { // Loop horizontal
                if (j == 1) {
                    printf("Direita\n");
                } else {
                    continue;
                }
            }
        }
    }
}

// ---------------------------------------------
// Função para movimentar o Rei
// O Rei se move uma casa em qualquer direção
void moverRei() {
    printf("Movimento do Rei:\n");

    const char *direcoes[] = {
        "Cima",
        "Baixo",
        "Esquerda",
        "Direita",
        "Cima Direita",
        "Cima Esquerda",
        "Baixo Direita",
        "Baixo Esquerda"
    };

    int totalDirecoes = 8;

    for (int i = 0; i < totalDirecoes; i++) {
        printf("%s\n", direcoes[i]);
    }
}

// ---------------------------------------------
// Função principal
int main() {
    // -------------------------------
    // Movimento da Torre (Recursivo)
    printf("Movimento da Torre:\n");
    moverTorre(5);
    printf("\n");

    // -------------------------------
    // Movimento do Bispo (Recursivo)
    printf("Movimento do Bispo (Recursivo):\n");
    moverBispoRecursivo(5);
    printf("\n");

    // -------------------------------
    // Movimento do Bispo (Loops Aninhados)
    printf("Movimento do Bispo (Loops Aninhados):\n");
    moverBispoComLoops(5);
    printf("\n");

    // -------------------------------
    // Movimento da Rainha (Recursivo)
    printf("Movimento da Rainha:\n");
    moverRainha(8);
    printf("\n");

    // -------------------------------
    // Movimento do Cavalo (Loops Complexos)
    moverCavalo();
    printf("\n");

    // -------------------------------
    // Movimento do Rei
    moverRei();
    printf("\n");

    return 0;
}
