/*4. Escreva  um  programa  que leia o  número  inteiro  positivo  e  calcule  o  seu  dobro, o seu
triplo, o seu quadrado, o seu cubo e a sua raiz quadrada.*/

#include <stdio.h>
#include <math.h>

int main()
{
    int numero;

    printf("Insira um numero: ");
    scanf("%d", &numero);

    printf("Numero inserido: %d", numero);

    int dobro = numero * 2;
    int triplo = numero * 3;
    int quadrado = numero * numero;
    int cubo = pow(numero, 3);
    int raiz = sqrt(numero);

    printf("\nDobro = %d \nTriplo = %d \nQuadrado = %d \nCubo = %d \nRaiz Quadrada = %d", dobro, triplo, quadrado, cubo, raiz);

    return 0;
}