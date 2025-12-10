#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int cont = 1, result = 0, result2 = 0, i;
    printf("---QUANTOS NUMEROS PARES | ÍMPARES---\n");
    printf("----------Digite 6 números----------\n");

    while (cont <= 7)
    {
        printf("\nDigite o %d numero: ", cont);
        scanf("%d", &i);
        if (i % 2 == 0)
        {
            result++;
        }
        else
        {
            result2++;
        }
        cont++;
    }

    printf("\nNúmeros PARES= %d | Números ÍMPARES = %d", result, result2);
    return 0;
}