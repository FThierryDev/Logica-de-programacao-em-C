/*7. Escreva um programa que leia o valor da base e da altura de um triângulo e calcule a  q
a sua área.*/

#include <stdio.h>

int main()
{
    int base, altura, area;

    printf("Insira o valor da base do triangulo: ");
    scanf("%d", &base);

    printf("Insira o valor da altura do triangulo: ");
    scanf("%d", &altura);

    printf("\nBase = %d\naltura = %d", base, altura);

    area = (base * altura) / 2;

    printf("\n\nO valor da area do triungulo eh: %d", area);

    return 0;
}