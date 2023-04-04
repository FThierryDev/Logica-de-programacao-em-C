#include <stdio.h>

int calculoIntervalo(int m, int n)
{
    if (m == n)
    {
        return m;
    }

    return m + calculoIntervalo(m + 1, n);
}

int main(void)
{
    int m, n;

    printf("Insira dois numeros para o calculo: ");
    scanf("%d%d", &m, &n);

    int valorSoma = calculoIntervalo(m, n);

    printf("Soma dos intervalos: %d", valorSoma);
}