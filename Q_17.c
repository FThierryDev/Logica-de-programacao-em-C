#include <stdio.h>

int main()
{
    int area, preco;

    printf("Insira a area da casa: ");
    scanf("%d", &area);

    printf("Preco por metro quadrado: ");
    scanf("%d", &preco);

    int valorCobrado = area * preco;

    printf("O preco cobrado seria de: %d", valorCobrado);

    return 0;
}