#include <stdio.h>

int main()
{
    char nomes[9][50];
    int idades[9];

    for (int i = 0; i < 9; i++)
    {
        printf("Digite o nome da pessoa %d: ", i + 1);
        scanf(" %s", nomes[i]);
        printf("Digite a idade: ");
        scanf("%d", &idades[i]);
    }

    printf("\nMenores de idade:\n");
    int encontrou = 0;
    for (int i = 0; i < 9; i++)
    {
        if (idades[i] < 18)
        {
            printf("Nome: %s - Idade: %d\n", nomes[i], idades[i]);
            encontrou = 1;
        }
    }
    if (!encontrou)
        printf("Nenhum menor de idade encontrado\n");

    return 0;
}