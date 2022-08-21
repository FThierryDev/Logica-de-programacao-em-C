/*159. Escreva  um  programa  que  leia  um  vetor  de  10  números  inteiros  e  dois  números
inteiros M e N entre 1 e 10 e inverta os elementos que ocupam as posições M e N do
vetor. O programa deve também imprimir o estado do vetor antes e após a inversão.*/

#include <stdio.h>

const int TAMANHO = 10;

int main()
{
    int vet[TAMANHO];
    int i, m, n;

    for (i = 0; i < TAMANHO; i++)
    {
        printf("Insira um numero inteiro: ");
        scanf("%d", &vet[i]);
    }

    printf("Insira as posicoes que voce deseja inverter: ");
    scanf("%d%d", &m, &n);

    if ((m >= 1 && m <= TAMANHO) && (n >= 1 && n <= TAMANHO))
    {
        printf("Vetor antes da inversao:\n");

        for (i = 0; i < TAMANHO; i++)
        {
            printf("%d", vet[i]);
        }

        int aux = vet[m - 1];
        vet[m - 1] = vet[n - 1];
        vet[n - 1] = aux;

        printf("\nVetor apos a inversao:\n");

        for (i = 0; i < TAMANHO; i++)
        {
            printf("%d", vet[i]);
        }
    }

    else
    {
        printf("Posicao invalida inserida!!!");
    }

    return 0;
}