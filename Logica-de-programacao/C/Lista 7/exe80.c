#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int vetor[30], chave;
    srand(time(NULL));

    printf("Numeros sorteados: ");
    for (int i = 0; i < 30; i++)
    {
        vetor[i] = (rand() % 15) + 1;
        printf("%d ", vetor[i]);
    }

    printf("\n\nDigite a chave para buscar: ");
    scanf("%d", &chave);

    printf("Chave %d encontrada nas posicoes: ", chave);
    int cont = 0;
    for (int i = 0; i < 30; i++)
    {
        if (vetor[i] == chave)
        {
            printf("%d ", i);
            cont++;
        }
    }
    if (cont == 0)
        printf("Nenhuma");
    printf("\nTotal de vezes sorteada: %d\n", cont);

    return 0;
}