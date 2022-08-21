/*204. Escreva um programa que leia o valor de cinco temperaturas em Celsius e, para cada
valor lido, calcule o seu valor correspondente em Fahrenheit e em Kelvin. Os cálculos
das conversões devem ser realizados através de subprogramas.*/

#include <stdio.h>

const int TAMANHO = 5;

int convertFahrenheint(int *vetC[TAMANHO])
{
    int i, vet2C[TAMANHO];
    for (i = 0; i < TAMANHO; i++)
    {
        vet2C[i] = (vetC[i] * 1.8) + 32;
    }

    return *vet2C[TAMANHO];
}

int main()
{
    int i, vetC[TAMANHO];

    for (i = 0; i < TAMANHO; i++)
    {
        printf("Insira as temperaturas em Celsius: \n");
        scanf("%d", &vetC[i]);
    }

    printf("Temperaturas em Celsius:\n");

    for (i = 0; i < TAMANHO; i++)
    {
        printf("%d ", vetC[i]);
    }

    return 0;
}