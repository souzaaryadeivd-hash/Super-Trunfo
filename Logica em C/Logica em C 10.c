#include <stdio.h>

int main (){

    float temperatura, umidade;
    int estoque, estoqueminimo;

    estoqueminimo = 100;

    printf ("Informe a temperatura: \n");
        scanf ("%f", &temperatura);
    printf ("Informe a umidadea: \n");
        scanf ("%f", &umidade);
    printf ("Informe o estoque: \n");
        scanf ("%d", &estoque);
        
     /*Temperatura*/
        if (temperatura > 40.5)
            {printf ("Temperatura alta\n");} 
                else {printf ("Temperatura baixa\n");}
      
        /*Umidade*/
        if (umidade > 30.5)
            {printf ("Umidade alta\n");}
                else {printf ("Umidade baixa\n");}
    /*Estoque*/
        if (estoque > estoqueminimo)
            {printf ("Estoque alto\n");}
                else {printf ("Estoque baixo\n");}


return 0;

}