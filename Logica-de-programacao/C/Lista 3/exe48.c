#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int cont = 1, result = 0, n;

    printf("----------SOMATÓRIO----------\n");
    printf("7 numeros inteiros\n");
    printf("-----------------------------");
    while (cont <= 7)
    {
        printf("\nDigite o %d numero: ", cont);
        scanf("%d", &n);
        result = result + n;
        cont++;
    }
    printf("\nSOMATÓRIO = %d", result);
    return 0;
}