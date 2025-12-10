#include <stdio.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL, "Portuguese");
    int idade, qtd = 0;
    printf("----------FUNCIONÁRIOS----------\n");
    printf("Digite 999 para parar! \n\n");
    do
    {
        printf("Digite sua idade:");
        scanf("%d", &idade);
        if (idade != 999)
        {
            qtd++;
        }
    } while (idade != 999);

    printf("-----------------------------------");
    printf("\nQuantidade de Alunos: %d", qtd);

    return 0;
}
