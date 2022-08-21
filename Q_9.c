/*9. Escreva  um  programa  que leia o valor  de  uma  distância  percorrida em  km  e  o  tempo
gasto em horas e calcule a velocidade média em m/s.*/

#include <stdio.h>

int main()
{
    double quilometros, horas;

    printf("Insira a distancia percorrida em KM: ");
    scanf("%lf", &quilometros);

    printf("Insira o tempo gasto em horas: ");
    scanf("%lf", &horas);

    double vMedia = quilometros / horas;
    double mSegundos = vMedia / 3.6;

    printf("Velocidade media = %.2lf", mSegundos);

    return 0;
}