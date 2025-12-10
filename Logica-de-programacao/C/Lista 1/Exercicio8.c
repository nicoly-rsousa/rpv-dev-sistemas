/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby,
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
  float dmetros = 0;
  printf("PROGRAMA QUE FAZ A LEITURA DE UM DISTÂNCIA EM METROS E CONVERSÃO:\n ");
  printf("Escreva uma distância em METROS: ");
  scanf("%f", &dmetros);
  printf("A distancia de %.2f corresponde a:\n", dmetros);
  printf("%.5f KM\n", dmetros / 1000);
  printf("%.4f HM\n", dmetros / 100);
  printf("%.3f Dam\n", dmetros / 10);
  printf("%.1f dm\n", dmetros * 10);
  printf("%.1f cm\n", dmetros * 100);
  printf("%.1f mm\n", dmetros * 1000);

  return 0;
}