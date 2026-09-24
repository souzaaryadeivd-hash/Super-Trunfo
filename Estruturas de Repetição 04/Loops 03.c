#include <stdio.h>

int main () {

    int numero1;

    do
    {
        printf("Digite um número PAR para sar do progarama: \n");
        scanf ("%d", &numero1);

        if (numero1 % 2 == 0)
        {
            printf ("Esse numero e par %d \n", numero1);
        } else {
            printf ("Esse numero e Impar %d \n", numero1);
        }
              

    } while (numero1 % 2 !=0);

    printf ("Você informou um numero PAR. \n GAMER OVER!!!");

    numero1 ++;
    

    return 0;
}