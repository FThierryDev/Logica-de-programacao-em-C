/*154. Escreva  um  programa  que  leia  dez  números  inteiros  e,  após  finalizar  a  leitura,
imprima todos os números lidos na ordem inversa em que eles foram digitados.*/

#include <stdio.h>

const int TAM = 9;

int main()
{
    int i, vet[TAM];

    for (i = 0; i <= TAM; i++)
    {
        printf("Insira um numero inteiro: ");
        scanf("%d", &vet[i]);
    }

    for (i = TAM; i >= 0; i--)
    {
        printf("%d ", vet[i]);
    }

    return 0;
}