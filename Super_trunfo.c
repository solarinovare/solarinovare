#include <stdio.h>
#include <string.h>

int main() {
    // ========== DECLARAÇÃO DAS VARIÁVEIS ==========
    
    // Carta 1
    char estado1[3];
    char codigo1[4];
    char nomeCidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;
    
    // Carta 2
    char estado2[3];
    char codigo2[4];
    char nomeCidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;
    
    // Variáveis para os cálculos
    float densidadePopulacional1, densidadePopulacional2;
    float pibPerCapita1, pibPerCapita2;
    
    // ========== ENTRADA DE DADOS - CARTA 1 ==========
    
    printf("=== CADASTRO DE CARTAS - SUPER TRUNFO ===\n\n");
    printf("--- CADASTRO DA CARTA 1 ---\n");
    
    printf("Digite o estado (sigla - ex: SP): ");
    scanf("%s", estado1);
    
    printf("Digite o código da carta (ex: A01): ");
    scanf("%s", codigo1);
    
    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", nomeCidade1); // lê string com espaços
    
    printf("Digite a população: ");
    scanf("%d", &populacao1);
    
    printf("Digite a área (km²): ");
    scanf("%f", &area1);
    
    printf("Digite o PIB (em bilhões de reais): ");
    scanf("%f", &pib1);
    
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos1);
    
    // ========== ENTRADA DE DADOS - CARTA 2 ==========
    
    printf("\n--- CADASTRO DA CARTA 2 ---\n");
    
    printf("Digite o estado (sigla - ex: RJ): ");
    scanf("%s", estado2);
    
    printf("Digite o código da carta (ex: B02): ");
    scanf("%s", codigo2);
    
    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", nomeCidade2);
    
    printf("Digite a população: ");
    scanf("%d", &populacao2);
    
    printf("Digite a área (km²): ");
    scanf("%f", &area2);
    
    printf("Digite o PIB (em bilhões de reais): ");
    scanf("%f", &pib2);
    
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos2);
    
    // ========== CÁLCULOS DOS ATRIBUTOS DERIVADOS ==========
    
    // Cálculo da Densidade Populacional (habitantes por km²)
    densidadePopulacional1 = (float)populacao1 / area1;
    densidadePopulacional2 = (float)populacao2 / area2;
    
    // Cálculo do PIB per capita (em reais)
    pibPerCapita1 = (pib1 * 1000000000) / populacao1; // convertendo bilhões para reais
    pibPerCapita2 = (pib2 * 1000000000) / populacao2;
    
    // ========== EXIBIÇÃO DOS DADOS DAS CARTAS ==========
    
    printf("\n\n=== DADOS DAS CARTAS CADASTRADAS ===\n\n");
    
    printf("--- CARTA 1 ---\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %d habitantes\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional1);
    printf("PIB per capita: R$ %.2f\n\n", pibPerCapita1);
    
    printf("--- CARTA 2 ---\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %d habitantes\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional2);
    printf("PIB per capita: R$ %.2f\n\n", pibPerCapita2);
    
    // ========== COMPARAÇÃO DAS CARTAS ==========
    
    /* 
     * ATRIBUTO ESCOLHIDO PARA COMPARAÇÃO: POPULAÇÃO
     * Regra: Para população, a carta com MAIOR valor vence
     */
    
    printf("=== COMPARAÇÃO DE CARTAS ===\n");
    printf("Atributo escolhido para comparação: População\n\n");
    
    printf("Comparação de cartas (Atributo: População):\n");
    printf("Carta 1 - %s (%s): %d habitantes\n", nomeCidade1, estado1, populacao1);
    printf("Carta 2 - %s (%s): %d habitantes\n", nomeCidade2, estado2, populacao2);
    
    printf("\n--- RESULTADO DA COMPARAÇÃO ---\n");
    
    // Estrutura de decisão para determinar a carta vencedora
    if (populacao1 > populacao2) {
        
        printf("🏆 CARTA 1 VENCEU! 🏆\n");
        printf("Vencedora: %s (%s)\n", nomeCidade1, estado1);
        printf("Diferença: %d habitantes a mais que %s\n", 
               populacao1 - populacao2, nomeCidade2);
    } else if (populacao2 > populacao1) {
        printf("🏆 CARTA 2 VENCEU! 🏆\n");
        printf("Vencedora: %s (%s)\n", nomeCidade2, estado2);
        printf("Diferença: %d habitantes a mais que %s\n", 
               populacao2 - populacao1, nomeCidade1);
    } else {
        printf("🤝 EMPATE! 🤝\n");
        printf("Ambas as cartas têm a mesma população: %d habitantes\n", populacao1);
    }
    
    printf("\nObrigado por jogar Super Trunfo!\n");
    
    return 0;
}
