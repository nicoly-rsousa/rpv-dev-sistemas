/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby,
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
  float dinheiro = 0, result = 0;
  printf("CONVERSÃO REAL PARA DÓLAR:\n ");
  printf("Escreva o valor que você tem em carteira (R$): ");
  scanf("%f", &dinheiro);
  result = dinheiro / 3.45;
  printf("O valor em (R$) %.2f corresponde a: %.2f (US$) \n", dinheiro, result);

  return 0;
}