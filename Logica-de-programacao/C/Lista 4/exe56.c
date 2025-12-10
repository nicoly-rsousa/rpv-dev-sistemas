#include <stdio.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL, "Portuguese");
    int soma = 0, valor = 0;
    printf("----------SOMA----------");
    do
    {
        printf("\nDigite um número: ");
        scanf("%d", &valor);
        if (valor != 1111)
        {
            soma = soma + valor;
        }

    } while (valor != 1111);

    printf("-----------------------");
    printf("\nSOMA: %d", soma);
    return 0;
}
