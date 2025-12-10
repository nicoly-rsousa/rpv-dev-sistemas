#include <stdio.h>
int main()
{
    int mat[1][10];
    int soma = 0;

    for (int j = 0; j < 10; j++)
    {
        printf("Digite o valor da matriz [0][%d]: ", j);
        scanf("%d", &mat[0][j]);
    }

    for (int j = 0; j < 10; j += 2) 
    {
        soma += mat[0][j];
    }

    printf("\nA soma dos elementos das colunas pares é: %d\n", soma);

    return 0;
}