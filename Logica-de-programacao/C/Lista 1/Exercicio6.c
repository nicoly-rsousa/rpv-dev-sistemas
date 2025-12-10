/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int numero = 0, n1 = 0, n2 = 0;

    printf("DIGITE UM NÚMERO INTEIRO PARA SABER SEU ANTECESSOR E SEU SUCESSOR\n\n");
    printf("Digite o número:\n");
    scanf("%d", &numero);
    n1 = numero - 1;
    n2 = numero + 1;
    printf("O antecessor de %d é %d. O sucessor de %d é %d", numero, n1, numero, n2);

    return 0;
}