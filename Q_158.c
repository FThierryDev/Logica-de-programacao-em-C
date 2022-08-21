/*158. Escreva  um  programa  que  leia  um  vetor  de  10  números  inteiros  e,  após  terminar  a
leitura,  imprima  todos  os  elementos  do  vetor  que  são  maiores  do  que  a  média
aritmética de todos os elementos do vetor.*/

#include <stdio.h>

const int TAMANHO = 10;

int main()
{
    int i, vet[TAMANHO];
    int soma = 0;

    for (i = 0; i < TAMANHO; i++)
    {
        printf("Insira um numero inteiro: ");
        scanf("%d", &vet[i]);

        soma += vet[i];
    }

    int media = soma / 10;

    printf("Media = %d\nElementos maiores que a media: ", media);

    for (i = 0; i < TAMANHO; i++)
    {
        if (vet[i] > media)
        {
            printf("%d ", vet[i]);
        }
    }

    return 0;
}