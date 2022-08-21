/*200. Escreva um programa que leia o valor do lado de um quadrado e calcule a sua área e
o seu perímetro. O programa deve ter um subprograma para calcular a área e outro
para calcular o perímetro.*/

#include <stdio.h>

int calcArea(int lado)
{
    int area = lado * lado;
    return area;
}

int calcPerimetro(int lado)
{
    int perimetro = lado * 4;
    return perimetro;
}

int main()
{
    int lado, area, perimetro;

    printf("Insira o comprimento do lado do quadrado: ");
    scanf("%d", &lado);

    area = calcArea(lado);
    perimetro = calcPerimetro(lado);

    printf("O valor da area do quadrado eh: %d", area);
    printf("\nO valor do perimetro do quadrado eh: %d", perimetro);

    return 0;
}