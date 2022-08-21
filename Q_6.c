/*6. Escreva um programa que leia um número inteiro e informe o seu antecessor e o seu
sucessor.*/

#include <stdio.h>

int main()
{
    int numero, antNumero, sucNumero;

    printf("Insira um numero: ");
    scanf("%d", &numero);

    antNumero = numero - 1;
    sucNumero = numero + 1;

    printf("Numero informado = %d\nAntecessor = %d\nSucessor = %d", numero, antNumero, sucNumero);

    return 0;
}