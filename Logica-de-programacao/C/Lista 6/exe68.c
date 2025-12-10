#include <stdio.h>

int main()
{
    char sexo[8];
    float peso[8];
    int mulheres = 0, homens100kg = 0;
    float somaPesoMulheres = 0, maiorPesoHomens = 0;

    for (int i = 0; i < 8; i++)
    {
        printf("Digite o sexo da pessoa %d (M/F): ", i + 1);
        scanf(" %c", &sexo[i]);
        printf("Digite o peso: ");
        scanf("%f", &peso[i]);

        if (sexo[i] == 'F' || sexo[i] == 'f')
        {
            mulheres++;
            somaPesoMulheres += peso[i];
        }
        else if (sexo[i] == 'M' || sexo[i] == 'm')
        {
            if (peso[i] > 100)
            {
                homens100kg++;
            }
            if (peso[i] > maiorPesoHomens)
            {
                maiorPesoHomens = peso[i];
            }
        }
    }

    printf("\na) Mulheres cadastradas: %d\n", mulheres);
    printf("b) Homens com mais de 100kg: %d\n", homens100kg);

    if (mulheres > 0)
    {
        printf("c) Media de peso entre as mulheres: %.2f kg\n", somaPesoMulheres / mulheres);
    }
    else
    {
        printf("c) Nenhuma mulher cadastrada\n");
    }

    printf("d) Maior peso entre os homens: %.2f kg\n", maiorPesoHomens);

    return 0;
}
