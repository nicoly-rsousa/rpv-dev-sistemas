/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    float n1 = 0, n2 = 0, result = 0;

    printf("DIGITE DUAS NOTAS PARA O CALCULO DA MÉDIA NA DISCIPLINA\n\n");
    printf("Digite a primeira nota\n");
    scanf("%f", &n1);
    printf("Digite a segunda nota\n");
    scanf("%f", &n2);
    result = (n1 + n2) / 2;
    printf("A MÉDIA ENTRE %.2f E  %.2f É IGUAL A %.2f", n1, n2, result);

    return 0;
}