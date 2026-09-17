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

    // ==================================================
    // COMPARAÇÃO DE CARTAS
    // Escolha do atributo feita diretamente no código
    // Neste exemplo estamos comparando a POPULAÇÃO
    // ==================================================

    printf("\nComparação de cartas (Atributo: População):\n\n");

    printf("Carta 1: %s, %s, %d\n", cidade1, estado1, populacao1);
    printf("Carta 2: %s, %s, %d\n", cidade2, estado2, populacao2);

    // Lógica de comparação usando if-else
    if (populacao1 > populacao2) {
        printf("Resultado: Carta 1 venceu!\n", cidade1);
    } else if (populacao2 > populacao1) {
        printf("Resultado: Carta 2 venceu!\n", cidade2);
    } else {
        printf("Resultado: Empate!\n");
    }

    return 0;
}

