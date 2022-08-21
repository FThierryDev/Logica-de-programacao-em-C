/*102. Escreva  um  programa  que  leia  um  número  inteiro  N  e  imprima  todos  os  seus
divisores exatos.*/

#include <stdio.h>

int main()
{
    int i, numero;

    printf("Insira um numero inteiro: ");
    scanf("%d", &numero);

    for (i = numero; i >= 0; i--)
    {
        int resto = numero % i;

        if (resto == 0)
        {
            printf("%d ", i);
        }
    }

    return 0;
}