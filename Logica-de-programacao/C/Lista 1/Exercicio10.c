/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby,
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
  float alt = 0, larg = 0, result = 0;
  printf("AREA A SER PINTADA:");
  printf("\nEscreva o valor da altura:");
  scanf("%f", &alt);
  printf("Escreva o valor da largura: ");
  scanf("%f", &larg);
  result = (larg * alt) / 2;
  printf("\n\nA quantidade de tinta necessária para o serviço é de : %.2f litros", result);

  return 0;
}