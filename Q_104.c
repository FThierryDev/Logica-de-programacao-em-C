/*104. Escreva  um  programa  que  leia  um  número  inteiro  N  e  verifique  se  ele  é  um  número
perfeito. Um número é  perfeito quando ele é  igual à soma de  todos os seus divisores
exatos exceto ele mesmo. Por exemplo, o número 6 (1+2+3) é um número perfeito.*/

#include <stdio.h>

int main()
{
    int i, numero, soma = 0;

    printf("Insira um numero inteiro: ");
    scanf("%d", &numero);

    for (i = 1; i <= numero / 2; i++)
    {
        if (numero % i == 0)
        {
            soma += i;
        }
    }

    if (soma == numero)
    {
        printf("O numero %d eh um numero perfeito!!!", numero);
    }
    else{
        printf("O numero %d nao eh um numero perfeito!!!", numero);
    }

    return 0;
}