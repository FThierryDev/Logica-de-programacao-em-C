/*58.  Escreva um programa que leia um número inteiro e verifique se ele é par ou ímpar.*/

#include <stdio.h>

int main()
{
    int numero;

    printf("Insira um numero: ");
    scanf("%d", &numero);

    int resto = numero % 2;

    if (resto == 0)
    {
        printf("Numero %d eh Par!", numero);
    }

    else
    {
        printf("Numero %d eh Impar!", numero);
    }

    return 0;
}
