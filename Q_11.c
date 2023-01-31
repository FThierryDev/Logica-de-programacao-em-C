#include <stdio.h>

int main()
{
    float real, dolar;

    printf("Insira o valor em rais: ");
    scanf("%f", &real);

    printf("Insira a cotacao atual do dolar: ");
    scanf("%f", &dolar);

    float totalEmDolares = real * dolar;

    printf("O valor em dolares e: %.2f", totalEmDolares);

    return 0;
}