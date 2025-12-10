#include <stdio.h>

int main()
{
    int vetor[15];

    for (int i = 0; i < 15; i++)
    {
        printf("Digite o numero %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    printf("\nVetor completo: ");
    for (int i = 0; i < 15; i++)
    {
        printf("%d ", vetor[i]);
    }

    printf("\n\nMultiplos de 10 nas posicoes: ");
    int encontrou = 0;
    for (int i = 0; i < 15; i++)
    {
        if (vetor[i] % 10 == 0)
        {
            printf("%d ", i);
            encontrou = 1;
        }
    }
    if (!encontrou)
        printf("Nenhum");
    printf("\n");

    return 0;
}
