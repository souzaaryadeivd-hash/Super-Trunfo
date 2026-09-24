#include <stdio.h>

int main (){

    /*MOVIMENTAÇÃO DE PEÇAS DE XADREZ*/
    // ============================================================
    // DESAFIO: Movimentação de Peças de Xadrez - Nível Novato
    // ============================================================
    // Este programa simula o movimento de três peças:
    // - Torre  → usa estrutura FOR
    // - Bispo  → usa estrutura WHILE
    // - Rainha → usa estrutura DO-WHILE
    // ============================================================

    // Movimentação da Torre = 7 Passos em linha reta (DIREITA, ESQUERDA, FRENTE, ATRAS);
    // Movimentação do Bispo = 7 Passos em diagonal (CIMA DIREITA, CIMA ESQUERDA, BAIXO DIREITA, BAIXO ESQUERDA);
    // Movimentação do Cavalo = 3 Passos em L (CIMA DIREITA, CIMA ESQUERDA, BAIXO DIREITA, BAIXO ESQUERDA);
    // Movimentação da Rainha = 7 Passos em todas as direções;

    // Vamos informar a direção e a quantidade de cada peça;

    // TORRE = 5 Passos para frente.
    // BISPO = 5 Passo para cima direita.
    // Cavalo = 3 Passos para cima direita.
    // Rainha = 8 Passos para esquerda.


    int torre = 5;
    int bispo = 5;
    int rainha = 8;
    int casasCavalocima = 3;
    int casasCavalolado = 1;

    int i, j;
    int contador;

    //TORRE

    printf ("Movimentação da Torre\n");
    printf ("Torre se move 5 casas para frente\n");

    for (i = 1; i <= torre; i++) {
        printf("Frente\n");
    }

    printf (" \n");

    //BISPO

    printf ("Movimentação do bispo\n");
    printf ("Bispo se move 5 casas para cima direita\n");

    i = 1;

    while (i <= bispo) {
        printf("Cima Direita\n");
        i++;
    }

    printf (" \n");

    //CAVALO

   printf ("Movimentação do Cavalo\n");
   printf ("Cavalo se move 3 casas para cima direita\n");

   for (i = 1; i <= casasCavalocima; i++)
   {
    printf("Cima Direita\n");
   }
   j = 1;
    while (j <= casasCavalolado)
    {
        printf("Lado Direita\n");
        j++;
    }
   printf (" \n");

    //RAINHA

    printf ("Movimentação da Rainha\n");
    printf ("Rainha se move 8 casas para esquerda\n");

    contador = 1;

    do {
        printf("Esquerda\n");
        contador++;
    } while (contador <= rainha);


    printf ("Teste finalizado com sucesso!\n");


    return 0;

}

