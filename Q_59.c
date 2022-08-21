/*59.  Escreva  um  programa  que  leia  dois  números  e  determine  se  o  segundo  número  é
menor, igual ou maior que o primeiro.*/

#include <stdio.h>

int main()
{
    int num1, num2;

    printf("Insira dois numero inteiros: ");
    scanf("%d%d", &num1, &num2);

    if (num2 < num1)
    {
        printf("O segundo numero eh menor que o primeiro!");
    }

    else if (num2 > num1)
    {
        printf("O segundo numero eh maior que o primeiro!");
    }

    else
    {
        printf("O segundo numero eh igual ao primeiro!");
    }

    return 0;
}