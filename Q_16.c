#include <stdio.h>

int main()
{
    char letra;

    printf("Informe uma letra minuscula: ");
    scanf("%c", &letra);

    char letraMaiuscula = letra - 32;

    printf("A letra informada foi => %c \nE sua  correspondente maiuscula eh %c", letra, letraMaiuscula);
}