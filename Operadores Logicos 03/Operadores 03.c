#include <stdio.h>
int main (){
    int a = 10;
    int b = 15;
    int c = 7;
    /*Verificar se o a e maior que zero se o b e menor que zero e se o c e igual a zero.*/
    // a > 0 = Verdadeiro
    // b < 0 = Verdadeiro
    // Verdadeiro && Verdadeiro = Verdadeiro
    // Verdadeiro || c == 0 
    // Verdadeiro || Falso = Verdadeiro

        if (a > 0 && b < 0 || c == 0)
            {printf ("A condição e verdadeira.\n");}
                else
                    {printf ("A condição e falsa.\n");}


    return 0;

}