/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int idade = 0;
    float valor = 0, result = 0;
    char nome[100], sexo;
    printf("Digite seu nome: ");
    scanf("%s", nome);
    printf("Digite a sua idade: ");
    scanf("%d", &idade);
    printf("Digite o valor das compras: ");
    scanf("%f", &valor);
    printf("Digite seu sexo: (Letra 'F' para Feminino, 'M' para Masculino\n");
    scanf(" %c", &sexo);

    if (sexo == 'F' || sexo == 'f')
    {
        printf("MULHERES 13 %% DE DESCONTO!\n");
        result = valor - (valor * 0.13);
        printf("Valor final da COMPRA %.2f", result);
    }
    else if (sexo == 'M' || sexo == 'm')
    {
        printf("HOMENS 5 %% DE DESCONTO\n");
        result = valor - (valor * 0.05);
        printf("Valor final da COMPRA %.2f \n", result);
    }
    else
    {
        printf("Opção Invalida!");
    }
    return 0;
}