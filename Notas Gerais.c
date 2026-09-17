#include <stdio.h>
int main () {
    int opção;
    float nota1, nota2, media;

    printf ("Seja Bem Vindo ao Gerenciamente do Estudante\n");
    printf ("  \n");
    printf ("Escolha uma das opções\n");
    printf ("1. Calcular a Média\n");
    printf ("2. Determinar Status\n");
    printf ("3. Sair\n");
        scanf("%d", &opção);

        switch (opção)
        {
            case 1:
                printf ("Iremos Calcular a sua Média\n");
                printf ("Informe a Primeira Nota: \n");
                    scanf ("%f", &nota1);
                printf ("Informe a Segunda Nota: \n");
                    scanf ("%f", &nota2);
/*Testar a nota maior ou igual a zero*/
                if ((nota1 >= 0 && nota1 <=10) && (nota2 >= 0 && nota2 <=10))
                {
                    media = (nota1 + nota2) / 2;
                    printf ("A sua média é: %.2f\n", media);
                }
                else
                {
                printf ("Valores informados estão errados");
                }
            break;

            case 2:
                printf ("Determinar Status\n");
                printf ("Informe a sua a media\n");
                    scanf ("%.2f", &media);
                media >= 5 ? printf("Aprovado!\n") : printf("reprovado!");       
                if (media >= 6)
                {
                    printf("Aprovado!\n");
                }
                else if (media >= 5)
                {
                    printf("Recuperação!");  
                }
                else
                {
                    printf("Recuperação!");  
                }
                break;

            case 3:
                printf ("Sair\n");
                break;
            default:
                printf ("Opção Inválida\n");
                break;
        }

    






    return 0;
}