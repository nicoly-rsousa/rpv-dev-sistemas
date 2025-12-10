#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int cont = 0;
    float maior = 0, menor = 0, i = 0;

    while (cont < 8)
    {
        printf("\nDigite o %d numero: ", cont + 1);
        scanf("%f", &i);
        if (cont == 0)
        {
            menor = i;
            maior = i;
        }
        else if (i > 0 && maior <= i)
        {
            maior = i;
        }
        if (i <= menor && i > 0)
        {
            menor = i;
        }
        cont++;

        printf("Maior Valor= %.2f | Menor Valor = %.2f \n", maior, menor);
    }
    return 0;
}