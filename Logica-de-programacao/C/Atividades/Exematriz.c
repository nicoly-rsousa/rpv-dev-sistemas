
#include <stdio.h>

int main()
{
    int real = 0, cont = 0;
    int mat[2][3];
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Digite o valor de [%d]: ", cont + 1);

            scanf("%d", &mat[i][j]);
            real = real + mat[i][j];
            cont++;
        }
    }
    printf("\n\nValor total da média é %d", real / cont);

    return 0;
}