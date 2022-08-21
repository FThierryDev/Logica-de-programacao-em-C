/*199. Escreva um programa que leia três números inteiros e calcule a sua média aritmética.
O cálculo da média deve ser realizado através de um subprograma.*/

#include <stdio.h>

int media;

int mediaAritmetica(int num1, int num2, int num3)
{
    return media = (num1 + num2 + num3) / 3;
}

int main()
{
    int num1, num2, num3;

    printf("Insira tres numeros inteiro: ");
    scanf("%d%d%d", &num1, &num2, &num3);

    media = mediaAritmetica(num1, num2, num3);

    printf("A media aritmetica eh: %d", media);
    
    return 0;
}