/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    float triag = 0, a = 0, b = 0, c = 0;
    printf("Digite o segmento dos tres lados do triangulo ");
    scanf("%f%f%f", &a, &b, &c);
    if (a > b + c || b > a + c || c > a + b)
    {
        printf("O triangulo NÃO EXISTE!");
    }
    else
    {
        printf("É POSSIVEL FORMAR UM TRIANGULO COM ESSAS MEDIDAS: ");
    }

    return 0;
}