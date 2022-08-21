/*63.  Escreva  um  programa  que  leia  o  número  de  gols  marcados  pelo  time  da  casa  e  o
número de gols marcado pelo time visitante e verifique se o jogo foi vencido pelo time
da casa, pelo time visitante ou se terminou empatado.*/

#include <stdio.h>

int main()
{
    int home, visitors;

    printf("Insira os gols marcados pelo time da casa: ");
    scanf("%d", &home);

    printf("Insira os gols marcados pelo time visitante: ");
    scanf("%d", &visitors);

    if (home > visitors)
    {
        printf("\nO jogo foi vencido pelo time da casa!");
    }
    else if (visitors > home)
    {
        printf("\nO jogo foi vencido pelo time visitante!");
    }
    else
    {
        printf("\nO jogo terminou empatado!");
    }

    printf("\n\nPlacar:\nHOME : %d\nVISITORS: %d", home, visitors);

    return 0;
}