#include <stdio.h>

int main () {
    int numero;

    printf ("Informe um numero: \n");
        scanf("%d", &numero);

    do
    {
         printf ("%d\n", numero);
        numero++;
    }
    while (numero == 5);
    
    
    return 0;
}