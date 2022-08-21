/*157. Escreva  um  programa  que  leia  um  vetor  de  10  números  inteiros  e,  após  terminar  a
leitura,  leia  um  número  inteiro  N  e  imprima  todas  as  posições  em  que  o  número  N
aparece dentro do vetor.*/

#include <stdio.h>

const int TAMANHO = 10;

int main()
{
    int i, numero, vet[TAMANHO];

    for (i = 0; i < TAMANHO; i++)
    {
        printf("Insira um numero inteiro: ");
        scanf("%d", &vet[i]);
    }

    printf("Insira um numero inteiro para fins de teste: ");
    scanf("%d", &numero);

    for (i = 0; i < TAMANHO; i++)
    {
        if (vet[i] == numero)
        {
            printf("\nPosicao: %d", i);
        }
    }

    return 0;
}