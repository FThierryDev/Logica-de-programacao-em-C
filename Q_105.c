/*105. Escreva um programa que leia dois números inteiros M e N e calcule a soma de todos
os números do intervalo [M, N].*/

#include <stdio.h>

int main()
{
    int i, m, n;

    printf("Insira os valores do intervalo: ");
    scanf("%d%d", &m, &n);

    int soma = 0;

    for (i = m; i <= n; i++)
    {
        soma = soma + i;
    }

    printf("\nA soma dos numeros no intervalo entre %d e %d eh: %d", m, n, soma);

    return 0;
}