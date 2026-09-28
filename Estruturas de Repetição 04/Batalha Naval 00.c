#include <stdio.h>
#define TAMANHO_TABULEIRO 10
#define TAMANHO_NAVIO 3
#define AGUA 0
#define NAVIO 3

int main() {
    // ============================================================
    // 1. REPRESENTAÇÃO DO TABULEIRO (Matriz 10x10)
    // Todas as posições começam com 0 (água)
    // ============================================================
    int tabuleiro[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO];

    // Inicializa todo o tabuleiro com água (0)
    for (int i = 0; i < TAMANHO_TABULEIRO; i++) {
        for (int j = 0; j < TAMANHO_TABULEIRO; j++) {
            tabuleiro[i][j] = AGUA;
        }
    }

    // ============================================================
    // 2. POSICIONAMENTO DOS NAVIOS
    // Dois navios de tamanho 3:
    // - Navio 1: Horizontal
    // - Navio 2: Vertical
    // ============================================================

    // --- Navio 1 (Horizontal) ---
    // Coordenadas iniciais definidas no código
    int linhaNavio1 = 2;   // Linha inicial
    int colunaNavio1 = 1;  // Coluna inicial

    // Posiciona o navio horizontalmente (preenche 3 colunas na mesma linha)
    for (int i = 0; i < TAMANHO_NAVIO; i++) {
        // Verifica se está dentro dos limites do tabuleiro
        if (colunaNavio1 + i < TAMANHO_TABULEIRO) {
            tabuleiro[linhaNavio1][colunaNavio1 + i] = NAVIO;
        }
    }

    // --- Navio 2 (Vertical) ---
    // Coordenadas iniciais definidas no código
    int linhaNavio2 = 5;   // Linha inicial
    int colunaNavio2 = 7;  // Coluna inicial

    // Posiciona o navio verticalmente (preenche 3 linhas na mesma coluna)
    for (int i = 0; i < TAMANHO_NAVIO; i++) {
        // Verifica se está dentro dos limites do tabuleiro
        if (linhaNavio2 + i < TAMANHO_TABULEIRO) {
            // Verifica se a posição ainda está livre (não sobrepõe o outro navio)
            if (tabuleiro[linhaNavio2 + i][colunaNavio2] == AGUA) {
                tabuleiro[linhaNavio2 + i][colunaNavio2] = NAVIO;
            }
        }
    }

    // ============================================================
    // 3. EXIBIÇÃO DO TABULEIRO
    // ============================================================
    printf("=== TABULEIRO DE BATALHA NAVAL ===\n\n");

    // Cabeçalho com números das colunas
    printf("   ");
    for (int j = 0; j < TAMANHO_TABULEIRO; j++) {
        printf("%d ", j);
    }
    printf("\n");

    // Linha separadora
    printf("   ");
    for (int j = 0; j < TAMANHO_TABULEIRO; j++) {
        printf("--");
    }
    printf("\n");

    // Imprime cada linha do tabuleiro
    for (int i = 0; i < TAMANHO_TABULEIRO; i++) {
        printf("%d |", i); // Número da linha

        for (int j = 0; j < TAMANHO_TABULEIRO; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    printf("\nLegenda:\n");
    printf("0 = Agua\n");
    printf("3 = Navio\n");

    return 0;
}