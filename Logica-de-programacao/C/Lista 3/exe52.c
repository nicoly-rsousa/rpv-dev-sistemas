#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int idade[10], cont = 0, contidad = 0, maiori = 0, menor5 = 0;
    float media = 0;
    while (cont < 10)
    {
        printf("\nDigite a idade da %d pessoa: ", cont + 1);
        scanf("%d", &idade[cont]);
        media = media + idade[cont];
        if (idade[cont] > 18)
        {
            contidad = contidad + 1;
        }
        if (idade[cont] > idade[cont - 1])
        {
            maiori = idade[cont];
        }
        if (idade[cont] < 5)
        {
            menor5 = menor5 + 1;
        }

        cont++;
    }
    printf("\n\nMédia da idade do grupo: %.2f \n", media / 10);
    printf("Pessoas com mais de 18 anos: %d \n", contidad);
    printf("Maior idade lida : %d \n", maiori);
    printf("Pessoas com menos de 5 anos: %d \n", menor5);

    return 0;
}