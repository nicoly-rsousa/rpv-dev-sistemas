#include <stdio.h>
int main()
{
    int matA[3][4], matB[4][5], matProduto[3][5] = {0};

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("Digite o valor da matriz A [%d][%d]: ", i, j);
            scanf("%d", &matA[i][j]);
        }
    }

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("Digite o valor da matriz B [%d][%d]: ", i, j);
            scanf("%d", &matB[i][j]);
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            for (int k = 0; k < 4; k++)
            {
                matProduto[i][j] += matA[i][k] * matB[k][j];
            }
        }
    }

    printf("\nMatriz Produto:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("Matriz Produto [%d][%d] = %d \n", i, j, matProduto[i][j]);
        }
    }

    return 0;
}