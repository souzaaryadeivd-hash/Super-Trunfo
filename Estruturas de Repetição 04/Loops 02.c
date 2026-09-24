#include <stdio.h>

int main () {

    int i = 0;

    while (i <= 10)
    {
        if (i % 2 == 0)
        {
            printf ("Seu numero %d é PAR! \n", i);
        }
       /* else if (i % 2 == 1);
        {
            printf ("Seu numero %d é IMPAR \n", i);
        }*/
        

        i++;
    }
    


    return 0;
}