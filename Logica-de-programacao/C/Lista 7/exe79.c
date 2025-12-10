#include <stdio.h>

int main()
{
    int vetor[10];

    for (int i = 0; i < 10; i++)
    {
        printf("Digite o numero %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    printf("\nNumeros pares e suas posicoes:\n");
    int encontrou = 0;
    for (int i = 0; i < 10; i++)
    {
        if (vetor[i] % 2 == 0)
        {
            printf("Numero %d na posicao %d\n", vetor[i], i);
            encontrou = 1;
        }
    }
    if (!encontrou)
        printf("Nenhum numero par encontrado\n");

    return 0;
}