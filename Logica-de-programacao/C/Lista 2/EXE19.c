/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby,
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
  char nome[60];
  float n1 = 0, n2 = 0, nota = 0;

  printf("Digite seu nome: ");
  scanf("%s", nome);
  printf("Primeira nota: ");
  scanf("%f", &n1);
  printf("Segunda nota: ");
  scanf("%f", &n2);
  printf("Ola, %s : nota 1: %.2f, nota 2: %.2f ", nome, n1, n2);
  nota = n1 + n2 / 2;
  if (nota > 7)
  {
    printf("Parabéns, VOCE TEVE UM BOM APROVEITAMENTO!");
  }
  else
  {
    printf("VOCE NAO TEVE UM BOM APROVEITAMENTO!");
  }

  return 0;
}