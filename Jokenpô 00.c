#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main () {
    int escolhaJogador, escolhaComputador;
    srand (time(0));

printf ("*** Bem Vindo ao Jogo Jokenpô ***\n");
printf ("  \n");
printf ("Escolha uma opção\n");
printf ("1. Pedra\n");
printf ("2. Papel\n");
printf ("3. Tesoura\n");
printf (" \n");
printf ("Escolha: \n");

scanf ("%d", &escolhaJogador);

escolhaComputador = rand() % 3 + 1;

switch (escolhaJogador)
{
    case 1: 
    printf ("Jogador: Pedra \n");
    break;

    case 2: 
    printf ("Jogador: Papel \n");
    break;

    case 3: 
    printf ("Jogador: Tesoura \n");
    break;

    default: 
    printf ("Codigo Invalido\n");
    break;
}
switch (escolhaComputador)
{
    case 1: 
    printf ("Computador: Pedra \n");
    break;
    
    case 2: 
    printf ("Computador: Papel \n");
    break;

    case 3: 
    printf ("Computador: Tesoura \n");
    break;
}
    if (escolhaComputador == escolhaJogador)
    {
        printf ("*** O jogo empatou !! ***\n");
    }
    else if (((escolhaJogador == 1) && (escolhaComputador == 2) ||
             (escolhaJogador == 2) && (escolhaComputador == 3) || 
             (escolhaJogador == 3) && (escolhaComputador == 1)))
        printf ("Computador Venceu\n");

    else if ((escolhaComputador == 1) && (escolhaJogador == 2) ||
             (escolhaComputador == 2) && (escolhaJogador == 3) || 
             (escolhaComputador == 3) && (escolhaJogador == 1))
        printf ("Jogador Venceu\n");
    }
