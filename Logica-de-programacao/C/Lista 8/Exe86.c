
#include <stdio.h>

int main()
{
    int valor = 2;
    int cont = 0, i, j;
    int mat[valor][valor];
    int result = 0;
    for (i = 0; i < valor; i++)
    {
        for (j = 0; j < valor; j++)
        {
            printf("Digite %d valor da matriz: ", cont + 1);
            scanf("%d", &mat[i][j]);
            result = mat[i][j];
            cont++;
        }
    }
    printf("\n\nMatriz Toda:\n");
    for (i = 0; i < valor; i++)
    {
        for (j = 0; j < valor; j++)
        {
            printf("%d \n", mat[i][j]);
        }
    }
    printf("\n\nMatriz com valores impares:\n");
    for (i = 0; i < valor; i++)
    {
        for (j = 0; j < valor; j++)
        {
            if (!(mat[i][j] % 2 == 0))
            {
                printf(" %d \n", mat[i][j]);
            }
        }
    }

    return 0;
}