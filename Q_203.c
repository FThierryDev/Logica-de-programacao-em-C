/*203. Escreva um programa que leia o valor da base e da altura de um triângulo e calcule a
sua área, que deve ser calculada através de um subprograma.*/

#include <stdio.h>

int calcArea(int base, int altura)
{
    int area = (base * altura) / 2;

    return area;
}

int main()
{
    int base, altura;

    printf("Insira o valor da base do triangulo: ");
    scanf("%d", &base);

    printf("Insira o valor da altura do triangulo: ");
    scanf("%d", &altura);

    printf("\nBase = %d\naltura = %d", base, altura);

    int area = calcArea(base, altura);

    printf("\n\nO valor da area do triungulo eh: %d", area);

    return 0;
}