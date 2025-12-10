/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby,
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    float salario = 0, casa = 0, anos = 0, result = 0, comp = 0;
    printf("------------------------------EMPRESTIMO BANCARIO------------------------------\n");
    printf("Digite o valor da casa: ");
    scanf("%f", &casa);
    printf("Digite o seu salario: ");
    scanf("%f", &salario);
    printf("Digite quantos anos pretende pagar: ");
    scanf("%f", &anos);
    result = casa / (anos * 12);
    printf("\n---------------------------------------------------------------------------\n");
    if (result <= comp)
    {
        printf("Emprestimo pode ser concedido, PARCELA MENSAL: %.2f \n", result);
    }
    else
    {
        printf("Emprestimo nao pode ser concedido, PARCELA MENSAL: %.2f \n", result);
    }
    printf("\n---------------------------------------------------------------------------\n");
    return 0;
}