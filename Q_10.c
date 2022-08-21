/*10.  Escreva  um  programa  que  leia  o  valor  dos  dois  catetos  de  um  triângulo  retângulo  e
calcule o valor da hipotenusa.*/

#include <stdio.h>
#include <math.h>

int main()
{
    int cateto1, cateto2, hipotenusa;

    printf("Insira o valor dos dois catetos: ");
    scanf("%d%d", &cateto1, &cateto2);

    int quadradoA = pow(cateto1, 2);
    int quadradoB = pow(cateto2, 2);

    int quadradoC = quadradoA + quadradoB;

    hipotenusa = sqrt(quadradoC);

    printf("O valor da hipotenusa eh %d", hipotenusa);

    return 0;
}