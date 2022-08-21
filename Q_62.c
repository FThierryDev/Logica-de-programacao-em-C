/*62.  Escreva um programa que leia dois números inteiros M e N e verifique se N é múltiplo
de M.*/

#include <stdio.h>

int main()
{
    int num1, num2;

    printf("Insira os valores de M e N: ");
    scanf("%d%d", &num1, &num2);

    printf("\nM = %d\nN =%d", num1, num2);

    int multiplo = num1 % num2;

    if (multiplo == 0)
    {
        printf("\n\n%d eh multiplo de %d", num1, num2);
    }

    else
    {
        printf("\n\n%d nao eh multiplo de %d", num1, num2);
    }

    return 0;
}