/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby,
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <math.h>

int main()
{
  float sal = 0;
  printf("Qual o seu salário? ");
  scanf("%f", &sal);
  printf("Novo salário, com 15%% de aumento:\n\n");
  printf("O valor do seu salário ATUAL é: %.2f", sal * 0.15 + sal);
}