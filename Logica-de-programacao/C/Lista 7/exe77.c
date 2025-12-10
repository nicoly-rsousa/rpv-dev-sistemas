#include <stdio.h>

int main()
{
    char nomes[7][50];

    for (int i = 0; i < 7; i++)
    {
        printf("Digite o nome %d: ", i + 1);
        scanf(" %s", nomes[i]);
    }

    printf("\nNomes na ordem inversa:\n");
    for (int i = 6; i >= 0; i--)
    {
        printf("%s\n", nomes[i]);
    }

    return 0;
}
