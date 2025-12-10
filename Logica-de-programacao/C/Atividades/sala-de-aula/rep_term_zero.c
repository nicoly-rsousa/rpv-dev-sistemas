#include <stdio.h>

int main()
{
    int n = 1, result = 0;

    if (n != 0)
    {
        printf("------------------------------------------------------------------------\n");
        while (n != 0)
        {
            printf("Digite um numero inteiro: ");
            scanf("%d", &n);
            result = n + result;
            printf(" SOMA + %d = %d \n ", n, result);
            printf("\n------------------------------------------------------------------------\n");
        }
    }
    printf("RESULTADO = %d", result);
    return 0;
}