/*101. Escreva um programa que leia um número inteiro positivo N e imprima os N 
primeiros números ímpares positivos.*/

#include <stdio.h>

int main()
{
    int i, numero, contador;

    printf("Insira um numero: ");
    scanf("%d", &numero);

    contador = numero;

    for (i = 0; i <= contador; i++)
    {
        int par = i % 2;
        if (par != 0)
        {
            printf("%d ", i);
            contador++;
        }
    }

    return 0;
}