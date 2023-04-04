#include <stdio.h>

int main()
{
    char palavra[30];
    int posicao;

    printf("Informe uma palavra: ");
    scanf("%s", palavra);

    printf("Insira a posicao do caracter: ");
    scanf("%d", &posicao);
    posicao = posicao - 1;

    char caracter = palavra[posicao];

    printf("O %d caracter eh %c", posicao + 1, caracter);

    return 0;
}