/*202. Escreva um programa que leia o valor do raio de  uma circunferência e  calcule a sua
área e o seu comprimento. O programa deve fornecer um subprograma para calcular
a área e outro para calcular o comprimento.*/

#include <stdio.h>

#define PI 3.14

int calcArea(int raio)
{
    int area = PI * (raio * raio);

    return area;
}

int calcComprimento(int raio)
{
    int comprimento = 2 * PI * raio;

    return comprimento;
}

int main()
{
    int raio, area, comprimento;

    printf("Insira o valor do raio da circunferencia: ");
    scanf("%d", &raio);

    area = calcArea(raio);
    comprimento = calcComprimento(raio);

    printf("Area = %d\nComprimento = %d", area, comprimento);

    return 0;
}