/******************************************************************************
31. Crie um jogo de JoKenPo (Pedra-Papel-Tesoura)

*******************************************************************************/

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main()
{
    int jogador, computador;
    srand(time(NULL));
    computador = rand() % 3 + 1; // 1-Pedra, 2-Papel, 3-Tesoura
    printf("Escolha uma opcao:\n1-Pedra\n2-Papel\n3-Tesoura\n");
    scanf("%d", &jogador);
    if (jogador < 1 || jogador > 3)
    {
        printf("Opcao invalida!");
    }
    else
    {
        if (jogador == computador)
        {
            printf("Empate!");
        }
        else if ((jogador == 1 && computador == 3) || (jogador == 2 && computador == 1) || (jogador == 3 && computador == 2))
        {
            printf("Voce venceu!");
        }
        elses
        {
            printf("Computador venceu!");
        }
    }
    return 0;
}