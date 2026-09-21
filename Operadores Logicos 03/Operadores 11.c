#include <stdio.h>
int main () {
    int idade;
    int resultado;

    printf ("Informe a sua idade: \n");
        scanf("%d", &idade);
        

    resultado = idade >= 18 ? 1 : 0 ;
    if (resultado == 1)
    {
        printf ("Vocẽ e maior de idade! \n"); 
    }
    else if (resultado == 0)
    {
        printf ("Você é menor de idade! \n");
    }


/*if ()
{
   
;}

else 

{
   
;}*/


    return 0;
}