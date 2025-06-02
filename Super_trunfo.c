#include <stdio.h>

int main() {
    // Carta 1
    char estado1 = 'A';
    char codigo1[] = "A01";
    char nomeCidade1[] = "São Paulo";
    unsigned long int populacao1 = 12325000;
    float area1 = 1521.11f;
    float pib1 = 699.28f; // em bilhões
    int pontosTuristicos1 = 50;
    float densidade1 = (float)populacao1 / area1;
    float pibPerCapita1 = (pib1 * 1000000000.0f) / populacao1;
    float superPoder1 = populacao1 + area1 + pib1 + pontosTuristicos1 + pibPerCapita1 + (1.0f / densidade1);

    // Carta 2
    char estado2 = 'B';
    char codigo2[] = "B02";
    char nomeCidade2[] = "Rio de Janeiro";
    unsigned long int populacao2 = 6748000;
    float area2 = 1200.25f;
    float pib2 = 300.50f;
    int pontosTuristicos2 = 30;
    float densidade2 = (float)populacao2 / area2;
    float pibPerCapita2 = (pib2 * 1000000000.0f) / populacao2;
    float superPoder2 = populacao2 + area2 + pib2 + pontosTuristicos2 + pibPerCapita2 + (1.0f / densidade2);

    // Dados da Carta 1
    printf("Carta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.4f km²\n", area1);
    printf("PIB: %.4f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.4f hab/km²\n", densidade1);
    printf("PIB per Capita: %.4f reais\n", pibPerCapita1);
    printf("Super Poder: %.4f\n\n", superPoder1);

    // Dados da Carta 2
    printf("Carta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.4f km²\n", area2);
    printf("PIB: %.4f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.4f hab/km²\n", densidade2);
    printf("PIB per Capita: %.4f reais\n", pibPerCapita2);
    printf("Super Poder: %.4f\n\n", superPoder2);

    // Comparações das cartas
    printf("Comparação de Cartas:\n");
    printf("População: Carta 1 venceu (%d)\n", populacao1 > populacao2);
    printf("Área: Carta 1 venceu (%d)\n", area1 > area2);
    printf("PIB: Carta 1 venceu (%d)\n", pib1 > pib2);
    printf("Pontos Turísticos: Carta 1 venceu (%d)\n", pontosTuristicos1 > pontosTuristicos2);
    printf("Densidade Populacional: Carta 1 venceu (%d)\n", densidade1 < densidade2); // menor vence
    printf("PIB per Capita: Carta 1 venceu (%d)\n", pibPerCapita1 > pibPerCapita2);
    printf("Super Poder: Carta 1 venceu (%d)\n", superPoder1 > superPoder2);

    return 0;
}

