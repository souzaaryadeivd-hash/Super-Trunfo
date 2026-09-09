#include <stdio.h>

int main () {
/*Verificação de temperatura usando a estrutura float (if) jutamente com (else if)*/

    float temperatura = -100.0;

    if (temperatura >= 0)
        {printf ("Temperatura positiva \n");}
                    else if (temperatura <= 0) 
                        {printf ("Temperatura negativa \n");}

return 0;

}