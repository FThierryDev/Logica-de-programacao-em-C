/*156. Escreva  um  programa  que  leia  um  vetor  de  10  números  inteiros  e,  após  terminar  a
leitura,  leia  um  número  inteiro  N  e  imprima  todos  os  elementos  do  vetor  que  são
maiores que N.*/

#include <stdio.h>

const int TAMANHO = 10;

int main()
{
    int vet[TAMANHO];
    int i, numero;

    for (i = 0; i < TAMANHO; i++)
    {
        printf("Insira um numero inteiro: ");
        scanf("%d", &vet[i]);
    }

    printf("\nInsira um numero inteiro para teste: ");
    scanf("%d", &numero);

    printf("\n");

    for (i = 0; i < TAMANHO; i++)
    {
        if (vet[i] > numero)
        {
            printf("%d ", vet[i]);
        }
    }

    return 0;
}