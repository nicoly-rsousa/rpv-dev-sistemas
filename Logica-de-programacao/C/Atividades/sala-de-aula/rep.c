#include <stdio.h>

int main()
{
    int n = 0;
    printf("Digite um numero inteiro: ");
    scanf("%d", &n);
    while (n != 0)
    {

        printf("o quadrado de %d e : %d \n \n ", n, n * n);
        printf("Digite um numero inteiro:");
        scanf("%d", &n);
    }
    return 0;
}