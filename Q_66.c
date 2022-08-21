/*66.  Escreva um programa que leia  o número de pessoas que vão participar  de um
churrasco e calcule quantos quilos de carne devem ser comprados. Para isso,
considere que cada pessoa consome 250 g de carne. A resposta do programa deve ser
um número inteiro.*/

#include <stdio.h>

int main()
{
    int pessoas;

    printf("Insira a quantidade de pessoas que vao participar do churrasco: ");
    scanf("%d", &pessoas);

    int quantidade = pessoas * 0.250;

    printf("Devera ser comprado %dKg de carne para o churrasco: ", quantidade);

    return 0;
}