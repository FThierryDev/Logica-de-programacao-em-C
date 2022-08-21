/*2. Escreva um programa que leia tr�s n�meros e seus respectivos pesos e calcule a sua
m�dia ponderada.*/



#include <stdio.h>

const 

int main()
{
	int num1, num2, num3;
	int peso1, peso2, peso3;

	printf("Insira um numero inteiro: ");
	scanf("%d", &num1);

	printf("Insira um numero inteiro: ");
	scanf("%d", &num2);

	printf("Insira um numero inteiro: ");
	scanf("%d", &num3);

	printf("Insira o peso do numero 1: ");
	scanf("%d", &peso1);

	printf("Insira o peso do numero 2: ");
	scanf("%d", &peso2);

	printf("Insira o peso do numero 3: ");
	scanf("%d", &peso3);

	int valores1 = (peso1 * num1) + (peso2 * num2) + (peso3 * num3);
	int valores2 = peso1 + peso2 + peso3;

	int media = valores1 / valores2;

	printf("A media ponderada eh: %d", media);

	return 0;
}
