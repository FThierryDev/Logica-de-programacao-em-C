/*103. Escreva  um  programa  que  leia  um  número  inteiro  N  e  verifique  se  ele  é  um  número
primo.*/

#include <stdio.h>

int main()
{
    int i, numero;
    int cont = 0;

    printf("Insira um numero inteiro: ");
    scanf("%d", &numero);

    for (i = numero; i >= 1; i--)
    {
        int resto = numero % i;

        if (resto == 0)
        {
            cont++;
        }
    }

    if (cont == 2)
    {
        printf("O numero %d eh primo!", numero);
    }
    else
    {
        printf("O numero %d nao eh primo!", numero);
    }

    return 0;
}