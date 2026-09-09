#include <stdio.h>

int main(void) {
    // Os dados de comparação são definidos diretamente no código.
    const char atributoComparado[] = "Populacao";

    // Dados da carta 1.
    char estado1[3];
    char codigo1[5];
    char cidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;
    float densidade1;
    float pibPerCapita1;

    // Dados da carta 2.
    char estado2[3];
    char codigo2[5];
    char cidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;
    float densidade2;
    float pibPerCapita2;

    // Cadastro da primeira carta.
    printf("=== Cadastro da Carta 1 ===\n");
    printf("Estado: ");
    scanf("%2s", estado1);
    printf("Codigo da carta: ");
    scanf("%4s", codigo1);
    printf("Nome da cidade: ");
    scanf(" %49[^\n]", cidade1);
    printf("Populacao: ");
    scanf("%d", &populacao1);
    printf("Area (km2): ");
    scanf("%f", &area1);
    printf("PIB: ");
    scanf("%f", &pib1);
    printf("Pontos turisticos: ");
    scanf("%d", &pontosTuristicos1);

    // Cadastro da segunda carta.
    printf("\n=== Cadastro da Carta 2 ===\n");
    printf("Estado: ");
    scanf("%2s", estado2);
    printf("Codigo da carta: ");
    scanf("%4s", codigo2);
    printf("Nome da cidade: ");
    scanf(" %49[^\n]", cidade2);
    printf("Populacao: ");
    scanf("%d", &populacao2);
    printf("Area (km2): ");
    scanf("%f", &area2);
    printf("PIB: ");
    scanf("%f", &pib2);
    printf("Pontos turisticos: ");
    scanf("%d", &pontosTuristicos2);

    // Calcula os atributos derivados de cada carta.
    densidade1 = (float) populacao1 / area1;
    pibPerCapita1 = (pib1 * 1000000000.0f) / populacao1;
    densidade2 = (float) populacao2 / area2;
    pibPerCapita2 = (pib2 * 1000000000.0f) / populacao2;

    // Exibe os dados cadastrados e os valores calculados.
    printf("\n========== CARTA 1 ==========\n");
    printf("Estado: %s | Codigo: %s\n", estado1, codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km2\n", area1);
    printf("PIB: %.2f bilhoes\n", pib1);
    printf("Pontos turisticos: %d\n", pontosTuristicos1);
    printf("Densidade populacional: %.2f hab/km2\n", densidade1);
    printf("PIB per capita: R$ %.2f\n", pibPerCapita1);

    printf("\n========== CARTA 2 ==========\n");
    printf("Estado: %s | Codigo: %s\n", estado2, codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km2\n", area2);
    printf("PIB: %.2f bilhoes\n", pib2);
    printf("Pontos turisticos: %d\n", pontosTuristicos2);
    printf("Densidade populacional: %.2f hab/km2\n", densidade2);
    printf("PIB per capita: R$ %.2f\n", pibPerCapita2);

    // Para populacao, a carta com maior valor vence.
    printf("\n===== Comparacao de cartas (Atributo: %s) =====\n", atributoComparado);
    printf("Carta 1 - %s (%s): %d\n", cidade1, estado1, populacao1);
    printf("Carta 2 - %s (%s): %d\n", cidade2, estado2, populacao2);

    if (populacao1 > populacao2) {
        printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
    } else if (populacao2 > populacao1) {
        printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
    } else {
        printf("Resultado: Empate!\n");
    }

    return 0;
}
