#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

// Códigos ANSI para cores
#define VERDE "\033[1;32m"
#define VERMELHO "\033[1;31m"
#define AMARELO "\033[1;33m"
#define AZUL "\033[1;34m"
#define RESET "\033[0m"

// Estrutura para representar um país
typedef struct {
    char nome[50];
    int populacao;
    float area;
    float pib;
    int pontosTuristicos;
    float densidadeDemografica;
} Pais;

// Função para exibir o menu de seleção de atributos
void exibirMenuAtributos(int atributoExcluido) {
    printf(VERDE "\n========== SELEÇÃO DE ATRIBUTOS ==========\n" RESET);
    printf("Escolha um atributo para comparar:\n");
    
    if (atributoExcluido != 1) printf("1 - População\n");
    if (atributoExcluido != 2) printf("2 - Área (km²)\n");
    if (atributoExcluido != 3) printf("3 - PIB (bilhões de reais)\n");
    if (atributoExcluido != 4) printf("4 - Número de Pontos Turísticos\n");
    if (atributoExcluido != 5) printf("5 - Densidade Demográfica (hab/km²)\n");
    
    printf(VERDE "Opção: " RESET);
}

// Função para obter o valor do atributo selecionado
float obterValorAtributo(Pais pais, int atributo) {
    switch (atributo) {
        case 1: return (float)pais.populacao;
        case 2: return pais.area;
        case 3: return pais.pib;
        case 4: return (float)pais.pontosTuristicos;
        case 5: return pais.densidadeDemografica;
        default: return 0.0;
    }
}

// Função para obter o nome do atributo
char* obterNomeAtributo(int atributo) {
    switch (atributo) {
        case 1: return "População";
        case 2: return "Área (km²)";
        case 3: return "PIB (bilhões de reais)";
        case 4: return "Pontos Turísticos";
        case 5: return "Densidade Demográfica (hab/km²)";
        default: return "Atributo Inválido";
    }
}

// Função para obter a unidade do atributo
char* obterUnidadeAtributo(int atributo) {
    switch (atributo) {
        case 1: return "habitantes";
        case 2: return "km²";
        case 3: return "bilhões de reais";
        case 4: return "pontos turísticos";
        case 5: return "hab/km²";
        default: return "";
    }
}

// Função para comparar um único atributo
int compararAtributo(float valor1, float valor2, int atributo) {
    // Para densidade demográfica, menor valor vence (retorna 1 se valor1 < valor2)
    if (atributo == 5) {
        return (valor1 < valor2) ? 1 : (valor1 > valor2) ? -1 : 0;
    }
    // Para outros atributos, maior valor vence
    return (valor1 > valor2) ? 1 : (valor1 < valor2) ? -1 : 0;
}

// Função para exibir o resultado da comparação
void exibirResultado(Pais pais1, Pais pais2, int atributo1, int atributo2) {
    printf(VERMELHO "\n========== RESULTADO DA COMPARAÇÃO ==========\n" RESET);
    
    // Obter valores dos atributos
    float valor1_attr1 = obterValorAtributo(pais1, atributo1);
    float valor1_attr2 = obterValorAtributo(pais1, atributo2);
    float valor2_attr1 = obterValorAtributo(pais2, atributo1);
    float valor2_attr2 = obterValorAtributo(pais2, atributo2);
    
    // Exibir informações dos países
    printf(AZUL "País 1: %s\n" RESET, pais1.nome);
    printf("  %s: %.2f %s\n", obterNomeAtributo(atributo1), valor1_attr1, obterUnidadeAtributo(atributo1));
    printf("  %s: %.2f %s\n", obterNomeAtributo(atributo2), valor1_attr2, obterUnidadeAtributo(atributo2));
    
    printf(AZUL "\nPaís 2: %s\n" RESET, pais2.nome);
    printf("  %s: %.2f %s\n", obterNomeAtributo(atributo1), valor2_attr1, obterUnidadeAtributo(atributo1));
    printf("  %s: %.2f %s\n", obterNomeAtributo(atributo2), valor2_attr2, obterUnidadeAtributo(atributo2));
    
    // Comparar atributos individualmente
    printf(AMARELO "\n--- COMPARAÇÃO POR ATRIBUTO ---\n" RESET);
    
    int resultado1 = compararAtributo(valor1_attr1, valor2_attr1, atributo1);
    printf("%s: ", obterNomeAtributo(atributo1));
    if (resultado1 == 1) {
        printf(VERDE "%s venceu!\n" RESET, pais1.nome);
    } else if (resultado1 == -1) {
        printf(VERDE "%s venceu!\n" RESET, pais2.nome);
    } else {
        printf(AMARELO "Empate!\n" RESET);
    }
    
    int resultado2 = compararAtributo(valor1_attr2, valor2_attr2, atributo2);
    printf("%s: ", obterNomeAtributo(atributo2));
    if (resultado2 == 1) {
        printf(VERDE "%s venceu!\n" RESET, pais1.nome);
    } else if (resultado2 == -1) {
        printf(VERDE "%s venceu!\n" RESET, pais2.nome);
    } else {
        printf(AMARELO "Empate!\n" RESET);
    }
    
    // Calcular e comparar somas
    float soma1 = valor1_attr1 + valor1_attr2;
    float soma2 = valor2_attr1 + valor2_attr2;
    
    printf(AMARELO "\n--- RESULTADO FINAL (SOMA DOS ATRIBUTOS) ---\n" RESET);
    printf("%s: %.2f + %.2f = %.2f\n", pais1.nome, valor1_attr1, valor1_attr2, soma1);
    printf("%s: %.2f + %.2f = %.2f\n", pais2.nome, valor2_attr1, valor2_attr2, soma2);
    
    // Determinar vencedor final usando operador ternário
    printf(VERMELHO "\n🏆 VENCEDOR: " RESET);
    printf(VERDE "%s\n" RESET, 
           (soma1 > soma2) ? pais1.nome : 
           (soma2 > soma1) ? pais2.nome : 
           "EMPATE!");
}

