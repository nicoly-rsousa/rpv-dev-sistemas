/*37. Uma empresa precisa reajustar o salário dos seus funcionários, dando um aumento de
acordo com alguns fatores. Faça um programa que leia o salário atual, o gênero do
funcionário e há quantos anos esse funcionário trabalha na empresa. No final, mostre o
seu novo salário, baseado na tabela a seguir:
• Mulheres
• menos de 15 anos de empresa: +5%
• de 15 até 20 anos de empresa: +12%
• mais de 20 anos de empresa: +23%
• Homens
• menos de 20 anos de empresa: +3%
• de 20 até 30 anos de empresa: +13%
• mais de 30 anos de empresa: +25% */

#include <stdio.h>

int main()
{
    float salario, novo_salario;
    int anos;
    char genero;
    printf("Digite o salario atual: ");
    scanf("%f", &salario);
    printf("Digite o genero (M/F): ");
    scanf(" %c", &genero);
    printf("Digite ha quantos anos trabalha na empresa: ");
    scanf("%d", &anos);
    if (genero == 'F' || genero == 'f')
    {
        if (anos < 15)
        {
            novo_salario = salario + (salario * 0.05);
            printf("Seu novo salario e R$%.2f", novo_salario);
        }
        else if (anos >= 15 && anos <= 20)
        {
            novo_salario = salario + (salario * 0.12);
            printf("Seu novo salario e R$%.2f", novo_salario);
        }
        else if (anos > 20)
        {
            novo_salario = salario + (salario * 0.23);
            printf("Seu novo salario e R$%.2f", novo_salario);
        }
        else
        {
            printf("Valor invalido!");
        }
    }
    else if (genero == 'M' || genero == 'm')
    {
        if (anos < 20)
        {
            novo_salario = salario + (salario * 0.03);
            printf("Seu novo salario e R$%.2f", novo_salario);
        }
        else if (anos >= 20 && anos <= 30)
        {
            novo_salario = salario + (salario * 0.13);
            printf("Seu novo salario e R$%.2f", novo_salario);
        }
        else if (anos > 30)
        {
            novo_salario = salario + (salario * 0.25);
            printf("Seu novo salario e R$%.2f", novo_salario);
        }
        else
        {
            printf("Valor invalido!");
        }
    }
    else
    {
        printf("Genero invalido!");
    }
    return 0;
}