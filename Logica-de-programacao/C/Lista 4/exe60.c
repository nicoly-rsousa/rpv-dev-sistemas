#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <limits.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    char nome[50], nome_m_jovem[50] = "", nome_m_velha[50] = "", sexo;
    int idade, resp = 0, p = 0, idades = 0, mais_de_30 = 0, menos_de_18 = 0;
    int idade_max = 0;
    int idade_min_mulher = INT_MAX;
    float media;

    while (resp != 2)
    {
        printf("Digite seu nome: ");
        scanf(" %49s", nome);

        printf("Digite a sua idade: ");
        scanf("%d", &idade);

        idades += idade;
        p++;

        printf("Digite seu sexo (M/F): ");
        scanf(" %c", &sexo);

        printf("Deseja continuar? 1-sim, 2-Não: ");
        scanf("%d", &resp);

        if (idade > idade_max)
        {
            idade_max = idade;
            strcpy(nome_m_velha, nome);
        }

        if (idade > 30 && (sexo == 'M' || sexo == 'm'))
        {
            mais_de_30++;
        }

        if (idade < 18 && (sexo == 'F' || sexo == 'f'))
        {
            menos_de_18++;
        }

        if (sexo == 'F' || sexo == 'f')
        {
            if (idade < idade_min_mulher)
            {
                idade_min_mulher = idade;
                strcpy(nome_m_jovem, nome);
            }
        }
    }

    if (p > 0)
    {
        media = (float)idades / p;
        printf("\nO nome da pessoa mais velha: %s", nome_m_velha);
        printf("\nO nome da mulher mais jovem: %s", nome_m_jovem);
        printf("\nA média de idade do grupo: %.2f", media);
        printf("\nQuantos homens tem mais de 30 anos: %d", mais_de_30);
        printf("\nQuantas mulheres tem menos de 18 anos: %d", menos_de_18);
    }
    else
    {
        printf("\nNenhuma pessoa cadastrada.\n");
    }

    return 0;
}
