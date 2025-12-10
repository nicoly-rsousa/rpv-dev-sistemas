#include <stdio.h>

int main()
{
    char nomes[5][50], sexo[5];
    float salarios[5];

    for (int i = 0; i < 5; i++)
    {
        printf("Digite o nome do funcionario %d: ", i + 1);
        scanf(" %s", nomes[i]);
        printf("Digite o sexo (M/F): ");
        scanf(" %c", &sexo[i]);
        printf("Digite o salario: R$ ");
        scanf("%f", &salarios[i]);
    }

    printf("\nFuncionarias mulheres com salario acima de R$ 5000:\n");
    int encontrou = 0;
    for (int i = 0; i < 5; i++)
    {
        if ((sexo[i] == 'F' || sexo[i] == 'f') && salarios[i] > 5000)
        {
            printf("Nome: %s - Salario: R$ %.2f\n", nomes[i], salarios[i]);
            encontrou = 1;
        }
    }
    if (!encontrou)
        printf("Nenhuma funcionaria atende aos criterios\n");

    return 0;
}