/*153. Escreva  um  programa  que  leia  dez  números  inteiros  e,  após  finalizar  a  leitura,
imprima todos os números lidos na mesma ordem em que eles foram digitados.*/

#include <stdio.h>

const int VARIABLE = 10;

int main()
{
    int vet[VARIABLE];
    int i;

    for (i = 0; i < VARIABLE; i++)
    {
        printf("Insira um numero inteiro: ");
        scanf("%d", &vet[i]);
    }

    for (i = 0; i < VARIABLE; i++)
    {
        printf("%d ", vet[i]);
    }

    return 0;
}