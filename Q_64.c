/*64.  Escreva  um  programa  que  leia  um  número  inteiro  e  verifique  se  ele  é  positivo,
negativo ou neutro.*/

#include <stdio.h>

int main()
{
    int numero;

    printf("Insira um numero inteiro: ");
    scanf("%d", &numero);

    if (numero > 0)
    {
        printf("O numero %d eh posititvo!", numero);
    }
    else if (numero < 0)
    {
        printf("O numero %d eh negativo", numero);
    }
    else
    {
        printf("O numero %d eh neutro", numero);
    }

    return 0;
}