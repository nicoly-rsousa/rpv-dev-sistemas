#include <stdio.h>
#include <locale.h>

int main()
{

    int idade = 0, total_idade = 0, idade21 = 0;
    float soma_idade = 0;

    int opcao = 1;

    setlocale(LC_ALL, "Portuguese");

    for (;;)
    {

        if (opcao == 1)
        {
            printf("Digite a sua idade: ");
            scanf("%d", &idade);

            if (idade >= 21)
            {
                idade21++;
            }
            total_idade++;
            soma_idade = soma_idade + idade;

            printf("Deseja continuar? (1-para SIM) (2- para NÃO) \n");
            scanf("%d", &opcao);
        }

        else if (opcao == 2)
        {
            printf("\n\n--- RESULTADO ---\n");
            printf("Total de idades digitadas: %d\n", total_idade);

            printf("Média das idades digitadas: %.2f\n", soma_idade / total_idade);

            printf("Pessoas com 21 anos ou mais: %d\n", idade21);

            break;
        }

        else
        {
            printf("\nOPÇÃO INVÁLIDA, DIGITE NOVAMENTE! \n");
            printf("Deseja continuar? (1-para SIM) (2- para NÃO) \n");
            scanf("%d", &opcao);
        }
    }

    return 0;
}