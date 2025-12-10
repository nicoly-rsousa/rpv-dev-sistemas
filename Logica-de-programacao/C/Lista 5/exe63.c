#include <stdio.h>
#include <locale.h>
#include <limits.h>
#include <float.h>

int main()
{
    int resposta, num = 0, contador = 0, quantidade_pares = 0, menor_valor = INT_MAX, soma = 0;
    float media = 0;
    setlocale(LC_ALL, "Portuguese");

    for (;;)
    {
        printf("Deseja continuar? (1-Sim/2-Não): ");
        scanf("%d", &resposta);

        if (resposta == 1)
        {
            printf("Digite um número inteiro: ");
            scanf("%d", &num);

            soma = soma + num;
            contador++;

            if (num < menor_valor)
            {
                menor_valor = num;
            }

            if (num % 2 == 0)
            {
                quantidade_pares++;
            }
        }
        else if (resposta == 2)
        {
            if (contador > 0)
            {
                media = soma / contador;
                printf("\nSomatório entre todos os valores: %d \n", soma);
                printf("Menor valor digitado: %d\n", menor_valor);
                printf("A média entre todos os valores: %.2f\n", media);
                printf("Quantos valores são pares: %d\n", quantidade_pares);
            }
            else
            {
                printf("\nNenhum número foi digitado!\n");
            }
            break;
        }
        else
        {
            printf("Opção inválida! Digite 1 para continuar ou 2 para sair.\n");
        }
    }

    return 0;
}