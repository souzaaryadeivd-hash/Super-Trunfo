#include <stdio.h>
/*Operador Logico || (operador retorna verdadeiro pelo menos uma das expressões)*/
int main (){
    int a = -10, b = -5;

    if (a > 0 || b > 0)
    {printf ("Um dos numeros e positivo\n");}
        else
            {printf ("Os dois numeremos e negativos\n");};

    return 0;
}