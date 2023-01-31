#include <stdio.h>

const float BIT = 8000;
const float BYTE = 1000;
const float MEGABYTE = 1000;
const float GYGABYTE = 1000;

int main()
{
    float kilobyte;

    printf("Insira um vamor em KB: ");
    scanf("%f", &kilobyte);

    float valorBit = kilobyte * BIT;
    float valorByte = kilobyte * BYTE;
    float valorMegabyte = kilobyte / MEGABYTE;
    float valorGigabyte = valorMegabyte / GYGABYTE;

    printf("Valor em:\nBit: %.0f\nByte: %.0f\nMegabyte: %.3f\nGigabyte: %.6f", valorBit, valorByte, valorMegabyte, valorGigabyte);

    return 0;
}