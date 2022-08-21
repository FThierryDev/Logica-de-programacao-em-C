/*61.  Escreva um programa que leia um número inteiro e determine o seu valor absoluto. O
valor  absoluto  deve  ser  calculado  sem  o  uso  de  qualquer  função  oferecida  pela
linguagem.*/

#include <stdio.h>

int main()
{
    int numero;

    printf("Insira um numero: ");
    scanf("%d", &numero);

    if (numero >= 0)
    {
        printf("Valor absoluto de %d = %d", numero, numero);
    }

    else
    {
        int absoluteVal = numero * -1;

        printf("Valor absoluto de %d = %d", numero, absoluteVal);
    }

    return 0;
}