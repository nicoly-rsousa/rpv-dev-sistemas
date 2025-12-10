#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int cont = 0, h = 0, m = 0, idadm = 0, idade[10];
    char sexo;
    float media = 0, medh = 0;

    while (cont < 5)
    {
        printf("\nDigite a idade da %dª pessoa: ", cont + 1);
        scanf("%d", &idade[cont]);

        printf("Digite o sexo da %dª pessoa ('F' para feminino, 'M' para masculino): ", cont + 1);
        scanf(" %c", &sexo); // espaço antes de %c para limpar buffer

        if (sexo == 'M' || sexo == 'm')
        {
            h++;
            medh += idade[cont];
        }
        else if (sexo == 'F' || sexo == 'f')
        {
            m++;
            if (idade[cont] > 20)
            {
                idadm++;
            }
        }

        media += idade[cont];
        cont++;
    }

    printf("\n--- RESULTADOS ---\n");
    printf("Homens cadastrados: %d\n", h);
    printf("Mulheres cadastradas: %d\n", m);
    printf("Média de idade do grupo: %.2f\n", media / cont);
    if (h > 0)
        printf("Média de idade dos homens: %.2f\n", medh / h);
    else
        printf("Nenhum homem cadastrado.\n");
    printf("Mulheres com mais de 20 anos: %d\n", idadm);

    return 0;
}
