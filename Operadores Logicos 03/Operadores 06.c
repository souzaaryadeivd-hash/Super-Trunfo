#include <stdio.h>
    int main () {
        int opção;
        float saldo = 1550.55;

        printf ("Escolha uma opção:\n");

        printf ("Opção 1: Verificar Saldo\n");
        printf ("Opção 2: Fazer um depósito\n");
        printf ("Opção 3: Fazer saque\n");
        printf ("Opção 4: Falar com uma atendente\n");
            scanf ("%d", &opção);



        switch (opção)
        {
            case 1: printf ("O seu saldo é de: R$ %f\n", saldo);
            break;

            case 2: printf ("Informe o banco: \n");
                    printf ("informa a agencia: \n");
                    printf ("informe a conta: \n");
            break;

            case 3: printf ("Informe o valor para sacar: \n");
            break;

            case 4: printf ("Aguarde que uma atendente ira falar com o senhor\n");

            default: printf ("Opção invalida\n");
        }


        return 0;
    }