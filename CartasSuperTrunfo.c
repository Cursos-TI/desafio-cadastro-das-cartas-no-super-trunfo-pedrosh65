#include <stdio.h>

// Estrutura para armazenar os dados da carta
struct Carta {
    char estado;
    char codigo[10];
    char nomeCidade[50];
    int populacao;
    float area; // km²
    float pib;  // em bilhões
    int pontosTuristicos;
    float densidade;
    float pibPerCapita;
};

int main() {
    struct Carta carta1, carta2;

    // ===== Entrada da Carta 1 =====
    printf("Digite o estado da Carta 1: ");
    scanf(" %c", &carta1.estado);

    printf("Digite o codigo da Carta 1: ");
    scanf("%s", carta1.codigo);

    printf("Digite o nome da cidade da Carta 1: ");
    scanf(" %[^\n]", carta1.nomeCidade);

    printf("Digite a populacao da Carta 1: ");
    scanf("%d", &carta1.populacao);

    printf("Digite a area da Carta 1 (em km²): ");
    scanf("%f", &carta1.area);

    printf("Digite o PIB da Carta 1 (em bilhoes de reais): ");
    scanf("%f", &carta1.pib);

    printf("Digite o numero de pontos turisticos da Carta 1: ");
    scanf("%d", &carta1.pontosTuristicos);

    // cálculos da carta 1
    carta1.densidade = carta1.populacao / carta1.area;
    carta1.pibPerCapita = (carta1.pib * 1000000000.0) / carta1.populacao;

    // ===== Entrada da Carta 2 =====
    printf("\nDigite o estado da Carta 2: ");
    scanf(" %c", &carta2.estado);

    printf("Digite o codigo da Carta 2: ");
    scanf("%s", carta2.codigo);

    printf("Digite o nome da cidade da Carta 2: ");
    scanf(" %[^\n]", carta2.nomeCidade);

    printf("Digite a populacao da Carta 2: ");
    scanf("%d", &carta2.populacao);

    printf("Digite a area da Carta 2 (em km²): ");
    scanf("%f", &carta2.area);

    printf("Digite o PIB da Carta 2 (em bilhoes de reais): ");
    scanf("%f", &carta2.pib);

    printf("Digite o numero de pontos turisticos da Carta 2: ");
    scanf("%d", &carta2.pontosTuristicos);

    // cálculos da carta 2
    carta2.densidade = carta2.populacao / carta2.area;
    carta2.pibPerCapita = (carta2.pib * 1000000000.0) / carta2.populacao;

    // ===== Saída formatada =====
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", carta1.estado);
    printf("Codigo: %s\n", carta1.codigo);
    printf("Nome da Cidade: %s\n", carta1.nomeCidade);
    printf("Populacao: %d habitantes\n", carta1.populacao);
    printf("Area: %.2f km²\n", carta1.area);
    printf("PIB: %.2f bilhoes de reais\n", carta1.pib);
    printf("Numero de Pontos Turisticos: %d\n", carta1.pontosTuristicos);
    printf("Densidade Populacional: %.2f hab/km²\n", carta1.densidade);
    printf("PIB per Capita: %.2f reais\n", carta1.pibPerCapita);

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", carta2.estado);
    printf("Codigo: %s\n", carta2.codigo);
    printf("Nome da Cidade: %s\n", carta2.nomeCidade);
    printf("Populacao: %d habitantes\n", carta2.populacao);
    printf("Area: %.2f km²\n", carta2.area);
    printf("PIB: %.2f bilhoes de reais\n", carta2.pib);
    printf("Numero de Pontos Turisticos: %d\n", carta2.pontosTuristicos);
    printf("Densidade Populacional: %.2f hab/km²\n", carta2.densidade);
    printf("PIB per Capita: %.2f reais\n", carta2.pibPerCapita);

    return 0;
}