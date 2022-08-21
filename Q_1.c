/*1. Escreva um programa que leia tr�s n�meros inteiros e calcule a sua m�dia aritm�tica.*/

#include <stdio.h>

int main()
{
	int num1, num2, num3;

	printf("Insira tres numeros inteiros: ");
	scanf("%d%d%d", &num1, &num2, &num3);

	int soma = num1 + num2 + num3;
	int med = soma / 3;

	printf("A media eh: %d", med);

	return 0;
}
