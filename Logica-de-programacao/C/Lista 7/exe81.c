#include <stdio.h>

int main()
{
    int idades[8], soma = 0, maior = 0;

    for (int i = 0; i < 8; i++)
    {
        printf("Digite a idade da pessoa %d: ", i + 1);
        scanf("%d", &idades[i]);
        soma += idades[i];
        if (idades[i] > maior)
            maior = idades[i];
    }

    float media = soma / 8.0;
    printf("\na) Media de idade: %.2f\n", media);

    printf("b) Posicoes com mais de 25 anos: ");
    int encontrou = 0;
    for (int i = 0; i < 8; i++)
    {
        if (idades[i] > 25)
        {
            printf("%d ", i);
            encontrou = 1;
        }
    }
    if (!encontrou)
        printf("Nenhuma");

    printf("\nc) Maior idade: %d\n", maior);

    printf("d) Posicoes da maior idade: ");
    for (int i = 0; i < 8; i++)
    {
        if (idades[i] == maior)
        {
            printf("%d ", i);
        }
    }
    printf("\n");

    return 0;
}