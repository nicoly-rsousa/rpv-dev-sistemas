#include <stdio.h>

int main()
{

    int i, j;
    int matA[4][4], matB[4][4], matSoma[4][4];
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            printf("Digite o valor da matriz A [%d][%d]: ", i, j);
            scanf("%d", &matA[i][j]);
        }
    }
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            printf("Digite o valor da matriz B [%d][%d]: ", i, j);
            scanf("%d", &matB[i][j]);
        }
    }
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            matSoma[i][j] = matA[i][j] + matB[i][j];
        }
    }
    printf("\nMatriz Soma:\n");
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            printf("Matriz Soma [%d][%d] = %d \n", i, j, matSoma[i][j]);
        }
    }

    return 0;
}