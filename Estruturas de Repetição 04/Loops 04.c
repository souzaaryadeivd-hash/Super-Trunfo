#include <stdio.h>

/*Realizar um programa para fazer a tabuada*/

int main () {

    int numero1, i;

    printf("Informe um número: \n", numero1);
    scanf ("%d", &numero1);

    for (i = 0; i <= 10; i++)
    {
        printf ("%d x %d = %d \n", i, numero1, i * numero1);
    }
    






    return 0;
}