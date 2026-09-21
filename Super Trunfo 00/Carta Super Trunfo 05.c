#include <stdio.h>

int main() {

    /* Primeira Carta */
    char estado1[4];
    char codigodacarta1[5];
    char cidade1[50];
    unsigned long int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;
    float densidade1;
    float pibPerCapita1;
    float superPoder1;

    /* Segunda Carta */
    char estado2[4];
    char codigodacarta2[5];
    char cidade2[50];
    unsigned long int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;
    float densidade2;
    float pibPerCapita2;

    int opcao;


    printf("Informe a primeira carta\n\n");
    printf("Informe o Estado (A-H): ");
    scanf(" %s", estado1);
    printf("Informe o Codigo da Carta: ");
    scanf(" %4s", codigodacarta1);
    printf("Informe a Cidade: ");
    scanf(" %49[^\n]", cidade1);
    printf("Informe a População: ");
    scanf("%lu", &populacao1);
    printf("Informe o Área(em km²): ");
    scanf("%f", &area1);
    printf("Informe o PIB (em bilhões de Reais): ");
    scanf("%f", &pib1);
    printf("Informe os Pontos Turisticos: ");
    scanf("%d", &pontosTuristicos1);

    printf("\n");
    printf("Informe a segunda carta\n\n");
    printf("Informe o Estado (A-H): ");
    scanf(" %s", estado2);
    printf("Informe o Codigo da Carta: ");
    scanf(" %4s", codigodacarta2);
    printf("Informe a Cidade: ");
    scanf(" %49[^\n]", cidade2);
    printf("Informe a População: ");
    scanf("%lu", &populacao2);
    printf("Informe o Área(em km²): ");
    scanf("%f", &area2);
    printf("Informe o PIB (em bilhões de Reais): ");
    scanf("%f", &pib2);
    printf("Informe os Pontos Turisticos: ");
    scanf("%d", &pontosTuristicos2);
    printf("\n");

    densidade1 = (float) populacao1 / area1;
    pibPerCapita1 = pib1 / (float) populacao1;
    densidade2 = (float) populacao2 / area2;
    pibPerCapita2 = pib2 / (float) populacao2;

    printf("\nCarta 1:\n\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigodacarta1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);
    printf("Desidade: %.2f habitantes/km²\n", densidade1);
    printf("PIB per capita: %.2f reais\n", pibPerCapita1);
  
    printf("\nCarta 2:\n\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigodacarta2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);
    printf("Densidade: %.2f habitantes/km²\n", densidade2);
    printf("PIB per capita: %.2f reais\n", pibPerCapita2);

    // ==================== MENU INTERATIVO ====================
    printf("\n=============================================\n");
    printf("          MENU DE COMPARAÇÃO\n");
    printf("=============================================\n");
    printf("Escolha o atributo para comparar as cartas:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Número de Pontos Turísticos\n");
    printf("5 - Densidade Demográfica\n");
    printf("=============================================\n");
    printf("Digite a opção desejada: ");
    scanf("%d", &opcao);

    // ==================================================
    // COMPARAÇÃO DE CARTAS
    // Escolha do atributo feita diretamente no código
    // Neste exemplo estamos comparando a POPULAÇÃO
    // ==================================================

   // ==================== COMPARAÇÃO COM SWITCH ====================
    printf("\n");

    switch (opcao) {
        case 1: // População
            printf("Comparação de cartas (Atributo: População):\n\n");
            printf("Carta 1 - %s (%s): %d\n", cidade1, estado1, populacao1);
            printf("Carta 2 - %s (%s): %d\n", cidade2, estado2, populacao2);

            if (populacao1 > populacao2) {
                printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
            } else if (populacao2 > populacao1) {
                printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        case 2: // Área
            printf("Comparação de cartas (Atributo: Área):\n\n");
            printf("Carta 1 - %s (%s): %.2f km²\n", cidade1, estado1, area1);
            printf("Carta 2 - %s (%s): %.2f km²\n", cidade2, estado2, area2);

            if (area1 > area2) {
                printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
            } else if (area2 > area1) {
                printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        case 3: // PIB
            printf("Comparação de cartas (Atributo: PIB):\n\n");
            printf("Carta 1 - %s (%s): %.2f bilhões\n", cidade1, estado1, pib1);
            printf("Carta 2 - %s (%s): %.2f bilhões\n", cidade2, estado2, pib2);

            if (pib1 > pib2) {
                printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
            } else if (pib2 > pib1) {
                printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        case 4: // Pontos Turísticos
            printf("Comparação de cartas (Atributo: Pontos Turísticos):\n\n");
            printf("Carta 1 - %s (%s): %d\n", cidade1, estado1, pontosTuristicos1);
            printf("Carta 2 - %s (%s): %d\n", cidade2, estado2, pontosTuristicos2);

            if (pontosTuristicos1 > pontosTuristicos2) {
                printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
            } else if (pontosTuristicos2 > pontosTuristicos1) {
                printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        case 5: // Densidade Demográfica (menor vence)
            printf("Comparação de cartas (Atributo: Densidade Demográfica):\n\n");
            printf("Carta 1 - %s (%s): %.2f hab/km²\n", cidade1, estado1, densidade1);
            printf("Carta 2 - %s (%s): %.2f hab/km²\n", cidade2, estado2, densidade2);

            if (densidade1 < densidade2) {
                printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
            } else if (densidade2 < densidade1) {
                printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        default:
            printf("Opção inválida! Por favor, execute o programa novamente e escolha uma opção de 1 a 5.\n");
            break;
    }

    return 0;
}