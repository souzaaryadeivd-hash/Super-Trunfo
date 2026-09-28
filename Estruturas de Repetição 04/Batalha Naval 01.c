#include <stdio.h>

#define TAMANHO_TABULEIRO 10
#define TAMANHO_NAVIO 3
#define AGUA 0
#define NAVIO 3

/* Valida todas as casas do navio antes de marcar qualquer uma delas. */
int posicionarNavio(int tabuleiro[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO],
					int linhaInicial, int colunaInicial,
					int direcaoLinha, int direcaoColuna) {
	/* Confere se a direção avança uma casa por vez em uma linha válida. */
	if (direcaoLinha < -1 || direcaoLinha > 1 ||
		direcaoColuna < -1 || direcaoColuna > 1 ||
		(direcaoLinha == 0 && direcaoColuna == 0)) {
		return 0;
	}

	/* Verifica limites e sobreposição para cada parte do navio. */
	for (int parte = 0; parte < TAMANHO_NAVIO; parte++) {
		int linha = linhaInicial + parte * direcaoLinha;
		int coluna = colunaInicial + parte * direcaoColuna;

		if (linha < 0 || linha >= TAMANHO_TABULEIRO ||
			coluna < 0 || coluna >= TAMANHO_TABULEIRO ||
			tabuleiro[linha][coluna] != AGUA) {
			return 0;
		}
	}

	/* Marca o navio somente depois que todas as casas foram aprovadas. */
	for (int parte = 0; parte < TAMANHO_NAVIO; parte++) {
		int linha = linhaInicial + parte * direcaoLinha;
		int coluna = colunaInicial + parte * direcaoColuna;
		tabuleiro[linha][coluna] = NAVIO;
	}

	return 1;
}

int main(void) {
	/* Cada célula começa como água. */
	int tabuleiro[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO];
	for (int linha = 0; linha < TAMANHO_TABULEIRO; linha++) {
		for (int coluna = 0; coluna < TAMANHO_TABULEIRO; coluna++) {
			tabuleiro[linha][coluna] = AGUA;
		}
	}

	/* Cada navio usa uma coordenada inicial e uma direção (linha, coluna). */
	int navios[4][4] = {
		{1, 1, 0, 1},   /* Horizontal: linha 1, colunas 1 a 3. */
		{1, 6, 1, 0},   /* Vertical: coluna 6, linhas 1 a 3. */
		{5, 1, 1, 1},   /* Diagonal descendente: (5,1), (6,2), (7,3). */
		{5, 8, 1, -1}   /* Diagonal ascendente: (5,8), (6,7), (7,6). */
	};

	/* Interrompe a execução se qualquer navio tiver posição inválida. */
	for (int indiceNavio = 0; indiceNavio < 4; indiceNavio++) {
		if (!posicionarNavio(tabuleiro,
							 navios[indiceNavio][0], navios[indiceNavio][1],
							 navios[indiceNavio][2], navios[indiceNavio][3])) {
			fprintf(stderr, "Erro: o navio %d tem posição inválida ou sobreposta.\n",
					indiceNavio + 1);
			return 1;
		}
	}

	/* Exibe o cabeçalho e cada posição do tabuleiro com largura uniforme. */
	printf("=== TABULEIRO DE BATALHA NAVAL ===\n\n");
	printf("   ");
	for (int coluna = 0; coluna < TAMANHO_TABULEIRO; coluna++) {
		printf("%2d ", coluna);
	}
	printf("\n");

	for (int linha = 0; linha < TAMANHO_TABULEIRO; linha++) {
		printf("%2d ", linha);
		for (int coluna = 0; coluna < TAMANHO_TABULEIRO; coluna++) {
			printf("%2d ", tabuleiro[linha][coluna]);
		}
		printf("\n");
	}

	printf("\nLegenda: 0 = agua, 3 = navio\n");
	return 0;
}
