#include <stdio.h>

int main() {
    // Dados da carta 1 
    char estado1[] = "AP";
    char codigo1[] = "C01";
    char cidade1[] = "Macapá";
    int populacao1 = 512902;
    float area1 = 6407.0;
    float pib1 = 7.1; 
    int pontosTuristicos1 = 10;

    // Dados da carta 2 
    char estado2[] = "PA";
    char codigo2[] = "C02";
    char cidade2[] = "Belém";
    int populacao2 = 1499641;
    float area2 = 1059.5;
    float pib2 = 28.0; 
    int pontosTuristicos2 = 25;

    // Cálculo densidade e PIB per capita
    float densidade1 = populacao1 / area1;
    float densidade2 = populacao2 / area2;

    float pibPerCapita1 = pib1 / populacao1;
    float pibPerCapita2 = pib2 / populacao2;

    // Impressão dos dados
    printf("=== Carta 1 ===\n");
    printf("Cidade: %s (%s)\n", cidade1, estado1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões\n", pib1);
    printf("Pontos Turísticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per capita: %.8f\n\n", pibPerCapita1);

    printf("=== Carta 2 ===\n");
    printf("Cidade: %s (%s)\n", cidade2, estado2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões\n", pib2);
    printf("Pontos Turísticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per capita: %.8f\n\n", pibPerCapita2);

    // Comparação baseada em PIB per capita
    printf("Comparação de cartas (Atributo: PIB per capita):\n\n");
    printf("Carta 1 - %s: %.8f\n", cidade1, pibPerCapita1);
    printf("Carta 2 - %s: %.8f\n", cidade2, pibPerCapita2);

    if (pibPerCapita1 > pibPerCapita2) {
        printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
    } else if (pibPerCapita2 > pibPerCapita1) {
        printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
    } else {
        printf("Resultado: Empate!\n");
    }

    return 0;
}
