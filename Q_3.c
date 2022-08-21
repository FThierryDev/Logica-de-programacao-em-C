/*3. Escreva um programa que leia o valor do lado de um quadrado e calcule a sua área e o
seu perímetro.*/

#include <stdio.h>

int main()
{
    int lado;

    printf("Insira o comprimento do lado do quadrado: ");
    scanf("%d", &lado);

    int area = lado * lado;
    int perimetro = lado * 4;

    printf("O valor da area do quadrado eh: %d", area);

    printf("\nO valor do perimetro do quadrado eh: %d", perimetro);

    return 0;
}