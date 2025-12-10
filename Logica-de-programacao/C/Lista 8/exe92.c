#include <stdio.h>
int main()
{
    float vendas[12][4];
    float totalMensal[12] = {0};
    float totalSemanal[4] = {0};
    float totalAnual = 0;

  
    for (int i = 0; i < 12; i++)
    {
        printf("Mês %d:\n", i + 1);
        for (int j = 0; j < 4; j++)
        {
            printf("Digite o valor das vendas da semana %d: ", j + 1);
            scanf("%f", &vendas[i][j]);
            totalMensal[i] += vendas[i][j];
            totalSemanal[j] += vendas[i][j];
            totalAnual += vendas[i][j];
        }
    }

   
    printf("\nTotal vendido em cada mês do ano:\n");
    for (int i = 0; i < 12; i++)
    {
        printf("Mês %d: R$ %.2f\n", i + 1, totalMensal[i]);
    }

    printf("\nTotal vendido em cada semana durante todo o ano:\n");
    for (int j = 0; j < 4; j++)
    {
        printf("Semana %d: R$ %.2f\n", j + 1, totalSemanal[j]);
    }


    printf("\nTotal vendido no ano: R$ %.2f\n", totalAnual);


    return 0;
}
