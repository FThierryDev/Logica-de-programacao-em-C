/*65.  Escreva um programa que leia a idade de uma pessoa e verifique se ela é criança (0-12
anos), adolescente (13-17 anos), adulta (18-59) ou idosa (acima de 60 anos).*/

#include <stdio.h>

int main()
{
    int idade;

    printf("Insira sua idade: ");
    scanf("%d", &idade);

    if (idade >= 0 && idade <= 12)
    {
        printf("O usuario eh uma ciranca!!!");
    }
    else if (idade >= 13 && idade <= 17)
    {
        printf("O usuario eh um adolescente!!!");
    }
    else if (idade >= 18 && idade <= 59)
    {
        printf("O usuario eh um adulto!!!");
    }
    else if (idade >= 60)
    {
        printf("O usuario eh um idoso!!!");
    }

    return 0;
}