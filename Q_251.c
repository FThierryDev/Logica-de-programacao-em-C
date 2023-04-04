/*Q_251.Escreva um subprograma recursivo que receba como entrada um número inteiro não
negativo e calcule o seu fatorial.*/

#include <stdio.h>

int fatorial(int n)
{
    if (n == 0 || n == 1)
    {
        return 1;
    }

    return n * fatorial(n - 1);
}

int main()
{
    int n;

    printf("Insira um numero inteiro nao negativo: ");
    scanf("%d", &n);

    int valFatorial = fatorial(n);

    printf("O fatorial de %d eh %d", n, valFatorial);

    return 0;
}