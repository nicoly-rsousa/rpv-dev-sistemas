
#include <stdio.h>

int main()
{

    int cont = 0, i, j;
    int mat[3][4];

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {
            printf("Digite %d valor da matriz: ", cont + 1);
            scanf("%d", &mat[i][j]);

            cont++;
        }
    }
    printf("\n\nTripo do Valor Matriz :\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {
            printf("Matriz [%d][%d] = %d \n", i, j, 3 * mat[i][j]);
        }
    }

    return 0;
}