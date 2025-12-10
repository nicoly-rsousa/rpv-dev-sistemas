/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int n1 = 0, n2 = 0;

    printf("SOMATÓRIO DE DOIS NÚMEROS\n\n");
    printf("Digite o primerio número\n");
    scanf("%d", &n1);
    printf("Digite o segundo número\n");
    scanf("%d", &n2);
    printf("A SOMA ENTRE %d + %d é igual a %d", n1, n2, n1 + n2);

    return 0;
}