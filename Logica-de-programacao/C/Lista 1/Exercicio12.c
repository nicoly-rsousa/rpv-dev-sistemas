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
  float prod = 0;
  printf("Qual o preço do Produto?");
  scanf("%f", &prod);
  printf("O valor do produto com desconto de 5%% é: %.2f", prod * 0.05 + prod);
}