// Função para validar entrada do usuário
int lerOpcaoValida(int atributoExcluido) {
    int opcao;
    int entradaValida = 0;
    
    do {
        if (scanf("%d", &opcao) != 1) {
            // Limpar buffer em caso de entrada inválida
            while (getchar() != '\n');
            printf(VERMELHO "Entrada inválida! Digite um número: " RESET);
            continue;
        }
        
        // Verificar se a opção é válida e não foi excluída
        if (opcao >= 1 && opcao <= 5 && opcao != atributoExcluido) {
            entradaValida = 1;
        } else {
            printf(VERMELHO "Opção inválida! Escolha uma opção disponível: " RESET);
        }
    } while (!entradaValida);
    
    return opcao;
}

int main() {
    // Inicialização dos países (dados pré-cadastrados)
    Pais brasil = {
        "Brasil",
        211000000,
        8515767.0,
        1868.0,
        5,
        211000000 / 8515767.0
    };
    
    Pais argentina = {
        "Argentina",
        45000000,
        2780000.0,
        500.0,
        3,
        45000000 / 2780000.0
    };
    
    printf(VERDE "========== SUPER TRUNFO - DESAFIO FINAL ==========\n" RESET);
    printf("Bem-vindo ao Super Trunfo! Você irá comparar dois países\n");
    printf("usando DOIS atributos diferentes.\n");
    
    // Seleção do primeiro atributo
    exibirMenuAtributos(-1); // -1 indica que nenhum atributo foi excluído ainda
    int primeiroAtributo = lerOpcaoValida(-1);
    
    printf(VERDE "\nPrimeiro atributo selecionado: %s\n" RESET, obterNomeAtributo(primeiroAtributo));
    
    // Seleção do segundo atributo (excluindo o primeiro)
    printf(AMARELO "\nAgora escolha o SEGUNDO atributo:\n" RESET);
    exibirMenuAtributos(primeiroAtributo);
    int segundoAtributo = lerOpcaoValida(primeiroAtributo);
    
    printf(VERDE "\nSegundo atributo selecionado: %s\n" RESET, obterNomeAtributo(segundoAtributo));
    
    // Confirmar seleção
    printf(AMARELO "\nAtributos escolhidos:\n" RESET);
    printf("1º: %s\n", obterNomeAtributo(primeiroAtributo));
    printf("2º: %s\n", obterNomeAtributo(segundoAtributo));
    
    // Aguardar confirmação do usuário
    printf(VERDE "\nPressione Enter para ver o resultado...\n" RESET);
    getchar(); // Limpar buffer
    getchar(); // Aguardar Enter
    
    // Exibir resultado da comparação
    exibirResultado(brasil, argentina, primeiroAtributo, segundoAtributo);
    
    printf(VERDE "\n========== OBRIGADO POR JOGAR! ==========\n" RESET);
    
    return 0;
}
