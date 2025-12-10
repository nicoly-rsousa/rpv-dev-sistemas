/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    char nome[100];
    float salario = 0;
    printf("Qual Seu Nome?\n");
    scanf("%s", nome);
    printf("Qual O Seu Salário?\n");
    scanf("%f", &salario);
    printf("Nome do Funcionário: %s , Salário:%.2f", nome, salario);

    return 0;
}