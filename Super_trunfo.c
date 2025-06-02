#include <stdio.h>

int main() {
    // Carta 1 // Declaração de dados da carta
    char estado1 = 'A';
    char codigo1[] = "A01";
    char nomeCidade1[] = "São Paulo";
    float populacao1 = (float)12325000;
    float area1 = 1521.11f;
    float pib1 = 699.28f;
    float pontosTuristicos1 = (float)50;

    float densidade1 = (float)populacao1 / area1;
    float pibPerCapita1 = (float)(pib1 * 1000000000.0f) / populacao1;

    // Carta 2 // Declaração de dados da carta
    char estado2 = 'B';
    char codigo2[] = "B02";
    char nomeCidade2[] = "Rio de Janeiro";
    float populacao2 = (float)6748000;
    float area2 = 1200.25f;
    float pib2 = 300.50f;
    float pontosTuristicos2 = (float)30;

    float densidade2 = (float)populacao2 / area2;
    float pibPerCapita2 = (float)(pib2 * 1000000000.0f) / populacao2;

    // Exibição dos dados da Carta 1
    printf("Carta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %.0f\n", populacao1);
    printf("Área: %.4f km²\n", area1);
    printf("PIB: %.4f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %.0f\n", pontosTuristicos1);
    printf("Densidade Populacional: %.4f hab/km²\n", densidade1);
    printf("PIB per Capita: %.4f reais\n\n", pibPerCapita1);

    // Exibição dos dados da Carta 2
    printf("Carta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %.0f\n", populacao2);
    printf("Área: %.4f km²\n", area2);
    printf("PIB: %.4f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %.0f\n", pontosTuristicos2);
    printf("Densidade Populacional: %.4f hab/km²\n", densidade2);
    printf("PIB per Capita: %.4f reais\n", pibPerCapita2);

    return 0;
}

// Este programa lê os dados de duas cartas dascidades e seus atributos.
