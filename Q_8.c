/*8. Escreva um programa que leia o valor de uma temperatura em Celsius e calcule o seu
valor correspondente em Fahrenheit e em Kelvin.*/

#include <stdio.h>

int main()
{
    float tempCelsiu, tempFahrenheit, temKelvin;

    printf("Insira a temperatura em celsius: ");
    scanf("%f", &tempCelsiu);

    tempFahrenheit = (tempCelsiu * 1.8) + 32;
    temKelvin = tempCelsiu + 273.15;

    printf("Temperatura em Celsius: %.0f C\nTemperatura Fahrenheit: %.1f F\nTemperatura Kelvin: %.2f K", tempCelsiu, tempFahrenheit, temKelvin);

    return 0;
}