#include <stdio.h>
int main () {
    int num1, num2;
    int maior;

    printf ("Informe o numero 1: \n", num1); 
        scanf("%d", &num1);
    printf ("Informe o numero 2: \n", num2);
        scanf("%d", &num2);

    num1 > num2 ? (maior = num1) : (maior = num2);

    if (num1 > num2)
{
    printf ("O numero maior é: %d\n", num1);
}
else
{
    printf ("O numero maior é: %d\n", num2);
}
    return 0;
}