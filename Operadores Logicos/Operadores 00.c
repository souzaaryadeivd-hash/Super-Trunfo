#include <stdio.h>

/*Operador Logico && (Retorna verdadeiro se ambas expressoes forem verdadeiras)*/

int main (){
    int a = -10, b = -5;

    if (a > 0 && b > 0)
    {printf ("Ambos são positivos\n");}
        else
            {printf ("Um dos numero e positivos\n");};

    return 0;
}