#include <stdio.h>
int main () {
    int opção;

    printf ("Menu principal\n");
    printf ("Iniciar Game\n");
    printf ("Ver regras\n");
    printf ("Sair do jogo\n");
    printf ("Escolha uma opção\n");
        scanf ("%d", &opção);


        switch (opção)
        {
            case 1: 
            printf ("Execução do Jogo\n");
            break;
            case 2: 
            printf ("Segue as regras\n");
            printf ("Regra numero 1: Sempre ficar dentro do mapa\n");
            printf ("Xigamentos são proibidos\n");
            printf ("Pontuação acima de 1.000 pontos vence\n");
            printf ("Que vença o melhor\n");
            case 3: 
            printf ("Salvar o jogo\n");
            printf ("Sair sem salvar\n");
            case 4: 
            printf ("Opção");
            default:
            printf ("Opção invalida\n");

        }

return 0;

}