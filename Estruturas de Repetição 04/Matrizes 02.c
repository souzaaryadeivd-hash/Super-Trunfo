#include <stdio.h>

#define LINHAS 3
#define COLUNAS 3
 
int main() {
    int matriz[LINHAS][COLUNAS];

    int target = 9;
    int found = 0;
    int soma = 1;


    for (int i = 0; i < LINHAS; i++) 
    {      
        for (int j = 0; j < COLUNAS; j++)
        {
            matriz [i][j] = soma;
            soma ++;
            printf ("%d ", matriz[i][j]);
        }
        printf (" \n");
    }
 
    // Busca condicional do elemento alvo
    for (int i = 0; i < LINHAS; i++) {      // Loop externo para as linhas
        for (int j = 0; j < COLUNAS; j++) {  // Loop interno para as colunas
            if (matriz[i][j] == target) {
                printf("O valor %d encontrado no indice (%d, %d)\n", target, i, j);
                found = 1;
                break;
            }
        }
        if (found) break;
    }
 
    if (!found) {
        printf("O valor %d não encontrado no indice \n", target);
    }
 
    return 0;
}