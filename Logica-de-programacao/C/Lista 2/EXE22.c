/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int idade = 0;
    printf("Digite a sua idade: ");
    scanf("%d", &idade);
    if (idade == 18)
    {
        printf("Periodo Certo Para Alistar!");
    }
    else if (idade < 18 && idade > 0)
    {
        printf("Faltam %d anos para alistar, voce %d ano(s) de idade", idade - 18, idade);
    }
    else if (idade > 18)
    {
        printf("Voce esta atrasadado %d ano(s) para o alistamento, voce tem %d anos de idade!", idade - 18, idade);
    }
    else
    {
        printf("Idade Invalida!");
    }
    return 0;
}