#include <stdio.h>

const float centimetros = 2.54;

int main()
{

    int polegada;

    printf("Insira um valor em polegadas: ");
    scanf("%d", &polegada);

    float resultado = polegada * centimetros;

    printf("Valor em centimetros: %.2f", resultado);

    return 0;
}