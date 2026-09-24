#include <stdio.h>

// ============================================================
// PROTÓTIPOS DAS FUNÇÕES RECURSIVAS
// ============================================================
void moverTorre(int casasRestantes);     // Movimento horizontal (Direita)
void moverBispoRecursivo(int casasRestantes); // Movimento diagonal (Cima + Direita)
void moverRainha(int casasRestantes);    // Movimento horizontal (Esquerda)

// ============================================================
// FUNÇÃO PRINCIPAL
// ============================================================
int main() {
    // Quantidade de casas definidas diretamente no código
    int casasTorre = 5;
    int casasBispo = 5;
    int casasRainha = 8;

    // ============================================================
    // 1. TORRE - RECURSIVIDADE
    // ============================================================
    printf("=== Movimento da Torre (Recursivo) ===\n");
    printf("A Torre se move %d casas para a Direita:\n", casasTorre);
    moverTorre(casasTorre);
    printf("\n");

    // ============================================================
    // 2. BISPO - RECURSIVIDADE + LOOPS ANINHADOS
    // ============================================================
    printf("=== Movimento do Bispo (Recursivo) ===\n");
    printf("O Bispo se move %d casas na diagonal (Cima e Direita):\n", casasBispo);
    moverBispoRecursivo(casasBispo);
    printf("\n");

    // Versão com Loops Aninhados (requisito extra do nível Mestre)
    printf("=== Movimento do Bispo (Loops Aninhados) ===\n");
    printf("Loop externo = Vertical | Loop interno = Horizontal\n");

    // Loop mais externo controla o movimento vertical (Cima)
    for (int vertical = 1; vertical <= casasBispo; vertical++) {
        // Loop mais interno controla o movimento horizontal (Direita)
        for (int horizontal = 1; horizontal <= 1; horizontal++) {
            printf("Cima, Direita\n");
        }
    }
    printf("\n");

    // ============================================================
    // 3. RAINHA - RECURSIVIDADE
    // ============================================================
    printf("=== Movimento da Rainha (Recursivo) ===\n");
    printf("A Rainha se move %d casas para a Esquerda:\n", casasRainha);
    moverRainha(casasRainha);
    printf("\n");

    // ============================================================
    // 4. CAVALO - LOOPS COMPLEXOS (Nível Mestre)
    // Movimento em "L": 2 casas para CIMA + 1 casa para DIREITA
    // Utiliza loops aninhados + condições + break/continue
    // ============================================================
    printf("=== Movimento do Cavalo (Loops Complexos) ===\n");
    printf("O Cavalo se move em L: 2 casas para Cima e 1 casa para Direita:\n");

    int casasCima = 2;
    int casasDireita = 1;

    // Loop externo controla as casas verticais (Cima)
    for (int i = 1; i <= casasCima + casasDireita; i++) {

        // Condição para as casas verticais
        if (i <= casasCima) {
            printf("Cima\n");
            continue; // Pula para a próxima iteração
        }

        // Após terminar as casas para cima, executa o movimento horizontal
        for (int j = 1; j <= casasDireita; j++) {
            printf("Direita\n");
        }
        break; // Encerra o loop externo após o movimento horizontal
    }

    printf("\nSimulação do Nível Mestre concluída com sucesso!\n");

    return 0;
}

// ============================================================
// FUNÇÕES RECURSIVAS
// ============================================================

/**
 * Função recursiva da Torre
 * Move a peça para a Direita, imprimindo a direção a cada casa.
 * Caso base: quando não há mais casas restantes.
 */
void moverTorre(int casasRestantes) {
    if (casasRestantes <= 0) {
        return; // Caso base - encerra a recursão
    }

    printf("Direita\n");
    moverTorre(casasRestantes - 1); // Chamada recursiva
}

/**
 * Função recursiva do Bispo
 * Move a peça na diagonal (Cima + Direita).
 */
void moverBispoRecursivo(int casasRestantes) {
    if (casasRestantes <= 0) {
        return; // Caso base
    }

    printf("Cima, Direita\n");
    moverBispoRecursivo(casasRestantes - 1); // Chamada recursiva
}

/**
 * Função recursiva da Rainha
 * Move a peça para a Esquerda.
 */
void moverRainha(int casasRestantes) {
    if (casasRestantes <= 0) {
        return; // Caso base
    }

    printf("Esquerda\n");
    moverRainha(casasRestantes - 1); // Chamada recursiva
}