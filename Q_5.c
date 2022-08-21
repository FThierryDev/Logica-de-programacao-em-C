/*5. Escreva  um  programa  que  leia  o  valor  do  raio  de  uma  circunferência  e  calcule  a  sua
área e o seu comprimento.*/

#include <stdio.h>

#define PI 3.14

int main()
{
    int raio, area, comprimento;

    printf("Insira o valor do raio da circunferencia: ");
    scanf("%d", &raio);

    area = PI * (raio * raio);
    comprimento = 2 * PI * raio;

    printf("Area = %d \nComprimento = %d", area, comprimento);

    return 0;
}