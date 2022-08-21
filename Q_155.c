/*155. Escreva um programa que leia dez números inteiros e, após finalizar a leitura, leia um
número inteiro N (entre 1 e  10) e  imprima qual foi o enésimo número digitado pelo
usuário.*/

#include <stdio.h>

const int QUANTIDADE = 10;

int main()
{
    int vet[QUANTIDADE];
    int i, num;

    for (i = 0; i < QUANTIDADE; i++)
    {
        printf("Insira um numero: ");
        scanf("%d", &vet[i]);
    }

    printf("Insira um numero para analise (1 - %d): ", QUANTIDADE);
    scanf("%d", &num);

    if (num >= 1 && num <= QUANTIDADE)
    {

        printf("O %d numero informado foi: %d", num, vet[num - 1]);
    }
    else
    {
        printf("VALOR INVALIDO!!!");
    }

    return 0;
}