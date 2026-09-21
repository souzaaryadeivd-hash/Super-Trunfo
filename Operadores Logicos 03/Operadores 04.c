#include <stdio.h>
int main (){
    /*Verificação de idade e altura*/
    //Idade entre 18 e 30 anos.
    //Altura superior a 1.70

    int idade;
    float altura;

    printf ("Informe sua idade: \n");
    scanf ("%d", &idade);
    printf ("Informe sua altura: \n");
    scanf ("%f", &altura);

    printf ("Sua idade e %d anos.\n", idade);

    printf ("Sua altura e %.2f metros.\n", altura);

        if ((idade >= 18 && idade <= 30) && (altura >= 1.70))
                {printf ("Voce esta apto a participar do processo seletivo.\n");}
                else 
                    {printf ("Voce não esta apto a participar do processo seletivo.\n");}

    return 0;

}