#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main () {
    int numeroJogador, numeroComputador, resultado;
    char tipoComparação;

    /*Gerar um numero aleatório*/
    srand (time(0));
    numeroComputador = rand () % 100 + 1; /*NUmero entre 1 e 100*/

    /*Inicio do Jogo*/
    printf ("Bem-vindo ao jogo Maoir, Menor ou Igual\n");
    printf ("  \n");
    printf ("Escolha entre um número e o tipo de comparação.\n");
    printf ("M. Maior\n");
    printf ("N. Menor\n");
    printf ("I. Igual\n");

    printf ("Escolha a Comparação: \n");
        scanf ("%c", &tipoComparação);
    printf ("Digite o seu número (Entre 1 e 100)): \n");
        scanf ("%d", &numeroJogador);
    
        /*Exibir número do computador*/
    /*printf ("O número do computador é: %d\n", numeroComputador);*/

    switch (tipoComparação)
    {
    case 'M':
    case 'm':
    printf ("Vocẽ escolheu a opção maior!\n");
        resultado = numeroJogador > numeroComputador ? 1:0;
        break;

    case 'N':
    case 'n':
    printf ("Vocẽ escolheu a opção menor!\n");
        resultado = numeroJogador < numeroComputador ? 1:0;
        break;

    case 'I':
    case 'i':
    printf ("Vocẽ escolheu a opção igual!\n");
        resultado = numeroJogador == numeroComputador ? 1:0;
        break;

    default: 
        printf ("Opção Invalida");
        break;
    }
    printf ("O número do computador é: %d e o do Jogador é: %d\n", numeroComputador, numeroJogador);

    if (resultado == 1)
    {
        printf ("Você venceu!\n");
    }
    else
    {
       printf ("Você perdeu!\n"); 
    }
    
    
    return 0;

}