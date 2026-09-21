#include <stdio.h>
int main () {
    int temperatura;
    int resultado;

        printf ("Informe temperatura: \n");
        scanf("%d", &temperatura);

    resultado = temperatura > 30 ? 1 : 0; 
    if (resultado == 1)
    {
        printf ("Esta calor! \n"); 
    }
    else if (resultado == 0)
    {
        printf ("Esta frio! \n"); 
    }

    return 0;

}