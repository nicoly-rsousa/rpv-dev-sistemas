#include <stdio.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL, "Portuguese");
    float salario = 0, salariom = 0, salarioh = 0;
    char sexo, resp;
    printf("----------FUNCIONÁRIOS----------");
    do
    {
        printf("\nDigite o salário: ");
        scanf("%f", &salario);
        printf("Digite 'F' para Feminino e 'M' para Masculino: ");
        scanf(" %c", &sexo);
        if (sexo == 'f' || sexo == 'F')
        {
            salariom = salariom + salario;
        }
        else if (sexo == 'M' || sexo == 'm')
        {
            salarioh = salarioh + salario;
        }
        printf("\nDeseja continuar? ");
        scanf(" %c", &resp);

    } while (resp != 'n' && resp != 'N');

    printf("-----------------------------------");
    printf("\nSALÁRIO TOTAL MASCULINO: %.2f", salarioh);
    printf("\nSALÁRIO TOTAL FEMININO: %.2f", salariom);

    return 0;
}
