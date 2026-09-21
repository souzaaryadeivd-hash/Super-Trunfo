#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main () {
    int opção, regras;
    int numeroSecreto, palpite;

printf ("Menu principal\n");
printf ("1. Iniciar Game\n");
printf ("2. Ver regras\n");
printf ("3. Sair do jogo\n");
printf (" \n");
printf ("Escolha uma opção\n");
    scanf ("%d", &opção);

switch (opção)
        {
            case 1: 
           srand (time(0));
           numeroSecreto = rand() %10;
           printf ("Digite um numero de 0 a 9: \n");
                scanf ("%d", &palpite);
                if (numeroSecreto == palpite)
                    {printf ("Você acertou\n");
                    printf ("Numero secreto: %d\n", numeroSecreto);}
                else
                    {printf ("Você errou\n");
                    printf ("Numero secreto: %d\n", numeroSecreto);}
                    
            break;
            case 2: 
            printf ("Explicação das Regras......\n");
            printf ("Selecione uma opção\n");
            printf ("Regra numero 1\n");
            printf ("Regra numero 2\n");
                        scanf ("%d", &regras);
                        switch (regras)
                        {
                            case 1: printf ("Não pode xingar\n");
                            break;
                            case 2: printf ("pontuação acima de 1.000 pontos ganha o jogo\n");
                            break;
                            case 3: printf ("Volte ao menu anterior\n");
                            break;
                        }
            break;
            case 3: 
            printf ("Saindo do jogo......\n");
            default:
            printf ("Codigo invalido\n");
        }

return 0;
    }