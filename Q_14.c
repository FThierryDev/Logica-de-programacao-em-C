#include <stdio.h>
#include <string.h>

int main()
{
    char palavra[30];

    printf("Informe uma palavra: ");
    scanf("%s", palavra);

    int tamanho = strlen(palavra);

    printf("A palavra %s tem %d caracteres", palavra, tamanho);

    return 0;
}