#include <stdio.h>

int main() {
    // ==================== CARTA 1 ====================
    char estado1[3];
    char codigo1[4];
    char nomeCidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;
    float densidade1;

    // ==================== CARTA 2 ====================
    char estado2[3];
    char codigo2[4];
    char nomeCidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;
    float densidade2;

    int atributo1, atributo2;
    float valor1_carta1 = 0, valor1_carta2 = 0;
    float valor2_carta1 = 0, valor2_carta2 = 0;
    float soma1, soma2;

    // ---------- Cadastro Carta 1 ----------
    printf("===== CADASTRO CARTA 1 =====\n");
    printf("Estado (ex: SP): ");
    scanf("%s", estado1);
    printf("Código (ex: A01): ");
    scanf("%s", codigo1);
    printf("Nome da Cidade: ");
    scanf(" %[^\n]", nomeCidade1);
    printf("População: ");
    scanf("%d", &populacao1);
    printf("Área (km²): ");
    scanf("%f", &area1);
    printf("PIB (bilhões): ");
    scanf("%f", &pib1);
    printf("Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos1);

    densidade1 = (float)populacao1 / area1;

    // ---------- Cadastro Carta 2 ----------
    printf("\n===== CADASTRO CARTA 2 =====\n");
    printf("Estado (ex: RJ): ");
    scanf("%s", estado2);
    printf("Código (ex: B02): ");
    scanf("%s", codigo2);
    printf("Nome da Cidade: ");
    scanf(" %[^\n]", nomeCidade2);
    printf("População: ");
    scanf("%d", &populacao2);
    printf("Área (km²): ");
    scanf("%f", &area2);
    printf("PIB (bilhões): ");
    scanf("%f", &pib2);
    printf("Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos2);

    densidade2 = (float)populacao2 / area2;

    // ---------- Exibição das Cartas ----------
    printf("\n===== CARTA 1: %s (%s) =====\n", nomeCidade1, estado1);
    printf("População: %d | Área: %.2f | PIB: %.2f | Pontos: %d | Densidade: %.2f\n",
           populacao1, area1, pib1, pontosTuristicos1, densidade1);

    printf("\n===== CARTA 2: %s (%s) =====\n", nomeCidade2, estado2);
    printf("População: %d | Área: %.2f | PIB: %.2f | Pontos: %d | Densidade: %.2f\n",
           populacao2, area2, pib2, pontosTuristicos2, densidade2);

    // ==================== MENU 1 - PRIMEIRO ATRIBUTO ====================
    printf("\n========================================\n");
    printf("     ESCOLHA O PRIMEIRO ATRIBUTO\n");
    printf("========================================\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Demográfica\n");
    printf("========================================\n");
    printf("Digite a opção: ");
    scanf("%d", &atributo1);

    // Validação do primeiro atributo
    if (atributo1 < 1 || atributo1 > 5) {
        printf("Opção inválida! Encerrando o programa.\n");
        return 1;
    }

    // ==================== MENU 2 - SEGUNDO ATRIBUTO (DINÂMICO) ====================
    do {
        printf("\n========================================\n");
        printf("     ESCOLHA O SEGUNDO ATRIBUTO\n");
        printf("========================================\n");
        if (atributo1 != 1) printf("1 - População\n");
        if (atributo1 != 2) printf("2 - Área\n");
        if (atributo1 != 3) printf("3 - PIB\n");
        if (atributo1 != 4) printf("4 - Pontos Turísticos\n");
        if (atributo1 != 5) printf("5 - Densidade Demográfica\n");
        printf("========================================\n");
        printf("Digite a opção: ");
        scanf("%d", &atributo2);

        if (atributo2 == atributo1) {
            printf("\nVocê já escolheu esse atributo! Escolha outro.\n");
        } else if (atributo2 < 1 || atributo2 > 5) {
            printf("\nOpção inválida! Tente novamente.\n");
        }
    } while (atributo2 == atributo1 || atributo2 < 1 || atributo2 > 5);

    // ==================== OBTENDO OS VALORES DOS ATRIBUTOS ====================
    // Primeiro atributo
    switch (atributo1) {
        case 1: valor1_carta1 = populacao1; valor1_carta2 = populacao2; break;
        case 2: valor1_carta1 = area1;      valor1_carta2 = area2;      break;
        case 3: valor1_carta1 = pib1;       valor1_carta2 = pib2;       break;
        case 4: valor1_carta1 = pontosTuristicos1; valor1_carta2 = pontosTuristicos2; break;
        case 5: valor1_carta1 = densidade1; valor1_carta2 = densidade2; break;
    }

    // Segundo atributo
    switch (atributo2) {
        case 1: valor2_carta1 = populacao1; valor2_carta2 = populacao2; break;
        case 2: valor2_carta1 = area1;      valor2_carta2 = area2;      break;
        case 3: valor2_carta1 = pib1;       valor2_carta2 = pib2;       break;
        case 4: valor2_carta1 = pontosTuristicos1; valor2_carta2 = pontosTuristicos2; break;
        case 5: valor2_carta1 = densidade1; valor2_carta2 = densidade2; break;
    }

    // ==================== CÁLCULO DA SOMA ====================
    soma1 = valor1_carta1 + valor2_carta1;
    soma2 = valor1_carta2 + valor2_carta2;

    // ==================== EXIBIÇÃO DO RESULTADO ====================
    printf("\n========================================\n");
    printf("         RESULTADO DA COMPARAÇÃO\n");
    printf("========================================\n");

    printf("Carta 1: %s (%s)\n", nomeCidade1, estado1);
    printf("Carta 2: %s (%s)\n\n", nomeCidade2, estado2);

    // Nome dos atributos
    printf("Atributos escolhidos: ");
    switch (atributo1) {
        case 1: printf("População"); break;
        case 2: printf("Área"); break;
        case 3: printf("PIB"); break;
        case 4: printf("Pontos Turísticos"); break;
        case 5: printf("Densidade Demográfica"); break;
    }
    printf(" e ");
    switch (atributo2) {
        case 1: printf("População"); break;
        case 2: printf("Área"); break;
        case 3: printf("PIB"); break;
        case 4: printf("Pontos Turísticos"); break;
        case 5: printf("Densidade Demográfica"); break;
    }
    printf("\n\n");

    // Valores
    printf("Valores do 1º atributo:\n");
    printf("  %s: %.2f\n", nomeCidade1, valor1_carta1);
    printf("  %s: %.2f\n\n", nomeCidade2, valor1_carta2);

    printf("Valores do 2º atributo:\n");
    printf("  %s: %.2f\n", nomeCidade1, valor2_carta1);
    printf("  %s: %.2f\n\n", nomeCidade2, valor2_carta2);

    printf("Soma dos atributos:\n");
    printf("  %s: %.2f\n", nomeCidade1, soma1);
    printf("  %s: %.2f\n\n", nomeCidade2, soma2);

    // Resultado final usando operador ternário
    printf("Resultado: %s\n", 
        (soma1 > soma2) ? "Carta 1 venceu!" :
        (soma2 > soma1) ? "Carta 2 venceu!" : "Empate!");

    return 0;
}