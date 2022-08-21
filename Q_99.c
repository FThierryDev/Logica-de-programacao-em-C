/*99.  Escreva um programa que imprima todos os números inteiros entre 1 e 100 em ordem
descendente.*/

#include <stdio.h>

int main()
{
    int i;

    for (i = 100; i > 0; i--)
    {
        printf("%d ", i);
    }

    return 0;
}