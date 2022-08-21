/*201. Escreva um programa que leia o número inteiro positivo e calcule o seu dobro, o seu
triplo, o seu quadrado, o seu cubo e a sua raiz quadrada. Cada uma das informações
solicitadas deve ser calculada através de um subprograma.*/

#include <stdio.h>
#include <math.h>

int funcaoDobro(int numero)
{
    int dobro = numero + numero;

    return dobro;
}

int funcaoTriplo(int numero)
{
    int triplo = funcaoDobro(numero) + numero;

    return triplo;
}

int funcaoQuadrado(int numero)
{
    int quadrado = pow(numero, 2);

    return quadrado;
}

int funcaoCubo(int numero)
{
    int cubo = funcaoQuadrado(numero) * numero;

    return cubo;
}

int funcaoRaiz(int numero)
{
    int raiz = sqrt(numero);
    return raiz;
}

int main()
{
    int numero;

    printf("Insira um numero: ");
    scanf("%d", &numero);

    printf("Numero inserido: %d\n\n", numero);

    int dobro = funcaoDobro(numero);
    int triplo = funcaoTriplo(numero);
    int quadrado = funcaoQuadrado(numero);
    int cubo = funcaoCubo(numero);
    int raiz = funcaoRaiz(numero);

    printf("Dobro = %d\nTriplo = %d\nQuadrado = %d\nCubo = %d\nRaiz = %d", dobro, triplo, quadrado, cubo, raiz);

    return 0;
}