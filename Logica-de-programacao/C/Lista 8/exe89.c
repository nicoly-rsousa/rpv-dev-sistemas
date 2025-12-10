#include <stdio.h>
int main()
{
    int mat[2][2];
    int determinante;

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("Digite o valor da matriz [%d][%d]: ", i, j);
            scanf("%d", &mat[i][j]);
        }
    }

    determinante = (mat[0][0] * mat[1][1]) - (mat[0][1] * mat[1][0]);
    printf("\nO determinante da matriz é: %d\n", determinante);

    return 0;
}